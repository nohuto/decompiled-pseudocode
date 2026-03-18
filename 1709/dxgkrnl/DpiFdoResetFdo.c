/*
 * XREFs of DpiFdoResetFdo @ 0x1C01DEDB0
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C0101BAC (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0178784 (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x1C01DC1A0 (DxgkFreeUnicodeString.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01DC4D8 (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  void *v7; // rcx
  DXGADAPTER *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  void (__fastcall *v14)(_QWORD); // rax
  void *v15; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v3 + 1232) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v5[3] = 275LL;
    v5[4] = 21LL;
    v5[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  ExDeleteResourceLite((PERESOURCE)(v3 + 3624));
  ExDeleteResourceLite((PERESOURCE)(v3 + 3168));
  if ( *(_QWORD *)(v3 + 3752) )
    DpiRequestIoPowerState(a1, 7, v6, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 4576));
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 4592));
  DxgkFreeUnicodeString((_QWORD *)(v3 + 4640));
  v7 = *(void **)(v3 + 2592);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v3 + 2592) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v3);
  v8 = *(DXGADAPTER **)(v3 + 3728);
  if ( v8 )
  {
    DxgkReleaseAdapterFdoReference(v8);
    *(_QWORD *)(v3 + 3728) = 0LL;
  }
  *(_DWORD *)(v3 + 3144) = 0;
  v9 = *(void **)(v3 + 3160);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v3 + 3160) = 0LL;
  }
  v10 = *(void **)(v3 + 3152);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v3 + 3152) = 0LL;
  }
  v11 = *(void **)(v3 + 4608);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v3 + 4608) = 0LL;
  }
  v12 = *(void **)(v3 + 4616);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v3 + 4616) = 0LL;
  }
  v13 = *(_QWORD *)(v3 + 4656);
  if ( v13 )
  {
    v14 = *(void (__fastcall **)(_QWORD))(v13 + 32);
    if ( v14 )
    {
      v14(*(_QWORD *)(v13 + 16));
      memset((void *)(*(_QWORD *)(v3 + 4656) + 8LL), 0, 0x38uLL);
    }
    v15 = *(void **)(v3 + 4656);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)(v3 + 4656) = 0LL;
    }
  }
}
