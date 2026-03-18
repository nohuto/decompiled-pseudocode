/*
 * XREFs of MiReleasePageFileSpace @ 0x14010AE90
 * Callers:
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiDeleteMergedPte @ 0x140079374 (MiDeleteMergedPte.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(struct _KEVENT *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = MiCapturePageFileInfoInline(&v6, 0, a3);
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(a1, v4, 0);
  return 1LL;
}
