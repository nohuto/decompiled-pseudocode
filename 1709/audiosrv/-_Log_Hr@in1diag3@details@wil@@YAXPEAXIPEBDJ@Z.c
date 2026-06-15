/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002EC50 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Do_call @ 0x1800358E0 (std--_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std--allocator_int__void_--_Do_call.c)
 *     _lambda_e9af1581bd6c783f369e35704f6cd4a0_::operator() @ 0x18003630C (_lambda_e9af1581bd6c783f369e35704f6cd4a0_--operator().c)
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180036448 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@UEAAXXZ @ 0x18006D540 (-ProviderFinalRelease@CVolumeStrip@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x18009FD28 (-NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800B7AFC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     DisableSpatialOnInternalSpeakers @ 0x1800BA840 (DisableSpatialOnInternalSpeakers.c)
 *     IsInternalFormFactorOf @ 0x1800BAD10 (IsInternalFormFactorOf.c)
 *     std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call @ 0x1800BB410 (std--_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std--allocator_int__void_--_Do_call.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C1D70 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C2768 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x1800C6360 (-OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C64C0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C67E0 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 *     ?SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z @ 0x1800C7184 (-SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x1800C71DC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18005E564 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, a2, a3, 0LL, 0LL, retaddr, 2, (_DWORD)a4);
}
