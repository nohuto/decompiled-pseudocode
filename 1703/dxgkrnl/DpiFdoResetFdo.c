/*
 * XREFs of DpiFdoResetFdo @ 0x1C01C52A8
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01C41B0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C0102874 (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0174E60 (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x1C01C2AB4 (DxgkFreeUnicodeString.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01C2DEC (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rdx
  DXGADAPTER *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  void (__fastcall *v15)(_QWORD); // rax
  void *v16; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v3 + 1232) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v5[3] = 275LL;
    v5[4] = 21LL;
    v5[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  ExDeleteResourceLite((PERESOURCE)(v3 + 3600));
  ExDeleteResourceLite((PERESOURCE)(v3 + 3144));
  if ( *(_QWORD *)(v3 + 3728) )
    DpiRequestIoPowerState(a1, 7, v6, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 4480));
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 4496));
  DxgkFreeUnicodeString((_QWORD *)(v3 + 4544));
  v7 = *(void **)(v3 + 2592);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v3 + 2592) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v3);
  v9 = *(DXGADAPTER **)(v3 + 3704);
  if ( v9 )
  {
    DxgkReleaseAdapterFdoReference(v9, v8);
    *(_QWORD *)(v3 + 3704) = 0LL;
  }
  *(_DWORD *)(v3 + 3120) = 0;
  v10 = *(void **)(v3 + 3136);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v3 + 3136) = 0LL;
  }
  v11 = *(void **)(v3 + 3128);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v3 + 3128) = 0LL;
  }
  v12 = *(void **)(v3 + 4512);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v3 + 4512) = 0LL;
  }
  v13 = *(void **)(v3 + 4520);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(v3 + 4520) = 0LL;
  }
  v14 = *(_QWORD *)(v3 + 4560);
  if ( v14 )
  {
    v15 = *(void (__fastcall **)(_QWORD))(v14 + 32);
    if ( v15 )
    {
      v15(*(_QWORD *)(v14 + 16));
      memset((void *)(*(_QWORD *)(v3 + 4560) + 8LL), 0, 0x38uLL);
    }
    v16 = *(void **)(v3 + 4560);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)(v3 + 4560) = 0LL;
    }
  }
}
