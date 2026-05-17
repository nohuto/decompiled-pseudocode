/*
 * XREFs of memmove @ 0x1800ABA80
 * Callers:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_180003048 @ 0x180003048 (sub_180003048.c)
 *     RtlLargeIntegerToChar @ 0x180003320 (RtlLargeIntegerToChar.c)
 *     sub_180004554 @ 0x180004554 (sub_180004554.c)
 *     sub_180004908 @ 0x180004908 (sub_180004908.c)
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 *     RtlComputePrivatizedDllName_U @ 0x180005200 (RtlComputePrivatizedDllName_U.c)
 *     sub_180007688 @ 0x180007688 (sub_180007688.c)
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 *     CsrCaptureMessageBuffer @ 0x18000B160 (CsrCaptureMessageBuffer.c)
 *     CsrCaptureMessageString @ 0x18000B2D0 (CsrCaptureMessageString.c)
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     sub_18000D8E0 @ 0x18000D8E0 (sub_18000D8E0.c)
 *     sub_18000DB30 @ 0x18000DB30 (sub_18000DB30.c)
 *     sub_18000FCB0 @ 0x18000FCB0 (sub_18000FCB0.c)
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 *     sub_18001ABBC @ 0x18001ABBC (sub_18001ABBC.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     sub_180039B68 @ 0x180039B68 (sub_180039B68.c)
 *     sub_180039E20 @ 0x180039E20 (sub_180039E20.c)
 *     sub_18003B41C @ 0x18003B41C (sub_18003B41C.c)
 *     sub_18003B6D0 @ 0x18003B6D0 (sub_18003B6D0.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     sub_18003CC2C @ 0x18003CC2C (sub_18003CC2C.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_180044B58 @ 0x180044B58 (sub_180044B58.c)
 *     sub_180045634 @ 0x180045634 (sub_180045634.c)
 *     sub_180045EFC @ 0x180045EFC (sub_180045EFC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     RtlIntegerToChar @ 0x1800472B0 (RtlIntegerToChar.c)
 *     sub_180047564 @ 0x180047564 (sub_180047564.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_180049308 @ 0x180049308 (sub_180049308.c)
 *     sub_1800498D0 @ 0x1800498D0 (sub_1800498D0.c)
 *     sub_180049BCC @ 0x180049BCC (sub_180049BCC.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004AC04 @ 0x18004AC04 (sub_18004AC04.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     sub_18004DA54 @ 0x18004DA54 (sub_18004DA54.c)
 *     A_SHAUpdate @ 0x18004E730 (A_SHAUpdate.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     sub_180050A54 @ 0x180050A54 (sub_180050A54.c)
 *     sub_180050AC0 @ 0x180050AC0 (sub_180050AC0.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_180055E4C @ 0x180055E4C (sub_180055E4C.c)
 *     sub_18005683C @ 0x18005683C (sub_18005683C.c)
 *     sub_180056BE0 @ 0x180056BE0 (sub_180056BE0.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     sub_18005DF88 @ 0x18005DF88 (sub_18005DF88.c)
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 *     sub_18005EAF0 @ 0x18005EAF0 (sub_18005EAF0.c)
 *     sub_18005EE74 @ 0x18005EE74 (sub_18005EE74.c)
 *     sub_18005F1CC @ 0x18005F1CC (sub_18005F1CC.c)
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 *     RtlIpv6AddressToStringExW @ 0x1800603E0 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x1800607E0 (RtlFormatMessageEx.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     RtlCreateProcessParametersEx @ 0x180062490 (RtlCreateProcessParametersEx.c)
 *     sub_180062978 @ 0x180062978 (sub_180062978.c)
 *     sub_180062A14 @ 0x180062A14 (sub_180062A14.c)
 *     RtlCreateEnvironmentEx @ 0x180062AD0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180062E60 (RtlSetEnvironmentVar.c)
 *     RtlInsertElementGenericTableFull @ 0x180065B20 (RtlInsertElementGenericTableFull.c)
 *     MD5Update @ 0x180066A60 (MD5Update.c)
 *     sub_180068160 @ 0x180068160 (sub_180068160.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180068390 (RtlReplaceSystemDirectoryInPath.c)
 *     sub_180068FF8 @ 0x180068FF8 (sub_180068FF8.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180069260 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 *     RtlIpv6StringToAddressW @ 0x18006A520 (RtlIpv6StringToAddressW.c)
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     sub_18006EB64 @ 0x18006EB64 (sub_18006EB64.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180070B50 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlQueryAtomInAtomTable @ 0x1800721A0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTable_0 @ 0x180072498 (RtlAddAtomToAtomTable_0.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     RtlCopySecurityDescriptor @ 0x180076370 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180076420 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x180076600 (RtlMakeSelfRelativeSD.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180077C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x180077DA0 (RtlpEnsureBufferSize.c)
 *     LdrAddLoadAsDataTable @ 0x180078680 (LdrAddLoadAsDataTable.c)
 *     sub_180078B20 @ 0x180078B20 (sub_180078B20.c)
 *     sub_1800790E8 @ 0x1800790E8 (sub_1800790E8.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180079500 (RtlConvertDeviceFamilyInfoToString.c)
 *     sub_18007A9C4 @ 0x18007A9C4 (sub_18007A9C4.c)
 *     sub_18007AB6C @ 0x18007AB6C (sub_18007AB6C.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B030 (RtlGetCurrentDirectory_U.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     sub_18007CFD8 @ 0x18007CFD8 (sub_18007CFD8.c)
 *     RtlIpv6StringToAddressA @ 0x18007D7D0 (RtlIpv6StringToAddressA.c)
 *     RtlDuplicateUnicodeString @ 0x18007DE00 (RtlDuplicateUnicodeString.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     sub_18007EC78 @ 0x18007EC78 (sub_18007EC78.c)
 *     RtlCreateBoundaryDescriptor @ 0x180080320 (RtlCreateBoundaryDescriptor.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080700 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpNtQueryValueKey @ 0x180080B00 (RtlpNtQueryValueKey.c)
 *     sub_1800819C4 @ 0x1800819C4 (sub_1800819C4.c)
 *     RtlpNtEnumerateSubKey @ 0x180082470 (RtlpNtEnumerateSubKey.c)
 *     RtlIpv4AddressToStringExW @ 0x180082C20 (RtlIpv4AddressToStringExW.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     RtlSetProtectedPolicy @ 0x1800850D0 (RtlSetProtectedPolicy.c)
 *     RtlSetEnvironmentStrings @ 0x180085E10 (RtlSetEnvironmentStrings.c)
 *     sub_1800869C8 @ 0x1800869C8 (sub_1800869C8.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180088080 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlAddAttributeActionToRXact @ 0x180088780 (RtlAddAttributeActionToRXact.c)
 *     sub_180088C08 @ 0x180088C08 (sub_180088C08.c)
 *     RtlCopyString @ 0x180089020 (RtlCopyString.c)
 *     sub_180089C50 @ 0x180089C50 (sub_180089C50.c)
 *     sub_18008C2B0 @ 0x18008C2B0 (sub_18008C2B0.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C720 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     RtlDosSearchPath_U @ 0x18008DA50 (RtlDosSearchPath_U.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008DCE0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     sub_18008E2C4 @ 0x18008E2C4 (sub_18008E2C4.c)
 *     RtlConnectToSm @ 0x18008E4F0 (RtlConnectToSm.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 *     sub_18008F810 @ 0x18008F810 (sub_18008F810.c)
 *     sub_18008FA08 @ 0x18008FA08 (sub_18008FA08.c)
 *     sub_1800900A4 @ 0x1800900A4 (sub_1800900A4.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     sub_18009E390 @ 0x18009E390 (sub_18009E390.c)
 *     memcpy_s @ 0x1800A0EE0 (memcpy_s.c)
 *     memmove_s @ 0x1800A0F90 (memmove_s.c)
 *     sub_1800A3C94 @ 0x1800A3C94 (sub_1800A3C94.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D4A10 (RtlNtPathNameToDosPathName.c)
 *     sub_1800D4C84 @ 0x1800D4C84 (sub_1800D4C84.c)
 *     sub_1800D6884 @ 0x1800D6884 (sub_1800D6884.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     RtlQuerySecurityObject @ 0x1800D9320 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 *     sub_1800D9C04 @ 0x1800D9C04 (sub_1800D9C04.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DF900 (LdrUpdatePackageSearchPath.c)
 *     sub_1800DFAF8 @ 0x1800DFAF8 (sub_1800DFAF8.c)
 *     sub_1800E0020 @ 0x1800E0020 (sub_1800E0020.c)
 *     sub_1800E0520 @ 0x1800E0520 (sub_1800E0520.c)
 *     sub_1800E07A8 @ 0x1800E07A8 (sub_1800E07A8.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 *     sub_1800E1F0C @ 0x1800E1F0C (sub_1800E1F0C.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 *     RtlReplaceSidInSd @ 0x1800E55B0 (RtlReplaceSidInSd.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E6584 (RtlConvertToAutoInheritSecurityObject_0.c)
 *     sub_1800E6AF4 @ 0x1800E6AF4 (sub_1800E6AF4.c)
 *     sub_1800E6D1C @ 0x1800E6D1C (sub_1800E6D1C.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E8260 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E8650 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800E9DA0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E9E10 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E9EF0 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800EA0F0 (RtlExtractBitMap.c)
 *     sub_1800EACCC @ 0x1800EACCC (sub_1800EACCC.c)
 *     sub_1800EB208 @ 0x1800EB208 (sub_1800EB208.c)
 *     sub_1800EB640 @ 0x1800EB640 (sub_1800EB640.c)
 *     sub_1800EC2E0 @ 0x1800EC2E0 (sub_1800EC2E0.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F0200 @ 0x1800F0200 (sub_1800F0200.c)
 *     sub_1800F0530 @ 0x1800F0530 (sub_1800F0530.c)
 *     sub_1800F0B70 @ 0x1800F0B70 (sub_1800F0B70.c)
 *     sub_1800F36F0 @ 0x1800F36F0 (sub_1800F36F0.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F3FB0 (RtlWriteNonVolatileMemory.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F4060 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F4120 (RtlIpv6AddressToStringExA.c)
 *     RtlGenerate8dot3Name @ 0x1800F4800 (RtlGenerate8dot3Name.c)
 *     sub_1800F5394 @ 0x1800F5394 (sub_1800F5394.c)
 *     sub_1800F679C @ 0x1800F679C (sub_1800F679C.c)
 *     RtlRemoteCall @ 0x1800F6C40 (RtlRemoteCall.c)
 *     sub_1800F94C0 @ 0x1800F94C0 (sub_1800F94C0.c)
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 *     sub_1800FB6A4 @ 0x1800FB6A4 (sub_1800FB6A4.c)
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 *     sub_1800FEB20 @ 0x1800FEB20 (sub_1800FEB20.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 *     sub_180100A00 @ 0x180100A00 (sub_180100A00.c)
 *     sub_180103030 @ 0x180103030 (sub_180103030.c)
 *     MD4Update @ 0x1801041A0 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x180104790 (EtwTraceEventInstance.c)
 *     sub_180104F6C @ 0x180104F6C (sub_180104F6C.c)
 *     sub_180107270 @ 0x180107270 (sub_180107270.c)
 *     sub_180109740 @ 0x180109740 (sub_180109740.c)
 *     sub_18010AE38 @ 0x18010AE38 (sub_18010AE38.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010CFA0 @ 0x18010CFA0 (sub_18010CFA0.c)
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
