/*
 * XREFs of RtlFreeHeap @ 0x180016DF0
 * Callers:
 *     LdrSetDllDirectory @ 0x180002990 (LdrSetDllDirectory.c)
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180003B38 @ 0x180003B38 (sub_180003B38.c)
 *     sub_180003B70 @ 0x180003B70 (sub_180003B70.c)
 *     RtlSetSearchPathMode @ 0x180003C20 (RtlSetSearchPathMode.c)
 *     sub_180004C58 @ 0x180004C58 (sub_180004C58.c)
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_180005610 @ 0x180005610 (sub_180005610.c)
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_180006FA8 @ 0x180006FA8 (sub_180006FA8.c)
 *     EtwUnregisterTraceGuids @ 0x180007FE0 (EtwUnregisterTraceGuids.c)
 *     sub_180009558 @ 0x180009558 (sub_180009558.c)
 *     sub_18000983C @ 0x18000983C (sub_18000983C.c)
 *     EtwRegisterTraceGuidsW @ 0x1800099D0 (EtwRegisterTraceGuidsW.c)
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     sub_18002C8C4 @ 0x18002C8C4 (sub_18002C8C4.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     sub_18002CFE4 @ 0x18002CFE4 (sub_18002CFE4.c)
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_18002DE34 @ 0x18002DE34 (sub_18002DE34.c)
 *     RtlReleaseRelativeName @ 0x18002E200 (RtlReleaseRelativeName.c)
 *     sub_18002E238 @ 0x18002E238 (sub_18002E238.c)
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 *     sub_18002E668 @ 0x18002E668 (sub_18002E668.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800300BC @ 0x1800300BC (sub_1800300BC.c)
 *     sub_180030D2C @ 0x180030D2C (sub_180030D2C.c)
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003C82C @ 0x18003C82C (sub_18003C82C.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 *     sub_180040F58 @ 0x180040F58 (sub_180040F58.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_180043AA8 @ 0x180043AA8 (sub_180043AA8.c)
 *     RtlGetAppContainerParent @ 0x180043B90 (RtlGetAppContainerParent.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180048E10 (RtlLockModuleSection.c)
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 *     sub_180049998 @ 0x180049998 (sub_180049998.c)
 *     sub_180049C00 @ 0x180049C00 (sub_180049C00.c)
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     sub_18004A688 @ 0x18004A688 (sub_18004A688.c)
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 *     sub_18004AD34 @ 0x18004AD34 (sub_18004AD34.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18004BA60 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 *     sub_18004D090 @ 0x18004D090 (sub_18004D090.c)
 *     RtlAddAtomToAtomTable_0 @ 0x18004D0E8 (RtlAddAtomToAtomTable_0.c)
 *     RtlCreateActivationContext @ 0x18004D910 (RtlCreateActivationContext.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E8B0 @ 0x18004E8B0 (sub_18004E8B0.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     sub_18004F8A8 @ 0x18004F8A8 (sub_18004F8A8.c)
 *     RtlFlsAlloc @ 0x180050130 (RtlFlsAlloc.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180050AD8 @ 0x180050AD8 (sub_180050AD8.c)
 *     sub_180050C1C @ 0x180050C1C (sub_180050C1C.c)
 *     sub_1800520D4 @ 0x1800520D4 (sub_1800520D4.c)
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_180054A20 @ 0x180054A20 (sub_180054A20.c)
 *     sub_180055078 @ 0x180055078 (sub_180055078.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_180056280 @ 0x180056280 (sub_180056280.c)
 *     TpSimpleTryPost @ 0x1800562E0 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056820 @ 0x180056820 (sub_180056820.c)
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     TpAllocWork @ 0x180056F90 (TpAllocWork.c)
 *     sub_180057320 @ 0x180057320 (sub_180057320.c)
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x180057FF0 (RtlCreateTimer.c)
 *     sub_180058530 @ 0x180058530 (sub_180058530.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 *     sub_180058AD0 @ 0x180058AD0 (sub_180058AD0.c)
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 *     sub_180059040 @ 0x180059040 (sub_180059040.c)
 *     sub_18005907C @ 0x18005907C (sub_18005907C.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     sub_1800594E0 @ 0x1800594E0 (sub_1800594E0.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     sub_18005C9A4 @ 0x18005C9A4 (sub_18005C9A4.c)
 *     CsrFreeCaptureBuffer @ 0x18005CF60 (CsrFreeCaptureBuffer.c)
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 *     sub_180061A7C @ 0x180061A7C (sub_180061A7C.c)
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
 *     RtlDeleteFunctionTable @ 0x18006A2B0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 *     sub_18006B51C @ 0x18006B51C (sub_18006B51C.c)
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 *     RtlFreeSid @ 0x18006BC20 (RtlFreeSid.c)
 *     RtlCreateAndSetSD @ 0x18006BEC0 (RtlCreateAndSetSD.c)
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     RtlCleanUpTEBLangLists @ 0x18006E7E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006E920 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     sub_1800700D8 @ 0x1800700D8 (sub_1800700D8.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     sub_180070B90 @ 0x180070B90 (sub_180070B90.c)
 *     sub_180071914 @ 0x180071914 (sub_180071914.c)
 *     sub_180071960 @ 0x180071960 (sub_180071960.c)
 *     sub_180072114 @ 0x180072114 (sub_180072114.c)
 *     sub_1800721C8 @ 0x1800721C8 (sub_1800721C8.c)
 *     sub_1800722B4 @ 0x1800722B4 (sub_1800722B4.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 *     RtlFreeActivationContextStack @ 0x180072B30 (RtlFreeActivationContextStack.c)
 *     sub_180072D14 @ 0x180072D14 (sub_180072D14.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     sub_180074A2C @ 0x180074A2C (sub_180074A2C.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     RtlSetCurrentDirectory_U @ 0x180076700 (RtlSetCurrentDirectory_U.c)
 *     sub_180076898 @ 0x180076898 (sub_180076898.c)
 *     RtlGetCurrentDirectory_U @ 0x180076950 (RtlGetCurrentDirectory_U.c)
 *     sub_180076A28 @ 0x180076A28 (sub_180076A28.c)
 *     sub_180076B90 @ 0x180076B90 (sub_180076B90.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     RtlAcquirePrivilege @ 0x180078BB0 (RtlAcquirePrivilege.c)
 *     RtlGetPersistedStateLocation @ 0x180079AB0 (RtlGetPersistedStateLocation.c)
 *     sub_18007AE58 @ 0x18007AE58 (sub_18007AE58.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     RtlDeleteHashTable @ 0x18007C0F0 (RtlDeleteHashTable.c)
 *     sub_18007C270 @ 0x18007C270 (sub_18007C270.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     sub_18007C734 @ 0x18007C734 (sub_18007C734.c)
 *     sub_18007CAB0 @ 0x18007CAB0 (sub_18007CAB0.c)
 *     RtlpNtQueryValueKey @ 0x18007CDF0 (RtlpNtQueryValueKey.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 *     RtlDeleteSecurityObject @ 0x18007D9C0 (RtlDeleteSecurityObject.c)
 *     sub_18007E200 @ 0x18007E200 (sub_18007E200.c)
 *     TpAllocCleanupGroup @ 0x18007E350 (TpAllocCleanupGroup.c)
 *     sub_18007E534 @ 0x18007E534 (sub_18007E534.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     sub_18007F3E8 @ 0x18007F3E8 (sub_18007F3E8.c)
 *     RtlDestroyProcessParameters @ 0x18007F6D0 (RtlDestroyProcessParameters.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 *     RtlAddAttributeActionToRXact @ 0x18007FEE0 (RtlAddAttributeActionToRXact.c)
 *     RtlAbortRXact @ 0x180080090 (RtlAbortRXact.c)
 *     TpReleaseCleanupGroup @ 0x180080240 (TpReleaseCleanupGroup.c)
 *     RtlpNtEnumerateSubKey @ 0x1800802B0 (RtlpNtEnumerateSubKey.c)
 *     RtlReleasePrivilege @ 0x180080630 (RtlReleasePrivilege.c)
 *     sub_180080944 @ 0x180080944 (sub_180080944.c)
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 *     RtlSetEnvironmentStrings @ 0x180080C50 (RtlSetEnvironmentStrings.c)
 *     sub_180080E08 @ 0x180080E08 (sub_180080E08.c)
 *     RtlContractHashTable @ 0x180081350 (RtlContractHashTable.c)
 *     sub_180081384 @ 0x180081384 (sub_180081384.c)
 *     sub_180081B88 @ 0x180081B88 (sub_180081B88.c)
 *     sub_180081BF4 @ 0x180081BF4 (sub_180081BF4.c)
 *     sub_180082AA8 @ 0x180082AA8 (sub_180082AA8.c)
 *     RtlDestroyHandleTable @ 0x1800837E0 (RtlDestroyHandleTable.c)
 *     PssNtFreeSnapshot @ 0x1800848E0 (PssNtFreeSnapshot.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086810 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 *     sub_180086C80 @ 0x180086C80 (sub_180086C80.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 *     LdrFlushAlternateResourceModules @ 0x1800876B0 (LdrFlushAlternateResourceModules.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 *     sub_180089248 @ 0x180089248 (sub_180089248.c)
 *     sub_1800896AC @ 0x1800896AC (sub_1800896AC.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     RtlExpandHashTable @ 0x180089AF0 (RtlExpandHashTable.c)
 *     RtlInitializeRXact @ 0x18008A4F0 (RtlInitializeRXact.c)
 *     RtlSetCurrentEnvironment @ 0x18008A8E0 (RtlSetCurrentEnvironment.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     LdrRemoveDllDirectory @ 0x18008AB30 (LdrRemoveDllDirectory.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800C86BC @ 0x1800C86BC (sub_1800C86BC.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8960 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800C8B50 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800C8BC0 (RtlEnableThreadProfiling.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 *     LdrUnregisterDllNotification @ 0x1800CAE90 (LdrUnregisterDllNotification.c)
 *     sub_1800CB800 @ 0x1800CB800 (sub_1800CB800.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 *     sub_1800CC1E0 @ 0x1800CC1E0 (sub_1800CC1E0.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D0488 @ 0x1800D0488 (sub_1800D0488.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     RtlCreateUserSecurityObject @ 0x1800D1F40 (RtlCreateUserSecurityObject.c)
 *     sub_1800D35E8 @ 0x1800D35E8 (sub_1800D35E8.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     Callback @ 0x1800D8F60 (Callback.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 *     sub_1800D97E4 @ 0x1800D97E4 (sub_1800D97E4.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 *     RtlQueryModuleInformation @ 0x1800DD990 (RtlQueryModuleInformation.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 *     RtlIsUntrustedObject @ 0x1800DFDC0 (RtlIsUntrustedObject.c)
 *     sub_1800E0618 @ 0x1800E0618 (sub_1800E0618.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E1278 (RtlConvertToAutoInheritSecurityObject_0.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E3CA0 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlDestroyAtomTable @ 0x1800E4710 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E47F0 (RtlEmptyAtomTable.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800E68B0 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E6A70 (RtlCreateBootStatusDataFile.c)
 *     sub_1800E6F44 @ 0x1800E6F44 (sub_1800E6F44.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800E7320 (RtlQueryRegistryValueWithFallback.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E8C70 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E8E80 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800EB510 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800EF490 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800EF5B0 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800EF6C0 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800EF720 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F0110 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     sub_1800F02EC @ 0x1800F02EC (sub_1800F02EC.c)
 *     sub_1800F33A0 @ 0x1800F33A0 (sub_1800F33A0.c)
 *     sub_1800F34C8 @ 0x1800F34C8 (sub_1800F34C8.c)
 *     sub_1800F3EDC @ 0x1800F3EDC (sub_1800F3EDC.c)
 *     sub_1800F3FB0 @ 0x1800F3FB0 (sub_1800F3FB0.c)
 *     sub_1800F4094 @ 0x1800F4094 (sub_1800F4094.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 *     sub_1800F4B74 @ 0x1800F4B74 (sub_1800F4B74.c)
 *     sub_1800F5100 @ 0x1800F5100 (sub_1800F5100.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 *     sub_1800F81DC @ 0x1800F81DC (sub_1800F81DC.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F8548 @ 0x1800F8548 (sub_1800F8548.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 *     sub_1800F8FB0 @ 0x1800F8FB0 (sub_1800F8FB0.c)
 *     sub_1800F985C @ 0x1800F985C (sub_1800F985C.c)
 *     sub_1800F9A98 @ 0x1800F9A98 (sub_1800F9A98.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_1801076A4 @ 0x1801076A4 (sub_1801076A4.c)
 *     sub_1801079B0 @ 0x1801079B0 (sub_1801079B0.c)
 *     sub_1801082C0 @ 0x1801082C0 (sub_1801082C0.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 *     sub_180108FC8 @ 0x180108FC8 (sub_180108FC8.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010E7D8 @ 0x18010E7D8 (sub_18010E7D8.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x18009E5D0 (RtlInterlockedFlushSList_0.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 *     sub_180102758 @ 0x180102758 (sub_180102758.c)
 *     sub_180102B70 @ 0x180102B70 (sub_180102B70.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  LOGICAL v6; // esi
  unsigned __int64 v7; // r14
  _QWORD **v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int16 *v10; // rax
  __int64 v11; // rbx
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v13; // edx
  int v14; // r8d
  signed __int32 v15; // ebx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  _SLIST_HEADER **v21; // r9
  signed __int64 v22; // rdx
  __int64 *v23; // r14
  _SLIST_ENTRY *v24; // rbx
  signed __int32 v25; // eax
  __int64 v26; // rax
  _SLIST_HEADER **v27; // rcx
  _SLIST_HEADER *v28; // rcx
  _SLIST_ENTRY *v29; // rdx
  __int64 v30; // rax
  unsigned __int16 *v31; // r14
  __int64 v32; // rbx
  int v33; // edx
  signed __int64 v34; // rax
  _SLIST_HEADER *v35; // rcx
  unsigned __int8 v36; // al
  signed __int32 v37; // eax
  unsigned __int16 *v38; // r9
  int v39; // r8d
  __int64 v40; // rax
  _SLIST_ENTRY *v41; // rdx
  unsigned __int16 *v42; // rcx
  _SLIST_HEADER *Next; // rcx
  PSLIST_ENTRY v44; // rax
  unsigned int v45; // edx
  int v46; // edx
  __int64 v47; // rax
  unsigned __int16 v48; // ax
  int v49; // eax
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 v53; // rcx
  char *v54; // rcx
  struct _TEB *v55; // rbx
  __int64 v56; // rdx
  unsigned __int16 v57; // ax
  __int64 v58; // rcx
  ULONG v59; // eax
  ULONG OldProtect; // [rsp+30h] [rbp-68h] BYREF
  __int64 v61; // [rsp+38h] [rbp-60h]
  _QWORD *v62; // [rsp+40h] [rbp-58h]
  int v63; // [rsp+48h] [rbp-50h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-48h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp-40h] BYREF
  __int64 v66; // [rsp+B0h] [rbp+18h] BYREF
  signed __int64 v67; // [rsp+B8h] [rbp+20h]

  if ( BaseAddress )
  {
    v6 = 0;
    if ( !HeapHandle )
      sub_18009A5F0(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      return sub_180017430((int)HeapHandle);
    if ( (byte_18015D028 & 2) != 0 )
    {
      v6 = sub_180017F70((int)HeapHandle, (__int64)&v66);
      if ( v6 && (_WORD)v66 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(qword_18015AA38 + 8LL * (unsigned __int16)v66 - 8) + 32LL),
          -v61);
      return v6;
    }
    v7 = 0LL;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
LABEL_59:
      v36 = sub_1800150A0((__int64)HeapHandle, Flags | 2, v7, (__int64)BaseAddress);
      v6 = v36;
      if ( v36 )
      {
LABEL_33:
        if ( (unsigned int)sub_1800173E0(HeapHandle) )
        {
          if ( (Flags & 0x10000000) == 0 )
            sub_1800FD70C(HeapHandle, BaseAddress);
        }
      }
      return v6;
    }
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v7 = sub_18006377C(HeapHandle, BaseAddress);
    }
    else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      sub_18009A5F0(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    }
    else
    {
      v7 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
      {
        sub_18009A5F0(8, (_DWORD)HeapHandle, v7, 0, 0LL, 0LL);
        v7 = 0LL;
      }
    }
    if ( v7 )
    {
      if ( *((char *)BaseAddress - 1) != 5 )
        goto LABEL_15;
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v46 = *(_DWORD *)(v7 + 8) ^ *((_DWORD *)HeapHandle + 34);
          if ( HIBYTE(v46) != ((unsigned __int8)v46 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v7 + 8) ^ *((_WORD *)HeapHandle + 68)) >> 8) ^ BYTE2(v46))) )
            goto LABEL_115;
        }
      }
      else if ( !(unsigned __int8)sub_180102B70(HeapHandle, v7) )
      {
LABEL_115:
        sub_18009A5F0(3, (_DWORD)HeapHandle, v7, (_DWORD)BaseAddress, 0LL, 0LL);
        goto LABEL_121;
      }
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v49 = *(_DWORD *)(v7 + 8);
          v63 = v49;
          if ( (v49 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v63 = *((_DWORD *)HeapHandle + 34) ^ v49;
          v48 = v63;
        }
        else
        {
          v48 = *(_WORD *)(v7 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)HeapHandle ^ (unsigned __int16)(qword_18015D458 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
          v47 = 0LL;
        else
          v47 = *(_QWORD *)(v7
                          - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)qword_18015D458 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
        v48 = *(_WORD *)(v47 + 36);
      }
      v50 = v48;
      if ( *(_BYTE *)(v7 + 15) == 4 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v51 = *(_DWORD *)(v7 + 8);
          v63 = v51;
          if ( (v51 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v63 = *((_DWORD *)HeapHandle + 34) ^ v51;
          v52 = v63;
        }
        else
        {
          v52 = *(_WORD *)(v7 + 8);
        }
        v53 = v50 + *(_QWORD *)(v7 - 16) - v52;
      }
      else
      {
        v53 = 16LL * v48;
      }
      if ( v53 + v7 < (unsigned __int64)BaseAddress )
        goto LABEL_115;
      if ( (Flags & 0x3C000102) != 0
        || (*((char *)BaseAddress - 1) != 5
          ? (v54 = 0LL)
          : (v54 = (char *)BaseAddress - 16 * (unsigned __int8)*((char *)BaseAddress - 2)),
            (int)sub_1800EBFF8(*((_DWORD *)BaseAddress - 2), (_DWORD)HeapHandle, (_DWORD)BaseAddress, 3, (__int64)v54) >= 0) )
      {
LABEL_15:
        if ( *(char *)(v7 + 15) < 0 )
        {
          if ( (unsigned __int16)HeapHandle ^ (unsigned __int16)(qword_18015D458 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
            || (v8 = *(_QWORD ***)(v7
                                 - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)qword_18015D458 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
          {
            LODWORD(v56) = (_DWORD)HeapHandle;
          }
          else
          {
            _m_prefetchw(v8);
            v9 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
            v10 = (unsigned __int16 *)*v8;
            v62 = v8[1];
            v11 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
            if ( (_QWORD *)((char *)v62
                          + (unsigned int)v9
                          * (((unsigned int)qword_18015D458 ^ (unsigned int)v11 ^ (unsigned int)v62 ^ *((_DWORD *)v62 + 6)) >> 16)
                          + (unsigned __int16)(qword_18015D458 ^ v11 ^ (unsigned __int16)v62 ^ *((_WORD *)v62 + 12))) == (_QWORD *)v7 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
              else
                UserModeGlobalLogger = 2147353472LL;
              if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                sub_1800FE3BC(*(_QWORD *)(v11 + 24), v7 + 16, 2LL);
              v13 = 100;
              if ( MEMORY[0x7FFE036A] <= 1u )
                v13 = 0;
              v14 = 0;
              while ( 1 )
              {
                v15 = *((_DWORD *)v8 + 8);
                if ( (v15 & 0x80000000) == 0
                  && v15 == _InterlockedCompareExchange((volatile signed __int32 *)v8 + 8, v15 | 0x80000000, v15) )
                {
                  break;
                }
                if ( ++v14 > v13 )
                {
                  v15 = -1;
                  break;
                }
              }
              *(_BYTE *)(v7 + 15) = 0x80;
              if ( v15 == -1 )
              {
                RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v8 + 1, (PSLIST_ENTRY)(v7 + 16));
                goto LABEL_32;
              }
              _bittestandreset64((signed __int64 *)v62[5], v9);
              if ( *((_WORD *)v8 + 8) )
              {
                v44 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v8 + 1);
                v16 = 0;
                while ( v44 )
                {
                  v45 = *((_DWORD *)&v44[-1].Next + 3);
                  ++v16;
                  v44 = v44->Next;
                  v9 = (unsigned __int16)(v45 >> 8);
                  _bittestandreset64((signed __int64 *)v62[5], v9);
                }
              }
              else
              {
                v16 = 0;
              }
              v17 = v16 + 1 + (unsigned __int16)v15;
              v18 = (__int64)*v8;
              v19 = ((_DWORD)v9 << 16) | v17;
              if ( (_WORD)v19 != *((_WORD *)v8 + 20)
                || (v21 = (_SLIST_HEADER **)*(unsigned int *)(v18 + 168),
                    v22 = *(unsigned int *)(*(_QWORD *)v18 + 32LL),
                    *(_DWORD *)(v18 + 164) == 1)
                && (unsigned int)v22 >= (unsigned int)v21
                && (v22 = (unsigned int)(v22 - (_DWORD)v21), (unsigned int)v22 < *(_DWORD *)(*(_QWORD *)v18 + 36LL)) )
              {
                *((_DWORD *)v8 + 8) = v19;
                if ( (*((_DWORD *)v8 + 11) & 2) != 0 || !sub_180014FCC(v18, (__int64)v8) )
                  goto LABEL_32;
                do
                {
                  v37 = *((_DWORD *)v8 + 11);
                  if ( !v37 || (v37 & 2) != 0 )
                    goto LABEL_32;
                }
                while ( v37 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 11, v37 | 2, v37) );
                v38 = (unsigned __int16 *)*v8;
                v39 = 0;
                while ( 1 )
                {
                  v40 = ((_BYTE)v39 + (unsigned __int8)v38[87]) & 0xF;
                  v41 = *(_SLIST_ENTRY **)&v38[4 * v40 + 8];
                  v42 = &v38[4 * v40];
                  if ( v41 )
                  {
                    if ( (*((_DWORD *)&v41[2].Next + 3) & 1) == 0
                      && v41 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)v42 + 2,
                                                  (signed __int64)v8,
                                                  (signed __int64)v41) )
                    {
                      _m_prefetchw((char *)&v41[2].Next + 12);
                      if ( _InterlockedAnd((volatile signed __int32 *)&v41[2].Next + 3, 0xFFFFFFFD) == 2 )
                      {
                        Next = (_SLIST_HEADER *)v41->Next->Next;
                        v41->Next = 0LL;
                        RtlInterlockedPushEntrySList_0(Next, v41 + 3);
                      }
                      goto LABEL_32;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v42 + 2, (signed __int64)v8, 0LL) )
                  {
                    goto LABEL_32;
                  }
                  if ( (unsigned int)++v39 >= 0x10 )
                  {
                    RtlInterlockedPushEntrySList_0(
                      (PSLIST_HEADER)(*(_QWORD *)(*(_QWORD *)(**v8 + 24LL) + 8LL * *((unsigned __int16 *)*v8 + 86) + 1192)
                                    + 144LL),
                      (PSLIST_ENTRY)v8 + 3);
                    goto LABEL_32;
                  }
                }
              }
              v23 = *v8;
              v24 = (_SLIST_ENTRY *)_InterlockedExchange64(*v8 + 1, 0LL);
              if ( v24 )
              {
                _m_prefetchw((char *)&v24[2].Next + 12);
                if ( _InterlockedAnd((volatile signed __int32 *)&v24[2].Next + 3, 0xFFFFFFF9) == 6 )
                {
                  v29 = v24 + 3;
                  v28 = (_SLIST_HEADER *)v24->Next->Next;
                  v24->Next = 0LL;
                  goto LABEL_52;
                }
                if ( sub_180014FCC((__int64)v23, (__int64)v24) )
                {
                  do
                  {
                    v25 = *((_DWORD *)&v24[2].Next + 3);
                    if ( !v25 || (v25 & 2) != 0 )
                      goto LABEL_53;
                  }
                  while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)&v24[2].Next + 3, v25 | 2, v25) );
                  v21 = (_SLIST_HEADER **)v24->Next;
                  v18 = 0LL;
                  while ( 1 )
                  {
                    v26 = ((_BYTE)v18 + (unsigned __int8)*((_WORD *)v21 + 87)) & 0xF;
                    v22 = (signed __int64)v21[v26 + 2];
                    v27 = &v21[v26];
                    if ( v22 )
                    {
                      if ( (*(_DWORD *)(v22 + 44) & 1) == 0
                        && v22 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)v27 + 2,
                                    (signed __int64)v24,
                                    v22) )
                      {
                        _m_prefetchw((const void *)(v22 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v22 + 44), 0xFFFFFFFD) != 2 )
                          break;
                        v28 = **(_SLIST_HEADER ***)v22;
                        *(_QWORD *)v22 = 0LL;
                        v29 = (_SLIST_ENTRY *)(v22 + 48);
LABEL_52:
                        RtlInterlockedPushEntrySList_0(v28, v29);
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)v27 + 2,
                                 (signed __int64)v24,
                                 0LL) )
                    {
                      break;
                    }
                    v18 = (unsigned int)(v18 + 1);
                    if ( (unsigned int)v18 >= 0x10 )
                    {
                      v29 = v24 + 3;
                      v28 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v24->Next->Next[1].Next + 1)
                                                        + 8LL * *((unsigned __int16 *)&v24->Next[10].Next + 6)
                                                        + 1192)
                                            + 144LL);
                      goto LABEL_52;
                    }
                  }
                }
              }
LABEL_53:
              v30 = *v23;
              v31 = (unsigned __int16 *)*v8;
              v32 = *(_QWORD *)(v30 + 24);
              if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
              {
                BaseAddressa = (PVOID)(((unsigned __int64)v8[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                v57 = sub_180102758(v8, v22, v18, v21);
                v58 = *(_QWORD *)(v32 + 24);
                RegionSize = 16 * v57 * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
                v59 = sub_18002AE30(v58, 1LL);
                ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v59, &OldProtect);
              }
              *((_DWORD *)v8[1] + 5) = 0;
              sub_180013AC8(v32, v8[1]);
              v33 = -*((unsigned __int16 *)v8 + 20);
              do
              {
                v34 = *((_QWORD *)v31 + 20);
                LODWORD(v67) = v34 + v33;
                HIDWORD(v67) = HIDWORD(v34) - 1;
              }
              while ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v31 + 20, v67, v34) );
              v8[1] = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 60));
              *((_DWORD *)v8 + 8) = 0;
              _m_prefetchw((char *)v8 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v8 + 11, 0xFFFFFFFE) == 1 )
              {
                v35 = (_SLIST_HEADER *)**v8;
                *v8 = 0LL;
                RtlInterlockedPushEntrySList_0(v35, (PSLIST_ENTRY)v8 + 3);
              }
LABEL_32:
              v6 = 1;
              goto LABEL_33;
            }
            v56 = *(_QWORD *)(v11 + 24);
          }
          sub_18009A5F0(3, v56, v7, 0, 0LL, 0LL);
          goto LABEL_32;
        }
        goto LABEL_59;
      }
    }
LABEL_121:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v55 = NtCurrentTeb();
    v55->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v6;
  }
  return 1;
}
