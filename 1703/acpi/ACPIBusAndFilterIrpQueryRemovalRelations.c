/*
 * XREFs of ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0045B34
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00830B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0083480 (ACPIFilterIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     WPP_RECORDER_SF_dqqss @ 0x1C0046954 (WPP_RECORDER_SF_dqqss.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryRemovalRelations(ULONG_PTR a1, PVOID *a2)
{
  __int64 DeviceExtension; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rcx
  KIRQL v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rsi
  _QWORD **v14; // r12
  int v15; // eax
  _QWORD *v16; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // r14
  unsigned int *v19; // r15
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx
  int v23; // r9d
  _QWORD *i; // r15
  char *v25; // r8
  __int64 v26; // rdx
  char *v27; // rcx
  void *v28; // r13
  __int64 v29; // rcx
  const char *v30; // rax
  int v31; // [rsp+20h] [rbp-68h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  SIZE_T Size; // [rsp+A8h] [rbp+20h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v11 = v5[113];
    NewIrql = v10;
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 72);
    else
      v12 = 0LL;
    v13 = byte_1C0066CD0;
    if ( v12 )
    {
      v14 = (_QWORD **)(v12 + 48);
      v15 = 0;
      v16 = *(_QWORD **)(v12 + 48);
      while ( v16 != v14 )
      {
        v16 = (_QWORD *)*v16;
        ++v15;
      }
      if ( *a2 )
        v15 += *(_DWORD *)*a2;
      Size = 8LL * (unsigned int)(v15 - 1) + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x44706341u);
      v18 = PoolWithTag;
      if ( PoolWithTag )
      {
        v19 = (unsigned int *)*a2;
        if ( v19 )
        {
          memmove(PoolWithTag + 2, v19 + 2, 8LL * *v19);
          *v18 = *v19;
        }
        else
        {
          memset(PoolWithTag, 0, Size);
        }
        v20 = v5[1];
        v21 = byte_1C0066CD0;
        v22 = byte_1C0066CD0;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v21 = (const char *)v5[70];
          if ( (v20 & 0x400000000000LL) != 0 )
            v22 = (const char *)v5[71];
        }
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xCu,
          0x13u,
          (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
          (char)v5,
          v21,
          v22);
        for ( i = *v14; i != v14; i = (_QWORD *)*i )
        {
          v25 = byte_1C0066CD0;
          v26 = v5[1];
          v27 = byte_1C0066CD0;
          v28 = *(void **)(*(i - 1) + 736LL);
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v25 = (char *)v5[70];
            if ( (v26 & 0x400000000000LL) != 0 )
              v27 = (char *)v5[71];
          }
          WPP_RECORDER_SF_dqqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v26,
            (_DWORD)v25,
            v23,
            v31,
            *v18,
            (char)v28,
            (char)v5,
            (__int64)v25,
            (__int64)v27);
          if ( v28 && ObReferenceObjectByPointer(v28, 0, 0LL, 0) >= 0 )
            *(_QWORD *)&v18[2 * (*v18)++ + 2] = v28;
        }
        if ( *a2 )
          ExFreePoolWithTag(*a2, 0);
        *a2 = v18;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
    {
      v29 = v5[1];
      v30 = byte_1C0066CD0;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v13 = (const char *)v5[70];
        if ( (v29 & 0x400000000000LL) != 0 )
          v30 = (const char *)v5[71];
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xCu,
        0x15u,
        (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
        v4,
        (char)v5,
        v13,
        v30);
    }
    return v4;
  }
  else
  {
    v6 = *(_QWORD *)(DeviceExtension + 8);
    v7 = byte_1C0066CD0;
    v8 = byte_1C0066CD0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v5[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (const char *)v5[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xCu,
      0x12u,
      (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      0,
      (char)v5,
      v7,
      v8);
    return 3221225485LL;
  }
}
