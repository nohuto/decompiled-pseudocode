/*
 * XREFs of DpiIndirectCbOpmSetSrmList @ 0x1C0033360
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00FBB2C (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00FDC00 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00FDC5C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmSetSrmList(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // esi

  AcquireMiniportListMutex();
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( RenderAdapterForSession )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( *(_DWORD *)(RenderAdapterForSession + 2880) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(RenderAdapterForSession + 3000))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              a2,
              a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = RenderAdapterForSession;
      WdLogEvent5_WdError(v10);
      v11 = -1073741637;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(RenderAdapterForSession + 24) + 64LL)
                                                      + 3912LL));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    return v11;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    WdLogEvent5_WdError(v7);
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
    return 3221226021LL;
  }
}
