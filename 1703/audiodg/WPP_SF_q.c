/*
 * XREFs of WPP_SF_q @ 0x14003651C
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400031A8 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005080 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005240 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000A600 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000D800 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EC10 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140010AA0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140016430 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x1400189C0 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400193F4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x14003AED0 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003E600 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x140041000 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140045EC8 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140045F88 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x1400461AC (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14004630C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x1400520A0 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
