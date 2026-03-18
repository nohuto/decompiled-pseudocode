/*
 * XREFs of __report_rangecheckfailure @ 0x14021F8EC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x14016DD70 (LdrpGetResourceFileName.c)
 *     strspn @ 0x14018A2F0 (strspn.c)
 *     strtok_s @ 0x14018E990 (strtok_s.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     SepParseElamCertResources @ 0x140633A74 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140636850 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140639574 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140639ECC (WdipSemLoadNextScenario.c)
 *     RtlUnicodeStringToInt64 @ 0x1407865D0 (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x140787B50 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140787E68 (RtlpNameprepAsciiWorker.c)
 *     LocalGetStringForControl @ 0x140796CB0 (LocalGetStringForControl.c)
 *     WheapApplyPolicyChanges @ 0x1407CB10C (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x1407EE1B0 (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x14081408C (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140839F08 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x14089836C (IopInitializeResourceMap.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408989C8 (IopInitCrashDumpDuringSysInit.c)
 *     KsepMatchInitBiosInfo @ 0x1408A5780 (KsepMatchInitBiosInfo.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x1408AF44C (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1408B87E4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
