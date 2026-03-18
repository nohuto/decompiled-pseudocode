/*
 * XREFs of MiReleasePageFileSpace @ 0x140051890
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteMergedPte @ 0x1400AD9AC (MiDeleteMergedPte.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v3 = MiCapturePageFileInfoInline(&v5, 0LL);
  if ( !v3 )
    return 0LL;
  MiReleasePageFileInfo(a1, v3, 0LL);
  return 1LL;
}
