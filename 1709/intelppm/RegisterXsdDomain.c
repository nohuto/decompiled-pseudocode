/*
 * XREFs of RegisterXsdDomain @ 0x1C0022A24
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     PepQueryPerfDomainInfo @ 0x1C003363C (PepQueryPerfDomainInfo.c)
 */

char __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v1; // rsi
  _DWORD *v3; // r12
  char v4; // r15
  char v5; // di
  __int64 v6; // rbx
  unsigned int v7; // r14d
  PVOID PoolWithTag; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx

  v1 = (_DWORD *)a1[65];
  v3 = (_DWORD *)a1[147];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  v6 = qword_1C00195F8;
  if ( (__int64 *)qword_1C00195F8 != &qword_1C00195F8 )
  {
    while ( *(_DWORD *)(v6 + 36) != v1[3] )
    {
      v6 = *(_QWORD *)v6;
      if ( (__int64 *)v6 == &qword_1C00195F8 )
        goto LABEL_4;
    }
    if ( v4 != *(_BYTE *)(v6 + 48) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids);
      goto LABEL_18;
    }
    goto LABEL_12;
  }
LABEL_4:
  v7 = 56;
  if ( v1 == v3 )
    v7 = 72;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_QWORD *)(v6 + 24) = v6 + 16;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    v9 = (__int64 *)qword_1C0019600;
    if ( *(__int64 **)qword_1C0019600 != &qword_1C00195F8 )
      __fastfail(3u);
    *(_QWORD *)v6 = &qword_1C00195F8;
    *(_QWORD *)(v6 + 8) = v9;
    *v9 = v6;
    qword_1C0019600 = v6;
    *(_DWORD *)(v6 + 36) = v1[3];
    *(_DWORD *)(v6 + 40) = v1[4];
    *(_DWORD *)(v6 + 44) = v1[5];
    *(_BYTE *)(v6 + 48) = v4;
LABEL_12:
    a1[66] = v6;
    v10 = *(_QWORD **)(v6 + 24);
    v11 = a1 + 67;
    if ( *v10 != v6 + 16 )
      __fastfail(3u);
    *v11 = v6 + 16;
    a1[68] = v10;
    *v10 = v11;
    *(_QWORD *)(v6 + 24) = v11;
    if ( ++*(_DWORD *)(v6 + 32) == *(_DWORD *)(v6 + 44)
      && (!*(_BYTE *)(v6 + 48) || (int)PepQueryPerfDomainInfo(a1, v6) >= 0) )
    {
      v5 = 1;
    }
  }
LABEL_18:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
  return v5;
}
