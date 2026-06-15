/*
 * XREFs of WPP_SF_ @ 0x140036454
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400030F8 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400031A8 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003AC0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140005FD0 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000A9F0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000D800 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000E900 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F250 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x1400106D0 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140010AA0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012AD0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x1400183C0 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x1400189C0 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400193F4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400195A0 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001AEE0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x14001C7F0 (-PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ.c)
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14002FDD0 (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035A80 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     AudioDGShutdownADG @ 0x1400363E0 (AudioDGShutdownADG.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003E600 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003F364 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140041830 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140041A30 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140045F88 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x1400460EC (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x1400461AC (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14004630C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x1400520A0 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x140054880 (-ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F068 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}
