/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C000DF60 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C0012FD0 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00132F0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0013A50 (NtDCompositionGetFrameLegacyTokens.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00547AC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0080F98 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C008E468 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C013EB50 (DCompositionForceRender.c)
 *     DCompositionRenderBlack @ 0x1C013EBE0 (DCompositionRenderBlack.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C013EC30 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionEnableDDASupport @ 0x1C013F210 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C013F260 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C013F420 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C013F5C0 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *DirectComposition::CConnection::GetDefaultConnection(void)
{
  volatile signed __int32 *v0; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v5; // rdi

  v0 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  v2 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(struct _ERESOURCE **)(v2 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v3, 1u);
  v0 = *(volatile signed __int32 **)(v2 + 24);
  if ( v0 )
    _InterlockedIncrement(v0);
  ExReleaseResourceLite(*(PERESOURCE *)(v2 + 32));
  KeLeaveCriticalRegion();
  if ( !v0 )
  {
LABEL_7:
    v5 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v0 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v0;
}
