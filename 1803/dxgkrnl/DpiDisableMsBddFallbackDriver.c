/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C01FD140
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0148F0C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C015C534 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C015C9A8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, int *); // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  if ( qword_1C007A9E0 )
  {
    v4 = *(_QWORD *)(qword_1C007A9E0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v4 + 3728));
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
    DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v4 + 3728), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728));
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v4 + 3728));
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2608), 0);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdError(v8);
    }
    v9 = *(void (__fastcall **)(__int64, int *))(v4 + 992);
    v10 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 5264) = a1;
    v9(v10, &dword_1C007A9E8);
    *(_QWORD *)(v4 + 5264) = 0LL;
    if ( qword_1C007A9D8 == qword_1C007A9E0 )
      qword_1C007A9D8 = 0LL;
    dword_1C007AA88 = 2;
    Global = DXGGLOBAL::GetGlobal(v11);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v13, v14, v15);
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v2 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v2);
    return 3221225659LL;
  }
}
