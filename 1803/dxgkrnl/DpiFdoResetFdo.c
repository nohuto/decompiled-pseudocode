/*
 * XREFs of DpiFdoResetFdo @ 0x1C01F8990
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01F5450 (DpiFdoHandleRemoveDevice.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C015C964 (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x1C01F03D8 (DxgkFreeUnicodeString.c)
 *     DpiRequestIoPowerState @ 0x1C01F1AF8 (DpiRequestIoPowerState.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01F1F0C (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  void *v5; // rcx
  DXGADAPTER *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 1232) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v3[3] = 275LL;
    v3[4] = 21LL;
    v3[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  ExDeleteResourceLite((PERESOURCE)(v1 + 3624));
  ExDeleteResourceLite((PERESOURCE)(v1 + 3168));
  if ( *(_QWORD *)(v1 + 3752) )
    DpiRequestIoPowerState(a1, 7, v4, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4648));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4664));
  DxgkFreeUnicodeString((_QWORD *)(v1 + 4712));
  v5 = *(void **)(v1 + 2592);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(v1 + 2592) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v1);
  v6 = *(DXGADAPTER **)(v1 + 3728);
  if ( v6 )
  {
    DxgkReleaseAdapterFdoReference(v6);
    *(_QWORD *)(v1 + 3728) = 0LL;
  }
  *(_DWORD *)(v1 + 3144) = 0;
  v7 = *(void **)(v1 + 3160);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 3160) = 0LL;
  }
  v8 = *(void **)(v1 + 3152);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 3152) = 0LL;
  }
  v9 = *(void **)(v1 + 4680);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 4680) = 0LL;
  }
  v10 = *(void **)(v1 + 4688);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v1 + 4688) = 0LL;
  }
  v11 = *(_QWORD **)(v1 + 4728);
  if ( v11 )
  {
    v12 = (void (__fastcall *)(_QWORD))v11[4];
    if ( v12 )
    {
      v12(v11[2]);
      memset((void *)(*(_QWORD *)(v1 + 4728) + 8LL), 0, 0x38uLL);
      v11 = *(_QWORD **)(v1 + 4728);
    }
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)(v1 + 4728) = 0LL;
    }
  }
}
