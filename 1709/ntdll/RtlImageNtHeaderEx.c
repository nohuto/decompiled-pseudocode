/*
 * XREFs of RtlImageNtHeaderEx @ 0x180028970
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     CsrClientConnectToServer @ 0x1800067D0 (CsrClientConnectToServer.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800124E8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180012560 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpInitializeTls @ 0x18001C128 (LdrpInitializeTls.c)
 *     LdrpResGetResourceDirectory @ 0x18001DF80 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002259C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x180022DC0 (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180022F34 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180028E78 (LdrpGetProcedureAddress.c)
 *     LdrpGetFromMUIMemCache @ 0x180029A0C (LdrpGetFromMUIMemCache.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180029CD4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpGetImageSize @ 0x180029E30 (LdrpGetImageSize.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180079880 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007A228 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x18007A390 (LdrGetDllHandleByMapping.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x180084A44 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x180086228 (LdrRelocateImageWithBias.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800D6C64 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F1C8C (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800F7FC0 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  unsigned __int64 v7; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) == 0 && a3 < 0x40 )
    return 3221225595LL;
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_15:
    result = 3221225595LL;
    goto LABEL_18;
  }
  v7 = *(unsigned int *)(a2 + 60);
  if ( (a1 & 1) == 0 && (v7 >= a3 || (unsigned int)v7 >= 0xFFFFFFE7 || v7 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( (unsigned int)v7 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v7);
    if ( a2 + v7 >= a2 && *v6 == 17744 )
      goto LABEL_18;
    goto LABEL_15;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
