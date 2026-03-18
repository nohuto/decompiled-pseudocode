/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1400445AC
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14011B030 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiNoPagesLastChance @ 0x14021F600 (MiNoPagesLastChance.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     PspReferenceSystemDll @ 0x14049C278 (PspReferenceSystemDll.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
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
