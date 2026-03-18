/*
 * XREFs of DpiIndirectCbOpmGetSrmListVersion @ 0x1C0041AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00DD19C (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0109E60 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0109EBC (DxgkReleaseAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmGetSrmListVersion(__int64 a1, __int64 a2, __int64 a3)
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
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
    if ( *(_DWORD *)(RenderAdapterForSession + 2880) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3728));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3728), 1LL);
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(RenderAdapterForSession + 3008))(
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
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
    return 3221226021LL;
  }
}
