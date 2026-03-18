/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x1405675BC
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140567BB0 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlCheckNotifyForDelete @ 0x1406B2140 (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x1406B21A0 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x14056765C (FsRtlNotifyCompleteIrp.c)
 */

__int64 __fastcall FsRtlNotifyCompleteIrpList(__int64 a1, int a2)
{
  __int64 **v2; // rbx
  __int64 *v4; // rax
  IRP *v5; // rcx
  __int64 *v6; // rdx
  __int64 result; // rax

  v2 = (__int64 **)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  do
  {
    v4 = *v2;
    v5 = (IRP *)(*v2 - 21);
    if ( (__int64 **)(*v2)[1] != v2 || (v6 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v2 = v6;
    v6[1] = (__int64)v2;
    v5->Tail.Overlay.ListEntry.Flink = 0LL;
    result = FsRtlNotifyCompleteIrp(v5, 1);
  }
  while ( a2 && *v2 != (__int64 *)v2 );
  return result;
}
