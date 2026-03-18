/*
 * XREFs of ACPIDevicePowerProcessGenericPhase @ 0x1C0003500
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C0028654 (ACPIIsPowerRequestBlocked.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDevicePowerProcessGenericPhase(_QWORD *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  _QWORD *v4; // rsi
  char v7; // bp
  unsigned __int32 v8; // r13d
  _QWORD *v9; // r15
  _QWORD *v10; // rbx
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // edi
  __int64 v13; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  v4 = (_QWORD *)*a1;
  v7 = 1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v8 = a3;
    while ( 1 )
    {
      v9 = (_QWORD *)*v4;
      v10 = v4;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 52, 1, 1);
      v12 = v11;
      if ( v11 >= v8 )
        KeBugCheckEx(0xA3u, 1uLL, 0xC1737uLL, 0LL, 0LL);
      _mm_lfence();
      v13 = *(_QWORD *)(a2 + 8LL * v11);
      if ( v13 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v4 + 52, 1, v11);
        if ( (*(int (__fastcall **)(_QWORD *))(v13 + 8LL * *((int *)v4 + 12)))(v4) >= 0 )
          goto LABEL_6;
        v12 = 0;
      }
      v4 = v9;
      if ( v12 == 1 )
      {
        if ( (unsigned __int8)ACPIIsPowerRequestBlocked(v10) )
        {
          v15 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v16 = (_QWORD *)v10[1], (_QWORD *)*v16 != v10) )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          v10[12] = a1;
          v17 = (_QWORD *)qword_1C0079078;
          if ( *(__int64 **)qword_1C0079078 != &AcpiPowerBlockedOnDependencyList )
            __fastfail(3u);
          *v10 = &AcpiPowerBlockedOnDependencyList;
          v10[1] = v17;
          *v17 = v10;
          qword_1C0079078 = (__int64)v10;
          goto LABEL_11;
        }
      }
      else if ( !v12 )
      {
        goto LABEL_10;
      }
      v7 = 0;
LABEL_10:
      if ( v12 == 2 )
        goto LABEL_22;
LABEL_11:
      if ( a4 == 1 && !v12 )
LABEL_22:
        ACPIDeviceCompleteRequest(v10);
LABEL_6:
      if ( v4 == a1 )
        return v7 == 0 ? 0x103 : 0;
      a2 = v18;
    }
  }
  return v7 == 0 ? 0x103 : 0;
}
