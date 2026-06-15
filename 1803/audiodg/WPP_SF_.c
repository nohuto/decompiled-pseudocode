/*
 * XREFs of WPP_SF_ @ 0x140034B74
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003420 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140008010 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000E090 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14000F2DC (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000F300 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000F8F0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140012D50 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B14 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014BA0 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140016FD0 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140017630 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400185C8 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140018648 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140019140 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140034170 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     AudioDGShutdownADG @ 0x140034A40 (AudioDGShutdownADG.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003D250 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003DE30 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140040130 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140045164 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x1400452C8 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140045388 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x1400454E8 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140051B90 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x140052030 (-PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x1400543B0 (-ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F468 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}
