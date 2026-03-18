/*
 * XREFs of __report_rangecheckfailure @ 0x1401E00DC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140131944 (LdrpGetResourceFileName.c)
 *     strspn @ 0x140160150 (strspn.c)
 *     strtok_s @ 0x140164A70 (strtok_s.c)
 *     _CmGetDeviceChildren @ 0x140449874 (_CmGetDeviceChildren.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     WdipSemLoadNextEndEvent @ 0x1405A9DC4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     RtlCultureNameToLCID @ 0x1405BE3E0 (RtlCultureNameToLCID.c)
 *     SepParseElamCertResources @ 0x1405D9C34 (SepParseElamCertResources.c)
 *     RtlUnicodeStringToInt64 @ 0x140722E30 (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x140724280 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140724598 (RtlpNameprepAsciiWorker.c)
 *     LocalGetStringForControl @ 0x14073340C (LocalGetStringForControl.c)
 *     WheapApplyPolicyChanges @ 0x140763428 (WheapApplyPolicyChanges.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1407A6F0C (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1407CCF0C (HdlspPutWideString.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpSetupConfigurationTree @ 0x14083ABA8 (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x14084DBF4 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x14084DD34 (IopInitializeResourceMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
