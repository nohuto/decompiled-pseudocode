/*
 * XREFs of MiReleasePageFileSpace @ 0x1400CB9A0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiDeleteMergedPte @ 0x1400E4F14 (MiDeleteMergedPte.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleasePageFileSpace(struct _KEVENT *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v3 = MiCapturePageFileInfoInline(&v5, 0LL);
  if ( !v3 )
    return 0LL;
  MiReleasePageFileInfo(a1, v3, 0);
  return 1LL;
}
