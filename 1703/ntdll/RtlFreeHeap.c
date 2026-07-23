/*
 * XREFs of RtlFreeHeap @ 0x1800244A0
 * Callers:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     RtlGetAppContainerParent @ 0x180002940 (RtlGetAppContainerParent.c)
 *     sub_180002DE4 @ 0x180002DE4 (sub_180002DE4.c)
 *     sub_1800030E8 @ 0x1800030E8 (sub_1800030E8.c)
 *     sub_180003454 @ 0x180003454 (sub_180003454.c)
 *     sub_18000359C @ 0x18000359C (sub_18000359C.c)
 *     LdrSetDllDirectory @ 0x1800038F0 (LdrSetDllDirectory.c)
 *     sub_180004908 @ 0x180004908 (sub_180004908.c)
 *     sub_180004D20 @ 0x180004D20 (sub_180004D20.c)
 *     sub_180006E54 @ 0x180006E54 (sub_180006E54.c)
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_1800078C4 @ 0x1800078C4 (sub_1800078C4.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     CsrFreeCaptureBuffer @ 0x18000AFB0 (CsrFreeCaptureBuffer.c)
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     sub_18000D8E0 @ 0x18000D8E0 (sub_18000D8E0.c)
 *     sub_18000DB30 @ 0x18000DB30 (sub_18000DB30.c)
 *     sub_18000FCB0 @ 0x18000FCB0 (sub_18000FCB0.c)
 *     sub_18000FF10 @ 0x18000FF10 (sub_18000FF10.c)
 *     sub_180010228 @ 0x180010228 (sub_180010228.c)
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     sub_18001052C @ 0x18001052C (sub_18001052C.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlCreateTimer @ 0x180011110 (RtlCreateTimer.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_1800129DC @ 0x1800129DC (sub_1800129DC.c)
 *     sub_180012AB0 @ 0x180012AB0 (sub_180012AB0.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     sub_180013820 @ 0x180013820 (sub_180013820.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpAllocWork @ 0x1800147E0 (TpAllocWork.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 *     sub_1800186C0 @ 0x1800186C0 (sub_1800186C0.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     sub_1800196E0 @ 0x1800196E0 (sub_1800196E0.c)
 *     sub_180019720 @ 0x180019720 (sub_180019720.c)
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 *     sub_180019B90 @ 0x180019B90 (sub_180019B90.c)
 *     sub_180019E6C @ 0x180019E6C (sub_180019E6C.c)
 *     EtwRegisterTraceGuidsW @ 0x18001A200 (EtwRegisterTraceGuidsW.c)
 *     sub_18001A2D0 @ 0x18001A2D0 (sub_18001A2D0.c)
 *     sub_18001A8B4 @ 0x18001A8B4 (sub_18001A8B4.c)
 *     sub_18001ABBC @ 0x18001ABBC (sub_18001ABBC.c)
 *     sub_18001B270 @ 0x18001B270 (sub_18001B270.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_180038624 @ 0x180038624 (sub_180038624.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     sub_180039C9C @ 0x180039C9C (sub_180039C9C.c)
 *     sub_180039E20 @ 0x180039E20 (sub_180039E20.c)
 *     sub_18003AAAC @ 0x18003AAAC (sub_18003AAAC.c)
 *     sub_18003D528 @ 0x18003D528 (sub_18003D528.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004912C @ 0x18004912C (sub_18004912C.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     sub_18004B8F8 @ 0x18004B8F8 (sub_18004B8F8.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004CE84 @ 0x18004CE84 (sub_18004CE84.c)
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     sub_180050AC0 @ 0x180050AC0 (sub_180050AC0.c)
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_180052270 @ 0x180052270 (sub_180052270.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180053DF8 @ 0x180053DF8 (sub_180053DF8.c)
 *     RtlCreateActivationContext @ 0x180054430 (RtlCreateActivationContext.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180055E4C @ 0x180055E4C (sub_180055E4C.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     sub_180058398 @ 0x180058398 (sub_180058398.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_180059294 @ 0x180059294 (sub_180059294.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     RtlFlsAlloc @ 0x180059530 (RtlFlsAlloc.c)
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 *     sub_18005DF88 @ 0x18005DF88 (sub_18005DF88.c)
 *     sub_18005F868 @ 0x18005F868 (sub_18005F868.c)
 *     EtwUnregisterTraceGuids @ 0x18005FCB0 (EtwUnregisterTraceGuids.c)
 *     RtlCreateProcessParametersEx @ 0x180062490 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x180062AD0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180062E60 (RtlSetEnvironmentVar.c)
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 *     sub_18006BBAC @ 0x18006BBAC (sub_18006BBAC.c)
 *     RtlCleanUpTEBLangLists @ 0x18006BFE0 (RtlCleanUpTEBLangLists.c)
 *     sub_18006C31C @ 0x18006C31C (sub_18006C31C.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006C440 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 *     sub_18006EBF4 @ 0x18006EBF4 (sub_18006EBF4.c)
 *     sub_18006EC1C @ 0x18006EC1C (sub_18006EC1C.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     TpTrimPools @ 0x180070D30 (TpTrimPools.c)
 *     sub_1800714DC @ 0x1800714DC (sub_1800714DC.c)
 *     sub_180072090 @ 0x180072090 (sub_180072090.c)
 *     sub_180072440 @ 0x180072440 (sub_180072440.c)
 *     RtlAddAtomToAtomTable_0 @ 0x180072498 (RtlAddAtomToAtomTable_0.c)
 *     RtlDeleteFunctionTable @ 0x180073E80 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     RtlFreeSid @ 0x180075A20 (RtlFreeSid.c)
 *     RtlCreateAndSetSD @ 0x180075B60 (RtlCreateAndSetSD.c)
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180077A0C @ 0x180077A0C (sub_180077A0C.c)
 *     RtlFreeActivationContextStack @ 0x1800782F0 (RtlFreeActivationContextStack.c)
 *     sub_1800784E4 @ 0x1800784E4 (sub_1800784E4.c)
 *     sub_180078B20 @ 0x180078B20 (sub_180078B20.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     sub_180079B6C @ 0x180079B6C (sub_180079B6C.c)
 *     sub_180079C20 @ 0x180079C20 (sub_180079C20.c)
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 *     sub_18007AF78 @ 0x18007AF78 (sub_18007AF78.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B030 (RtlGetCurrentDirectory_U.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     sub_18007BB68 @ 0x18007BB68 (sub_18007BB68.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     sub_18007CFD8 @ 0x18007CFD8 (sub_18007CFD8.c)
 *     TpSimpleTryPost @ 0x18007DF90 (TpSimpleTryPost.c)
 *     sub_18007F380 @ 0x18007F380 (sub_18007F380.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 *     RtlpNtQueryValueKey @ 0x180080B00 (RtlpNtQueryValueKey.c)
 *     sub_180080C10 @ 0x180080C10 (sub_180080C10.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 *     sub_180081250 @ 0x180081250 (sub_180081250.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     sub_180081720 @ 0x180081720 (sub_180081720.c)
 *     sub_180081AF4 @ 0x180081AF4 (sub_180081AF4.c)
 *     sub_180081E98 @ 0x180081E98 (sub_180081E98.c)
 *     RtlDeleteSecurityObject @ 0x180081F00 (RtlDeleteSecurityObject.c)
 *     RtlpNtEnumerateSubKey @ 0x180082470 (RtlpNtEnumerateSubKey.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 *     TpAllocCleanupGroup @ 0x180082B50 (TpAllocCleanupGroup.c)
 *     sub_180082E68 @ 0x180082E68 (sub_180082E68.c)
 *     sub_180082ED0 @ 0x180082ED0 (sub_180082ED0.c)
 *     sub_18008302C @ 0x18008302C (sub_18008302C.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     RtlDeleteHashTable @ 0x180083120 (RtlDeleteHashTable.c)
 *     sub_1800834C8 @ 0x1800834C8 (sub_1800834C8.c)
 *     RtlDestroyProcessParameters @ 0x180083670 (RtlDestroyProcessParameters.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     RtlLockModuleSection @ 0x180083C60 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 *     sub_1800841B0 @ 0x1800841B0 (sub_1800841B0.c)
 *     RtlSetProtectedPolicy @ 0x1800850D0 (RtlSetProtectedPolicy.c)
 *     TpReleaseCleanupGroup @ 0x180085DA0 (TpReleaseCleanupGroup.c)
 *     RtlSetEnvironmentStrings @ 0x180085E10 (RtlSetEnvironmentStrings.c)
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 *     RtlContractHashTable @ 0x1800862F0 (RtlContractHashTable.c)
 *     sub_1800869C8 @ 0x1800869C8 (sub_1800869C8.c)
 *     sub_180086AA0 @ 0x180086AA0 (sub_180086AA0.c)
 *     sub_180086CA4 @ 0x180086CA4 (sub_180086CA4.c)
 *     sub_180087358 @ 0x180087358 (sub_180087358.c)
 *     sub_1800873C4 @ 0x1800873C4 (sub_1800873C4.c)
 *     RtlReleasePrivilege @ 0x180087710 (RtlReleasePrivilege.c)
 *     sub_180087928 @ 0x180087928 (sub_180087928.c)
 *     RtlAbortRXact @ 0x180087C90 (RtlAbortRXact.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180088080 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlAddAttributeActionToRXact @ 0x180088780 (RtlAddAttributeActionToRXact.c)
 *     sub_180088CF8 @ 0x180088CF8 (sub_180088CF8.c)
 *     RtlSetSearchPathMode @ 0x180089180 (RtlSetSearchPathMode.c)
 *     RtlDestroyHandleTable @ 0x180089AF0 (RtlDestroyHandleTable.c)
 *     sub_180089B84 @ 0x180089B84 (sub_180089B84.c)
 *     sub_180089C50 @ 0x180089C50 (sub_180089C50.c)
 *     sub_180089DC4 @ 0x180089DC4 (sub_180089DC4.c)
 *     sub_180089E88 @ 0x180089E88 (sub_180089E88.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 *     sub_18008C2B0 @ 0x18008C2B0 (sub_18008C2B0.c)
 *     RtlExpandHashTable @ 0x18008C560 (RtlExpandHashTable.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C720 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     LdrRemoveDllDirectory @ 0x18008D020 (LdrRemoveDllDirectory.c)
 *     RtlDosSearchPath_U @ 0x18008DA50 (RtlDosSearchPath_U.c)
 *     RtlCheckBootStatusIntegrity @ 0x18008DE40 (RtlCheckBootStatusIntegrity.c)
 *     LdrFlushAlternateResourceModules @ 0x18008E170 (LdrFlushAlternateResourceModules.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlSetCurrentEnvironment @ 0x18008E990 (RtlSetCurrentEnvironment.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 *     sub_180090200 @ 0x180090200 (sub_180090200.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 *     sub_180094A20 @ 0x180094A20 (sub_180094A20.c)
 *     sub_180094C58 @ 0x180094C58 (sub_180094C58.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D400C @ 0x1800D400C (sub_1800D400C.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D42C0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800D44B0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800D4520 (RtlEnableThreadProfiling.c)
 *     sub_1800D4C84 @ 0x1800D4C84 (sub_1800D4C84.c)
 *     LdrUnregisterDllNotification @ 0x1800D5A60 (LdrUnregisterDllNotification.c)
 *     sub_1800D6040 @ 0x1800D6040 (sub_1800D6040.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 *     sub_1800D6884 @ 0x1800D6884 (sub_1800D6884.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800D7BCC @ 0x1800D7BCC (sub_1800D7BCC.c)
 *     RtlCreateUserSecurityObject @ 0x1800D8FB0 (RtlCreateUserSecurityObject.c)
 *     sub_1800DA0F4 @ 0x1800DA0F4 (sub_1800DA0F4.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 *     sub_1800DFF68 @ 0x1800DFF68 (sub_1800DFF68.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 *     RtlQueryModuleInformation @ 0x1800E2540 (RtlQueryModuleInformation.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 *     sub_1800E3538 @ 0x1800E3538 (sub_1800E3538.c)
 *     RtlIsUntrustedObject @ 0x1800E5310 (RtlIsUntrustedObject.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E6584 (RtlConvertToAutoInheritSecurityObject_0.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 *     RtlDestroyAtomTable @ 0x1800E94C0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E95A0 (RtlEmptyAtomTable.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     sub_1800EC2E0 @ 0x1800EC2E0 (sub_1800EC2E0.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800ECBD0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800EF4C0 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800F23E0 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800F2500 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800F2610 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F2670 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3030 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     sub_1800F320C @ 0x1800F320C (sub_1800F320C.c)
 *     sub_1800F60C0 @ 0x1800F60C0 (sub_1800F60C0.c)
 *     sub_1800F6928 @ 0x1800F6928 (sub_1800F6928.c)
 *     sub_1800F6ECC @ 0x1800F6ECC (sub_1800F6ECC.c)
 *     sub_1800F73EC @ 0x1800F73EC (sub_1800F73EC.c)
 *     sub_1800FA22C @ 0x1800FA22C (sub_1800FA22C.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FA598 @ 0x1800FA598 (sub_1800FA598.c)
 *     sub_1800FAD34 @ 0x1800FAD34 (sub_1800FAD34.c)
 *     sub_1800FB6A4 @ 0x1800FB6A4 (sub_1800FB6A4.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 *     sub_180104F6C @ 0x180104F6C (sub_180104F6C.c)
 *     sub_1801054F0 @ 0x1801054F0 (sub_1801054F0.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 *     sub_180105FE8 @ 0x180105FE8 (sub_180105FE8.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_180108F48 @ 0x180108F48 (sub_180108F48.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 *     sub_180109568 @ 0x180109568 (sub_180109568.c)
 *     sub_180109740 @ 0x180109740 (sub_180109740.c)
 *     sub_180109804 @ 0x180109804 (sub_180109804.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 *     sub_18010B5E8 @ 0x18010B5E8 (sub_18010B5E8.c)
 *     sub_18010BC9C @ 0x18010BC9C (sub_18010BC9C.c)
 *     sub_18010BE7C @ 0x18010BE7C (sub_18010BE7C.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 *     sub_18010CAF8 @ 0x18010CAF8 (sub_18010CAF8.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 *     sub_18010DFF0 @ 0x18010DFF0 (sub_18010DFF0.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 *     sub_18010E3D0 @ 0x18010E3D0 (sub_18010E3D0.c)
 *     sub_18010E460 @ 0x18010E460 (sub_18010E460.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180023688 @ 0x180023688 (sub_180023688.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_18008AEA0 @ 0x18008AEA0 (sub_18008AEA0.c)
 *     sub_1800959D8 @ 0x1800959D8 (sub_1800959D8.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A8E00 (RtlInterlockedFlushSList_0.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  LOGICAL v6; // esi
  unsigned __int64 v7; // r14
  _QWORD **v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int16 *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v15; // edx
  int v16; // r8d
  signed __int32 v17; // ebx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v23; // r9
  signed __int64 v24; // rdx
  __int64 *v25; // r14
  _SLIST_ENTRY *v26; // rbx
  signed __int32 v27; // eax
  _SLIST_HEADER **v28; // rcx
  _SLIST_HEADER *v29; // rcx
  _SLIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  unsigned __int16 *v32; // r14
  __int64 v33; // rbx
  int v34; // edx
  signed __int64 v35; // rax
  int v36; // ecx
  _SLIST_HEADER *v37; // rcx
  unsigned __int8 v38; // al
  signed __int32 v39; // eax
  unsigned __int16 *v40; // rcx
  int v41; // r8d
  __int64 v42; // r9
  _SLIST_ENTRY *v43; // rdx
  _SLIST_HEADER *Next; // rcx
  PSLIST_ENTRY v45; // rax
  unsigned int v46; // edx
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
  _DWORD *v58; // rcx
  ULONG v59; // eax
  ULONG OldProtect; // [rsp+30h] [rbp-88h] BYREF
  __int64 v61; // [rsp+38h] [rbp-80h] BYREF
  _QWORD *v62; // [rsp+40h] [rbp-78h]
  int v63; // [rsp+48h] [rbp-70h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-68h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp-60h] BYREF
  int v66; // [rsp+68h] [rbp-50h]
  __int64 v67; // [rsp+D0h] [rbp+18h] BYREF
  signed __int64 v68; // [rsp+D8h] [rbp+20h]

  if ( BaseAddress )
  {
    v6 = 0;
    if ( !HeapHandle )
      sub_1800A4DFC(18, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      return sub_180024AD0(HeapHandle);
    if ( (byte_18015BFBC & 2) != 0 )
    {
      v6 = sub_180023C90((__int64)HeapHandle, (unsigned __int64)BaseAddress, Flags, &v61, &v67);
      if ( v6 && (_WORD)v67 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(qword_1801598D8 + 8LL * ((unsigned __int16)v67 - 1)) + 32LL),
          -v61);
      return v6;
    }
    v7 = 0LL;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
LABEL_61:
      v38 = sub_1800265E0(HeapHandle);
      v6 = v38;
      if ( v38 )
      {
LABEL_33:
        if ( (dword_18015C2A8 & 1) != 0
          && (dword_18015C2A8 & 2) != 0
          && HeapHandle != qword_18015BFE0
          && NtCurrentPeb()->ProcessHeap
          && (Flags & 0x10000000) == 0 )
        {
          sub_1800FEEB8(HeapHandle, BaseAddress);
        }
      }
      return v6;
    }
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v7 = sub_180077158(HeapHandle, BaseAddress);
    }
    else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      sub_1800A4DFC(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    }
    else
    {
      v7 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
      {
        sub_1800A4DFC(8, (_DWORD)HeapHandle, v7, 0, 0LL, 0LL);
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
          v66 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v7 + 8);
          if ( HIBYTE(v66) != ((unsigned __int8)v66 ^ (unsigned __int8)(BYTE1(v66) ^ BYTE2(v66))) )
            goto LABEL_116;
        }
      }
      else if ( !(unsigned __int8)sub_1800959D8(HeapHandle, v7) )
      {
LABEL_116:
        sub_1800A4DFC(3, (_DWORD)HeapHandle, v7, (_DWORD)BaseAddress, 0LL, 0LL);
        goto LABEL_122;
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
        if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
          v47 = 0LL;
        else
          v47 = *(_QWORD *)(v7
                          - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
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
        goto LABEL_116;
      if ( (Flags & 0x3C000102) != 0
        || (*((char *)BaseAddress - 1) != 5
          ? (v54 = 0LL)
          : (v54 = (char *)BaseAddress - 16 * (unsigned __int8)*((char *)BaseAddress - 2)),
            (int)sub_180095A28(*((_DWORD *)BaseAddress - 2), (_DWORD)HeapHandle, (_DWORD)BaseAddress, 3, (__int64)v54) >= 0) )
      {
LABEL_15:
        if ( *(char *)(v7 + 15) < 0 )
        {
          if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
            || (v8 = *(_QWORD ***)(v7
                                 - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
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
            v12 = qword_18015BFE8 ^ v11 ^ (unsigned int)v62 ^ *((_DWORD *)v62 + 6);
            if ( (_QWORD *)((char *)v62 + (unsigned int)v9 * HIWORD(v12) + (unsigned __int16)v12) == (_QWORD *)v7 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
              else
                UserModeGlobalLogger = 2147353472LL;
              if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                sub_1800FFB4C(*(_QWORD *)(v11 + 24), v7 + 16, 2LL, v13);
              v15 = 100;
              if ( MEMORY[0x7FFE036A] <= 1u )
                v15 = 0;
              v16 = 0;
              while ( 1 )
              {
                v17 = *((_DWORD *)v8 + 8);
                if ( (v17 & 0x80000000) == 0
                  && v17 == _InterlockedCompareExchange((volatile signed __int32 *)v8 + 8, v17 | 0x80000000, v17) )
                {
                  break;
                }
                if ( ++v16 > v15 )
                  goto LABEL_80;
              }
              if ( v17 == -1 )
              {
LABEL_80:
                *(_BYTE *)(v7 + 15) = 0x80;
                RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v8 + 1, (PSLIST_ENTRY)(v7 + 16));
                goto LABEL_32;
              }
              *(_BYTE *)(v7 + 15) = 0x80;
              _bittestandreset64((signed __int64 *)v62[5], v9);
              if ( *((_WORD *)v8 + 8) )
              {
                v45 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v8 + 1);
                v18 = 0;
                while ( v45 )
                {
                  v46 = *((_DWORD *)&v45[-1].Next + 3);
                  ++v18;
                  v45 = v45->Next;
                  v9 = (unsigned __int16)(v46 >> 8);
                  _bittestandreset64((signed __int64 *)v62[5], v9);
                }
              }
              else
              {
                v18 = 0;
              }
              v19 = v18 + 1 + (unsigned __int16)v17;
              v20 = (__int64)*v8;
              v21 = ((_DWORD)v9 << 16) | v19;
              if ( (_WORD)v21 != *((_WORD *)v8 + 20)
                || (v23 = *(unsigned int *)(v20 + 168),
                    v24 = *(unsigned int *)(*(_QWORD *)v20 + 32LL),
                    *(_DWORD *)(v20 + 164) == 1)
                && (unsigned int)v24 >= (unsigned int)v23
                && (v24 = (unsigned int)(v24 - v23), (unsigned int)v24 < *(_DWORD *)(*(_QWORD *)v20 + 36LL)) )
              {
                *((_DWORD *)v8 + 8) = v21;
                if ( (*((_DWORD *)v8 + 11) & 2) != 0 || !sub_180023688(v20, (__int64)v8) )
                  goto LABEL_32;
                do
                {
                  v39 = *((_DWORD *)v8 + 11);
                  if ( !v39 || (v39 & 2) != 0 )
                    goto LABEL_32;
                }
                while ( v39 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 11, v39 | 2, v39) );
                v40 = (unsigned __int16 *)*v8;
                v41 = 0;
                while ( 1 )
                {
                  v42 = ((_BYTE)v41 + (unsigned __int8)v40[87]) & 0xF;
                  v43 = *(_SLIST_ENTRY **)&v40[4 * v42 + 8];
                  if ( v43 )
                  {
                    if ( (*((_DWORD *)&v43[2].Next + 3) & 1) == 0
                      && v43 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)&v40[4 * v42 + 8],
                                                  (signed __int64)v8,
                                                  (signed __int64)v43) )
                    {
                      _m_prefetchw((char *)&v43[2].Next + 12);
                      if ( _InterlockedAnd((volatile signed __int32 *)&v43[2].Next + 3, 0xFFFFFFFD) == 2 )
                      {
                        Next = (_SLIST_HEADER *)v43->Next->Next;
                        v43->Next = 0LL;
                        RtlInterlockedPushEntrySList_0(Next, v43 + 3);
                      }
                      goto LABEL_32;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v40[4 * v42 + 8],
                               (signed __int64)v8,
                               0LL) )
                  {
                    goto LABEL_32;
                  }
                  if ( (unsigned int)++v41 >= 0x10 )
                  {
                    RtlInterlockedPushEntrySList_0(
                      (PSLIST_HEADER)(*(_QWORD *)(*(_QWORD *)(**v8 + 24LL) + 8LL * *((unsigned __int16 *)*v8 + 86) + 1192)
                                    + 144LL),
                      (PSLIST_ENTRY)v8 + 3);
                    goto LABEL_32;
                  }
                }
              }
              v25 = *v8;
              v26 = (_SLIST_ENTRY *)_InterlockedExchange64(*v8 + 1, 0LL);
              if ( v26 )
              {
                _m_prefetchw((char *)&v26[2].Next + 12);
                if ( _InterlockedAnd((volatile signed __int32 *)&v26[2].Next + 3, 0xFFFFFFF9) == 6 )
                {
                  v30 = v26 + 3;
                  v29 = (_SLIST_HEADER *)v26->Next->Next;
                  v26->Next = 0LL;
                  goto LABEL_51;
                }
                if ( sub_180023688((__int64)v25, (__int64)v26) )
                {
                  do
                  {
                    v27 = *((_DWORD *)&v26[2].Next + 3);
                    if ( !v27 || (v27 & 2) != 0 )
                      goto LABEL_52;
                  }
                  while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)&v26[2].Next + 3, v27 | 2, v27) );
                  v28 = (_SLIST_HEADER **)v26->Next;
                  v20 = 0LL;
                  while ( 1 )
                  {
                    v23 = ((_BYTE)v20 + (unsigned __int8)*((_WORD *)v28 + 87)) & 0xF;
                    v24 = (signed __int64)v28[v23 + 2];
                    if ( v24 )
                    {
                      if ( (*(_DWORD *)(v24 + 44) & 1) == 0
                        && v24 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&v28[v23 + 2],
                                    (signed __int64)v26,
                                    v24) )
                      {
                        _m_prefetchw((const void *)(v24 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v24 + 44), 0xFFFFFFFD) != 2 )
                          break;
                        v29 = **(_SLIST_HEADER ***)v24;
                        *(_QWORD *)v24 = 0LL;
                        v30 = (_SLIST_ENTRY *)(v24 + 48);
LABEL_51:
                        RtlInterlockedPushEntrySList_0(v29, v30);
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v28[v23 + 2],
                                 (signed __int64)v26,
                                 0LL) )
                    {
                      break;
                    }
                    v20 = (unsigned int)(v20 + 1);
                    if ( (unsigned int)v20 >= 0x10 )
                    {
                      v30 = v26 + 3;
                      v29 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v26->Next->Next[1].Next + 1)
                                                        + 8LL * *((unsigned __int16 *)&v26->Next[10].Next + 6)
                                                        + 1192)
                                            + 144LL);
                      goto LABEL_51;
                    }
                  }
                }
              }
LABEL_52:
              v31 = *v25;
              v32 = (unsigned __int16 *)*v8;
              v33 = *(_QWORD *)(v31 + 24);
              if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
              {
                BaseAddressa = (PVOID)(((unsigned __int64)v8[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                v57 = sub_18008AEA0(v8, v24, v20, v23);
                v58 = *(_DWORD **)(v33 + 24);
                RegionSize = 16 * v57 * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
                v59 = sub_18001E548(v58, 1);
                ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v59, &OldProtect);
              }
              *((_DWORD *)v8[1] + 5) = 0;
              sub_180022088(v33, v8[1]);
              v34 = -*((unsigned __int16 *)v8 + 20);
              do
              {
                v35 = *((_QWORD *)v32 + 20);
                LODWORD(v68) = v35 + v34;
                if ( v34 > 0 )
                  v36 = HIDWORD(v35) + 1;
                else
                  v36 = HIDWORD(v35) - 1;
                HIDWORD(v68) = v36;
              }
              while ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v32 + 20, v68, v35) );
              v8[1] = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v33 + 60));
              *((_DWORD *)v8 + 8) = 0;
              _m_prefetchw((char *)v8 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v8 + 11, 0xFFFFFFFE) == 1 )
              {
                v37 = (_SLIST_HEADER *)**v8;
                *v8 = 0LL;
                RtlInterlockedPushEntrySList_0(v37, (PSLIST_ENTRY)v8 + 3);
              }
LABEL_32:
              v6 = 1;
              goto LABEL_33;
            }
            v56 = *(_QWORD *)(v11 + 24);
          }
          sub_1800A4DFC(3, v56, v7, 0, 0LL, 0LL);
          goto LABEL_32;
        }
        goto LABEL_61;
      }
    }
LABEL_122:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v55 = NtCurrentTeb();
    v55->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v6;
  }
  return 1;
}
