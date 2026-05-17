/*
 * XREFs of RtlFreeAnsiString @ 0x18004F9F0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001F70 (LdrSetDllDirectory.c)
 *     sxsisol_RespectDotLocal @ 0x180002C54 (sxsisol_RespectDotLocal.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180017B08 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18002DB10 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002DC20 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosSearchPath_Ustr @ 0x180031F10 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180033FC4 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpLogDllStateEx2 @ 0x180037DF8 (LdrpLogDllStateEx2.c)
 *     RtlEqualDomainName @ 0x18004DEF0 (RtlEqualDomainName.c)
 *     RtlOpenCurrentUser @ 0x18004F8F0 (RtlOpenCurrentUser.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180053240 (RtlpGetTokenNamedObjectPath.c)
 *     RtlCreateServiceSid @ 0x180057990 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x18005B1C0 (RtlCreateVirtualAccountSid.c)
 *     EtwpFlushUmLogger @ 0x180060D00 (EtwpFlushUmLogger.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpCreateFile @ 0x180065084 (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     LdrpQuerySxSMUIFile @ 0x18007D764 (LdrpQuerySxSMUIFile.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x18008515C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlpTpIoDllLoaded @ 0x18008FDD4 (RtlpTpIoDllLoaded.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D1BE0 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D2988 (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E25F8 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlIsNameInExpression @ 0x1800F84F0 (RtlIsNameInExpression.c)
 *     EtwpUpdateUmLogger @ 0x180109CFC (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x18010A398 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    NtdllpFreeStringRoutine(Buffer);
    *(_QWORD *)&UnicodeString->Length = 0LL;
    UnicodeString->Buffer = 0LL;
  }
}
