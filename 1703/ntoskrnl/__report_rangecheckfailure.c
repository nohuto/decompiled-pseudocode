/*
 * XREFs of __report_rangecheckfailure @ 0x1401DD43C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140156A08 (LdrpGetResourceFileName.c)
 *     strspn @ 0x14016B7B0 (strspn.c)
 *     strtok_s @ 0x140170270 (strtok_s.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     SepParseElamCertResources @ 0x14059BC24 (SepParseElamCertResources.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     RtlCultureNameToLCID @ 0x1405B86E0 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x1405C9FD8 (WdipSemLoadNextEndEvent.c)
 *     RtlUnicodeStringToInt64 @ 0x1406EAF20 (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x1406EBDB0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1406EC0CC (RtlpNameprepAsciiWorker.c)
 *     LocalGetStringForControl @ 0x1406FBA24 (LocalGetStringForControl.c)
 *     WheapApplyPolicyChanges @ 0x140723974 (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x14073F574 (_CmGetDeviceChildren.c)
 *     VfUtilPrintCheckinString @ 0x14076533C (VfUtilPrintCheckinString.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     HdlspPutWideString @ 0x14078F3C8 (HdlspPutWideString.c)
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     IopInitializeResourceMap @ 0x14080D3D8 (IopInitializeResourceMap.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408137A4 (IopInitCrashDumpDuringSysInit.c)
 *     CmpSetupConfigurationTree @ 0x14081E820 (CmpSetupConfigurationTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
