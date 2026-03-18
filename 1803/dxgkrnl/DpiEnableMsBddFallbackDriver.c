/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C01FD2B4
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0148F0C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C015C534 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C015C9A8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  void (__fastcall *v7)(__int64, int *, __int64, __int64); // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  if ( qword_1C007A9E0 )
  {
    v4 = *(_QWORD *)(qword_1C007A9E0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    if ( *(_QWORD *)(v4 + 3728) )
    {
      v7 = *(void (__fastcall **)(__int64, int *, __int64, __int64))(v4 + 984);
      v8 = *(_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 5264) = a1;
      LOBYTE(v6) = byte_1C007A75B;
      LOBYTE(v5) = dword_1C007AA88 == 1;
      v7(v8, &dword_1C007A9E8, v5, v6);
      *(_QWORD *)(v4 + 5264) = 0LL;
      byte_1C007A75B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v4 + 3728));
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 2);
      DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v4 + 3728), 1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728));
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v4 + 3728));
      v9 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2608), 1u);
      v11 = v9;
      if ( v9 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdError(v12);
      }
      memset(&dword_1C007A9E8, 0, 0x20uLL);
      dword_1C007AA00 = -1;
      memset(&xmmword_1C007AA08, 0, 0x80uLL);
      qword_1C007A9D8 = qword_1C007A9E0;
      dword_1C007AA88 = 4;
      Global = DXGGLOBAL::GetGlobal(v13);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v15, v16, v17);
    }
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
