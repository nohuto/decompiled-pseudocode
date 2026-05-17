/*
 * XREFs of memset @ 0x1800A16C0
 * Callers:
 *     sub_180001A1C @ 0x180001A1C (sub_180001A1C.c)
 *     RtlLargeIntegerToChar @ 0x1800020E0 (RtlLargeIntegerToChar.c)
 *     sub_180002524 @ 0x180002524 (sub_180002524.c)
 *     EtwEventWriteEndScenario @ 0x1800048C0 (EtwEventWriteEndScenario.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 *     sub_180005554 @ 0x180005554 (sub_180005554.c)
 *     sub_180005DF4 @ 0x180005DF4 (sub_180005DF4.c)
 *     sub_180006360 @ 0x180006360 (sub_180006360.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_180008138 @ 0x180008138 (sub_180008138.c)
 *     sub_1800092CC @ 0x1800092CC (sub_1800092CC.c)
 *     sub_180009558 @ 0x180009558 (sub_180009558.c)
 *     sub_1800096C4 @ 0x1800096C4 (sub_1800096C4.c)
 *     sub_18000983C @ 0x18000983C (sub_18000983C.c)
 *     sub_180009AA0 @ 0x180009AA0 (sub_180009AA0.c)
 *     sub_180009C0C @ 0x180009C0C (sub_180009C0C.c)
 *     RtlCheckPortableOperatingSystem @ 0x180009D80 (RtlCheckPortableOperatingSystem.c)
 *     sub_180009E4C @ 0x180009E4C (sub_180009E4C.c)
 *     sub_18000A514 @ 0x18000A514 (sub_18000A514.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18001E658 @ 0x18001E658 (sub_18001E658.c)
 *     sub_18001E820 @ 0x18001E820 (sub_18001E820.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     RtlDeleteResource @ 0x180029F00 (RtlDeleteResource.c)
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     sub_18002D890 @ 0x18002D890 (sub_18002D890.c)
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     RtlCheckTokenMembershipEx @ 0x180035010 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     RtlIntegerToChar @ 0x180040A10 (RtlIntegerToChar.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     A_SHAFinal @ 0x180044710 (A_SHAFinal.c)
 *     sub_180044814 @ 0x180044814 (sub_180044814.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 *     sub_1800486A8 @ 0x1800486A8 (sub_1800486A8.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     RtlLockModuleSection @ 0x180048E10 (RtlLockModuleSection.c)
 *     sub_180049998 @ 0x180049998 (sub_180049998.c)
 *     sub_180049B18 @ 0x180049B18 (sub_180049B18.c)
 *     sub_180049C00 @ 0x180049C00 (sub_180049C00.c)
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 *     sub_18004B908 @ 0x18004B908 (sub_18004B908.c)
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
 *     sub_18004CBE8 @ 0x18004CBE8 (sub_18004CBE8.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     RtlFreeHandle @ 0x18004CFB0 (RtlFreeHandle.c)
 *     sub_18004D658 @ 0x18004D658 (sub_18004D658.c)
 *     RtlCreateActivationContext @ 0x18004D910 (RtlCreateActivationContext.c)
 *     sub_18004DA74 @ 0x18004DA74 (sub_18004DA74.c)
 *     RtlActivateActivationContextEx @ 0x18004DFF0 (RtlActivateActivationContextEx.c)
 *     sub_180050A6C @ 0x180050A6C (sub_180050A6C.c)
 *     RtlSetBits @ 0x1800510C0 (RtlSetBits.c)
 *     RtlClearBits @ 0x180053EB0 (RtlClearBits.c)
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_180055C44 @ 0x180055C44 (sub_180055C44.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     RtlSwitchedVVI @ 0x18005A320 (RtlSwitchedVVI.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005C438 @ 0x18005C438 (sub_18005C438.c)
 *     CsrAllocateCaptureBuffer @ 0x18005D310 (CsrAllocateCaptureBuffer.c)
 *     sub_18005D72C @ 0x18005D72C (sub_18005D72C.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 *     sub_18005DD10 @ 0x18005DD10 (sub_18005DD10.c)
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005EA08 @ 0x18005EA08 (sub_18005EA08.c)
 *     sub_18005F2D0 @ 0x18005F2D0 (sub_18005F2D0.c)
 *     sub_18005F458 @ 0x18005F458 (sub_18005F458.c)
 *     sub_18005F5DC @ 0x18005F5DC (sub_18005F5DC.c)
 *     sub_18005F770 @ 0x18005F770 (sub_18005F770.c)
 *     sub_18005F87C @ 0x18005F87C (sub_18005F87C.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060124 @ 0x180060124 (sub_180060124.c)
 *     sub_180060B10 @ 0x180060B10 (sub_180060B10.c)
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_180061ED0 @ 0x180061ED0 (sub_180061ED0.c)
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 *     sub_1800642B0 @ 0x1800642B0 (sub_1800642B0.c)
 *     sub_180064DE8 @ 0x180064DE8 (sub_180064DE8.c)
 *     MD5Final @ 0x180065C60 (MD5Final.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180067030 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlIpv6StringToAddressW @ 0x180068940 (RtlIpv6StringToAddressW.c)
 *     sub_180069950 @ 0x180069950 (sub_180069950.c)
 *     RtlInitializeExtendedContext @ 0x18006D0C0 (RtlInitializeExtendedContext.c)
 *     sub_18006D6B4 @ 0x18006D6B4 (sub_18006D6B4.c)
 *     sub_18006FB8C @ 0x18006FB8C (sub_18006FB8C.c)
 *     RtlMakeSelfRelativeSD @ 0x1800703A0 (RtlMakeSelfRelativeSD.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 *     sub_1800733EC @ 0x1800733EC (sub_1800733EC.c)
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180073870 (RtlCreateMemoryBlockLookaside.c)
 *     sub_180074240 @ 0x180074240 (sub_180074240.c)
 *     RtlIpv6StringToAddressA @ 0x1800751F0 (RtlIpv6StringToAddressA.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180075690 (RtlpGetDeviceFamilyInfoEnum.c)
 *     sub_180076128 @ 0x180076128 (sub_180076128.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_180077744 @ 0x180077744 (sub_180077744.c)
 *     RtlClearAllBits @ 0x180078280 (RtlClearAllBits.c)
 *     RtlCreateHashTableEx_0 @ 0x1800783D0 (RtlCreateHashTableEx_0.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_180079CEC @ 0x180079CEC (sub_180079CEC.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007BAE0 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 *     RtlSidHashInitialize @ 0x18007D8A0 (RtlSidHashInitialize.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 *     ntdll_8 @ 0x18007DD10 (ntdll_8.c)
 *     sub_18007E9DC @ 0x18007E9DC (sub_18007E9DC.c)
 *     RtlInitializeHandleTable @ 0x18007EE30 (RtlInitializeHandleTable.c)
 *     sub_18007FCDC @ 0x18007FCDC (sub_18007FCDC.c)
 *     sub_180080418 @ 0x180080418 (sub_180080418.c)
 *     RtlInitializeGenericTableAvl @ 0x1800806E0 (RtlInitializeGenericTableAvl.c)
 *     RtlSetEnvironmentStrings @ 0x180080C50 (RtlSetEnvironmentStrings.c)
 *     sub_180081554 @ 0x180081554 (sub_180081554.c)
 *     RtlVerifyVersionInfo @ 0x180081850 (RtlVerifyVersionInfo.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     RtlEraseUnicodeString @ 0x180083950 (RtlEraseUnicodeString.c)
 *     PssNtWalkSnapshot @ 0x180084C60 (PssNtWalkSnapshot.c)
 *     PssNtValidateDescriptor @ 0x180084F10 (PssNtValidateDescriptor.c)
 *     sub_180084FA4 @ 0x180084FA4 (sub_180084FA4.c)
 *     sub_1800850C4 @ 0x1800850C4 (sub_1800850C4.c)
 *     sub_180085234 @ 0x180085234 (sub_180085234.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_18008668C @ 0x18008668C (sub_18008668C.c)
 *     sub_180086FA0 @ 0x180086FA0 (sub_180086FA0.c)
 *     RtlConnectToSm @ 0x180087B10 (RtlConnectToSm.c)
 *     RtlSendMsgToSm @ 0x180087E40 (RtlSendMsgToSm.c)
 *     EtwEventWriteStartScenario @ 0x180088410 (EtwEventWriteStartScenario.c)
 *     RtlZeroMemory @ 0x180088620 (RtlZeroMemory.c)
 *     sub_1800887C0 @ 0x1800887C0 (sub_1800887C0.c)
 *     RtlExpandHashTable @ 0x180089AF0 (RtlExpandHashTable.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlSetCurrentEnvironment @ 0x18008A8E0 (RtlSetCurrentEnvironment.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     sub_1800943B4 @ 0x1800943B4 (sub_1800943B4.c)
 *     memcpy_s @ 0x180096220 (memcpy_s.c)
 *     sub_180097788 @ 0x180097788 (sub_180097788.c)
 *     sub_180097BEC @ 0x180097BEC (sub_180097BEC.c)
 *     sub_180099480 @ 0x180099480 (sub_180099480.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800C8BC0 (RtlEnableThreadProfiling.c)
 *     sub_1800CA474 @ 0x1800CA474 (sub_1800CA474.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CC970 @ 0x1800CC970 (sub_1800CC970.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     sub_1800D3390 @ 0x1800D3390 (sub_1800D3390.c)
 *     sub_1800D39D0 @ 0x1800D39D0 (sub_1800D39D0.c)
 *     sub_1800D5528 @ 0x1800D5528 (sub_1800D5528.c)
 *     sub_1800D5854 @ 0x1800D5854 (sub_1800D5854.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     RtlWerpReportException_0 @ 0x1800D67F0 (RtlWerpReportException_0.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     RtlReportSqmEscalation @ 0x1800D7320 (RtlReportSqmEscalation.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 *     sub_1800D7A54 @ 0x1800D7A54 (sub_1800D7A54.c)
 *     sub_1800D7B88 @ 0x1800D7B88 (sub_1800D7B88.c)
 *     sub_1800D7BF4 @ 0x1800D7BF4 (sub_1800D7BF4.c)
 *     sub_1800DB9E4 @ 0x1800DB9E4 (sub_1800DB9E4.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     RtlCreateUserProcess @ 0x1800DBDA0 (RtlCreateUserProcess.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800DBF00 (RtlQueryImageMitigationPolicy.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 *     RtlResetRtlTranslations @ 0x1800DEFA0 (RtlResetRtlTranslations.c)
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E2FC0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E33C0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlDestroyAtomTable @ 0x1800E4710 (RtlDestroyAtomTable.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800E71DC @ 0x1800E71DC (sub_1800E71DC.c)
 *     RtlConvertLCIDToString @ 0x1800E7AB0 (RtlConvertLCIDToString.c)
 *     sub_1800E81C8 @ 0x1800E81C8 (sub_1800E81C8.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     sub_1800ECD38 @ 0x1800ECD38 (sub_1800ECD38.c)
 *     RtlInitStrongEnumerationHashTable @ 0x1800EE150 (RtlInitStrongEnumerationHashTable.c)
 *     sub_1800F0624 @ 0x1800F0624 (sub_1800F0624.c)
 *     RtlInitializeCorrelationVector @ 0x1800F1850 (RtlInitializeCorrelationVector.c)
 *     RtlFillMemory @ 0x1800F1B50 (RtlFillMemory.c)
 *     sub_1800F1BC0 @ 0x1800F1BC0 (sub_1800F1BC0.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 *     RtlInitializeContext @ 0x1800F4480 (RtlInitializeContext.c)
 *     sub_1800F6800 @ 0x1800F6800 (sub_1800F6800.c)
 *     RtlTraceDatabaseCreate @ 0x1800F7910 (RtlTraceDatabaseCreate.c)
 *     sub_1800FAB18 @ 0x1800FAB18 (sub_1800FAB18.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 *     sub_1800FC3FC @ 0x1800FC3FC (sub_1800FC3FC.c)
 *     sub_1800FC498 @ 0x1800FC498 (sub_1800FC498.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 *     sub_1800FC5C4 @ 0x1800FC5C4 (sub_1800FC5C4.c)
 *     sub_1800FC664 @ 0x1800FC664 (sub_1800FC664.c)
 *     sub_1800FC890 @ 0x1800FC890 (sub_1800FC890.c)
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 *     sub_1800FD1F4 @ 0x1800FD1F4 (sub_1800FD1F4.c)
 *     sub_1800FD290 @ 0x1800FD290 (sub_1800FD290.c)
 *     sub_1800FD360 @ 0x1800FD360 (sub_1800FD360.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 *     sub_1800FD868 @ 0x1800FD868 (sub_1800FD868.c)
 *     sub_1800FDA58 @ 0x1800FDA58 (sub_1800FDA58.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 *     sub_1800FDF84 @ 0x1800FDF84 (sub_1800FDF84.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE270 @ 0x1800FE270 (sub_1800FE270.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 *     sub_1800FE5F4 @ 0x1800FE5F4 (sub_1800FE5F4.c)
 *     sub_1800FE694 @ 0x1800FE694 (sub_1800FE694.c)
 *     sub_1800FE73C @ 0x1800FE73C (sub_1800FE73C.c)
 *     sub_1800FE7E4 @ 0x1800FE7E4 (sub_1800FE7E4.c)
 *     sub_1800FE88C @ 0x1800FE88C (sub_1800FE88C.c)
 *     sub_1800FE934 @ 0x1800FE934 (sub_1800FE934.c)
 *     sub_1800FF4A0 @ 0x1800FF4A0 (sub_1800FF4A0.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 *     sub_180103534 @ 0x180103534 (sub_180103534.c)
 *     sub_180103BA4 @ 0x180103BA4 (sub_180103BA4.c)
 *     sub_180104494 @ 0x180104494 (sub_180104494.c)
 *     sub_180104618 @ 0x180104618 (sub_180104618.c)
 *     sub_180105C90 @ 0x180105C90 (sub_180105C90.c)
 *     MD4Final @ 0x180105DC0 (MD4Final.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 *     sub_1801093D4 @ 0x1801093D4 (sub_1801093D4.c)
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 *     sub_180109F60 @ 0x180109F60 (sub_180109F60.c)
 *     sub_18010A158 @ 0x18010A158 (sub_18010A158.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 *     sub_18010B4DC @ 0x18010B4DC (sub_18010B4DC.c)
 *     sub_18010BAC8 @ 0x18010BAC8 (sub_18010BAC8.c)
 *     sub_18010BD7C @ 0x18010BD7C (sub_18010BD7C.c)
 *     sub_18010C2E8 @ 0x18010C2E8 (sub_18010C2E8.c)
 *     sub_18010DAA8 @ 0x18010DAA8 (sub_18010DAA8.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
