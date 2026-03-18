/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14008AA44
 * Callers:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400203BC (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MiNoPagesLastChance @ 0x14022B0B8 (MiNoPagesLastChance.c)
 *     PspReferenceSystemDll @ 0x14045FDA4 (PspReferenceSystemDll.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeCreateClientSecurity @ 0x14049CBB0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14049CD70 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v1 - 48);
    ObpIncrPointerCount(v1 - 48);
  }
  return v1;
}
