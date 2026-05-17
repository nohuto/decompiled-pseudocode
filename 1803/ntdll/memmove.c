/*
 * XREFs of memmove @ 0x1800A1380
 * Callers:
 *     sub_180001A1C @ 0x180001A1C (sub_180001A1C.c)
 *     sub_180001D48 @ 0x180001D48 (sub_180001D48.c)
 *     RtlLargeIntegerToChar @ 0x1800020E0 (RtlLargeIntegerToChar.c)
 *     RtlNtPathNameToDosPathName @ 0x180002820 (RtlNtPathNameToDosPathName.c)
 *     sub_180002CBC @ 0x180002CBC (sub_180002CBC.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180003864 @ 0x180003864 (sub_180003864.c)
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 *     RtlComputePrivatizedDllName_U @ 0x180004250 (RtlComputePrivatizedDllName_U.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     RtlIpv6AddressToStringExW @ 0x180006BC0 (RtlIpv6AddressToStringExW.c)
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 *     RtlFormatMessageEx @ 0x180008A90 (RtlFormatMessageEx.c)
 *     sub_18000983C @ 0x18000983C (sub_18000983C.c)
 *     sub_18000AB38 @ 0x18000AB38 (sub_18000AB38.c)
 *     sub_18000AE4C @ 0x18000AE4C (sub_18000AE4C.c)
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     sub_180022A1C @ 0x180022A1C (sub_180022A1C.c)
 *     sub_180023380 @ 0x180023380 (sub_180023380.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_18002AEE0 @ 0x18002AEE0 (sub_18002AEE0.c)
 *     sub_18002C8C4 @ 0x18002C8C4 (sub_18002C8C4.c)
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_18002DE34 @ 0x18002DE34 (sub_18002DE34.c)
 *     sub_18002E668 @ 0x18002E668 (sub_18002E668.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 *     sub_180032030 @ 0x180032030 (sub_180032030.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     sub_180035C74 @ 0x180035C74 (sub_180035C74.c)
 *     sub_1800366B4 @ 0x1800366B4 (sub_1800366B4.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     sub_180036B64 @ 0x180036B64 (sub_180036B64.c)
 *     sub_180036E00 @ 0x180036E00 (sub_180036E00.c)
 *     sub_18003715C @ 0x18003715C (sub_18003715C.c)
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     sub_180037A68 @ 0x180037A68 (sub_180037A68.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     RtlIntegerToChar @ 0x180040A10 (RtlIntegerToChar.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 *     sub_180041B68 @ 0x180041B68 (sub_180041B68.c)
 *     sub_180043AA8 @ 0x180043AA8 (sub_180043AA8.c)
 *     sub_180044954 @ 0x180044954 (sub_180044954.c)
 *     A_SHAUpdate @ 0x180045560 (A_SHAUpdate.c)
 *     sub_180047530 @ 0x180047530 (sub_180047530.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 *     sub_18004B908 @ 0x18004B908 (sub_18004B908.c)
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 *     RtlCreateEnvironmentEx @ 0x18004BA60 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
 *     RtlQueryAtomInAtomTable @ 0x18004CCE0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTable_0 @ 0x18004D0E8 (RtlAddAtomToAtomTable_0.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E6B0 @ 0x18004E6B0 (sub_18004E6B0.c)
 *     sub_18004E8B0 @ 0x18004E8B0 (sub_18004E8B0.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180050C1C @ 0x180050C1C (sub_180050C1C.c)
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     sub_18005C9A4 @ 0x18005C9A4 (sub_18005C9A4.c)
 *     sub_18005CEA8 @ 0x18005CEA8 (sub_18005CEA8.c)
 *     CsrCaptureMessageString @ 0x18005D220 (CsrCaptureMessageString.c)
 *     CsrCaptureMessageBuffer @ 0x18005D3E0 (CsrCaptureMessageBuffer.c)
 *     sub_18005EB88 @ 0x18005EB88 (sub_18005EB88.c)
 *     MD5Update @ 0x180065D30 (MD5Update.c)
 *     RtlInsertElementGenericTableFull @ 0x1800667E0 (RtlInsertElementGenericTableFull.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180067030 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 *     RtlIpv6StringToAddressW @ 0x180068940 (RtlIpv6StringToAddressW.c)
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B780 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 *     RtlCopySecurityDescriptor @ 0x180070110 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800701D0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x1800703A0 (RtlMakeSelfRelativeSD.c)
 *     sub_180070B90 @ 0x180070B90 (sub_180070B90.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180071C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x180071DA0 (RtlpEnsureBufferSize.c)
 *     LdrAddLoadAsDataTable @ 0x180072E40 (LdrAddLoadAsDataTable.c)
 *     sub_180074184 @ 0x180074184 (sub_180074184.c)
 *     sub_180074A2C @ 0x180074A2C (sub_180074A2C.c)
 *     RtlIpv6StringToAddressA @ 0x1800751F0 (RtlIpv6StringToAddressA.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800755A0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetCurrentDirectory_U @ 0x180076950 (RtlGetCurrentDirectory_U.c)
 *     sub_180076B90 @ 0x180076B90 (sub_180076B90.c)
 *     sub_180077DC0 @ 0x180077DC0 (sub_180077DC0.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     sub_180079010 @ 0x180079010 (sub_180079010.c)
 *     sub_180079264 @ 0x180079264 (sub_180079264.c)
 *     RtlGetPersistedStateLocation @ 0x180079AB0 (RtlGetPersistedStateLocation.c)
 *     RtlIpv4AddressToStringExW @ 0x180079FD0 (RtlIpv4AddressToStringExW.c)
 *     RtlDuplicateUnicodeString @ 0x18007A8F0 (RtlDuplicateUnicodeString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007BAE0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpNtQueryValueKey @ 0x18007CDF0 (RtlpNtQueryValueKey.c)
 *     sub_18007D464 @ 0x18007D464 (sub_18007D464.c)
 *     sub_18007F3E8 @ 0x18007F3E8 (sub_18007F3E8.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 *     RtlAddAttributeActionToRXact @ 0x18007FEE0 (RtlAddAttributeActionToRXact.c)
 *     RtlpNtEnumerateSubKey @ 0x1800802B0 (RtlpNtEnumerateSubKey.c)
 *     RtlSetEnvironmentStrings @ 0x180080C50 (RtlSetEnvironmentStrings.c)
 *     RtlCreateBoundaryDescriptor @ 0x180080D20 (RtlCreateBoundaryDescriptor.c)
 *     sub_180081384 @ 0x180081384 (sub_180081384.c)
 *     sub_180082AA8 @ 0x180082AA8 (sub_180082AA8.c)
 *     sub_180083318 @ 0x180083318 (sub_180083318.c)
 *     RtlCopyString @ 0x1800837A0 (RtlCopyString.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_180085DDC @ 0x180085DDC (sub_180085DDC.c)
 *     sub_18008668C @ 0x18008668C (sub_18008668C.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086810 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180087280 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 *     RtlConnectToSm @ 0x180087B10 (RtlConnectToSm.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 *     sub_1800887C0 @ 0x1800887C0 (sub_1800887C0.c)
 *     sub_180088A5C @ 0x180088A5C (sub_180088A5C.c)
 *     sub_180089248 @ 0x180089248 (sub_180089248.c)
 *     sub_1800896AC @ 0x1800896AC (sub_1800896AC.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     sub_180093600 @ 0x180093600 (sub_180093600.c)
 *     memcpy_s @ 0x180096220 (memcpy_s.c)
 *     memmove_s @ 0x1800962D0 (memmove_s.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 *     sub_1800CAFA8 @ 0x1800CAFA8 (sub_1800CAFA8.c)
 *     sub_1800CC1E0 @ 0x1800CC1E0 (sub_1800CC1E0.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D0488 @ 0x1800D0488 (sub_1800D0488.c)
 *     RtlQuerySecurityObject @ 0x1800D22A0 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D2620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D2E30 (RtlSetProcessDebugInformation.c)
 *     sub_1800D2FD8 @ 0x1800D2FD8 (sub_1800D2FD8.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     RtlWerpReportException_0 @ 0x1800D67F0 (RtlWerpReportException_0.c)
 *     LdrUpdatePackageSearchPath @ 0x1800D9180 (LdrUpdatePackageSearchPath.c)
 *     sub_1800D9378 @ 0x1800D9378 (sub_1800D9378.c)
 *     sub_1800D989C @ 0x1800D989C (sub_1800D989C.c)
 *     sub_1800D9DA0 @ 0x1800D9DA0 (sub_1800D9DA0.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 *     sub_1800DBBCC @ 0x1800DBBCC (sub_1800DBBCC.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800DBF00 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 *     RtlReplaceSidInSd @ 0x1800DFF60 (RtlReplaceSidInSd.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E1278 (RtlConvertToAutoInheritSecurityObject_0.c)
 *     sub_1800E1800 @ 0x1800E1800 (sub_1800E1800.c)
 *     sub_1800E1A34 @ 0x1800E1A34 (sub_1800E1A34.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E2FC0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E33C0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E3CA0 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x1800E4CA0 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlAppendAsciizToString @ 0x1800E5200 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E5270 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E5350 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800E5570 (RtlExtractBitMap.c)
 *     sub_1800E626C @ 0x1800E626C (sub_1800E626C.c)
 *     sub_1800E67C8 @ 0x1800E67C8 (sub_1800E67C8.c)
 *     sub_1800E6F44 @ 0x1800E6F44 (sub_1800E6F44.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800E7320 (RtlQueryRegistryValueWithFallback.c)
 *     sub_1800E74B0 @ 0x1800E74B0 (sub_1800E74B0.c)
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E8E80 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800EC270 @ 0x1800EC270 (sub_1800EC270.c)
 *     sub_1800EC590 @ 0x1800EC590 (sub_1800EC590.c)
 *     sub_1800ECE90 @ 0x1800ECE90 (sub_1800ECE90.c)
 *     sub_1800F07E4 @ 0x1800F07E4 (sub_1800F07E4.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F10E0 (RtlWriteNonVolatileMemory.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F1210 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F12D0 (RtlIpv6AddressToStringExA.c)
 *     RtlGenerate8dot3Name @ 0x1800F1D40 (RtlGenerate8dot3Name.c)
 *     sub_1800F2924 @ 0x1800F2924 (sub_1800F2924.c)
 *     sub_1800F3D68 @ 0x1800F3D68 (sub_1800F3D68.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 *     RtlRemoteCall @ 0x1800F45B0 (RtlRemoteCall.c)
 *     sub_1800F6FC4 @ 0x1800F6FC4 (sub_1800F6FC4.c)
 *     sub_1800F7D2C @ 0x1800F7D2C (sub_1800F7D2C.c)
 *     sub_1800F9A98 @ 0x1800F9A98 (sub_1800F9A98.c)
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 *     sub_1800FD360 @ 0x1800FD360 (sub_1800FD360.c)
 *     sub_1800FEEC4 @ 0x1800FEEC4 (sub_1800FEEC4.c)
 *     sub_1800FF4A0 @ 0x1800FF4A0 (sub_1800FF4A0.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_1801032F0 @ 0x1801032F0 (sub_1801032F0.c)
 *     sub_180104BE8 @ 0x180104BE8 (sub_180104BE8.c)
 *     MD4Update @ 0x180106450 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180106A00 (EtwTraceEventInstance.c)
 *     sub_1801070E0 @ 0x1801070E0 (sub_1801070E0.c)
 *     sub_1801079B0 @ 0x1801079B0 (sub_1801079B0.c)
 *     sub_180107C4C @ 0x180107C4C (sub_180107C4C.c)
 *     sub_180107DF8 @ 0x180107DF8 (sub_180107DF8.c)
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 *     sub_18010B240 @ 0x18010B240 (sub_18010B240.c)
 *     sub_18010DCE8 @ 0x18010DCE8 (sub_18010DCE8.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
