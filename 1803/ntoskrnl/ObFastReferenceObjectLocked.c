/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1400EB804
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400EAAD8 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 *     PspReferenceSystemDll @ 0x1404E9390 (PspReferenceSystemDll.c)
 *     NtOpenProcessTokenEx @ 0x14059A540 (NtOpenProcessTokenEx.c)
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x1400F3900 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
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
