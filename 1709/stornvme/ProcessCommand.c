/*
 * XREFs of ProcessCommand @ 0x1C0010058
 * Callers:
 *     NVMeHwStartIo @ 0x1C0002690 (NVMeHwStartIo.c)
 *     IoQueuesCreation @ 0x1C0003EDC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C000414C (IoQueuesDeletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0008610 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008730 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0009CB0 (NVMeSplitIoCommandCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000BB70 (QueryTemperatureThresholdCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000BD50 (QueryTemperatureInfoHealthLogCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000D0D0 (ProtocolCommandCompletion.c)
 *     NVMeControllerIdentify @ 0x1C000DDE8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DF54 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E398 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000E658 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E7DC (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E8E4 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EA50 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000EBEC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000ED30 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000EE0C (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000EEDC (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F110 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000F3C8 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F460 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F7EC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F9C4 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FAA0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000FC78 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000FD60 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000FE48 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C001238C (NVMeSyncHostTime.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C0002980 (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x1C00101B4 (ProcessCommandInSpecificQueue.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r15
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // eax
  int v10; // r14d
  unsigned int v11; // r12d
  unsigned __int16 v12; // ax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_WORD *)(v4 + 4236);
  if ( v5 )
  {
    v6 = *(_WORD *)(a1 + 230);
    v7 = 136LL * v5 + *(_QWORD *)(a1 + 544) - 136LL;
  }
  else
  {
    v6 = *(_WORD *)(a1 + 228);
    v7 = a1 + 240;
  }
  result = ProcessCommandInSpecificQueue(a1, a2, v7, v6);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v7 + 40)
      && (v9 = *(unsigned __int16 *)(a1 + 232), v10 = 0, *(_BYTE *)(v4 + 4245) |= 0x10u, (v11 = v9) != 0) )
    {
      while ( 1 )
      {
        v12 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v7 + 40) + 1) % *(unsigned __int16 *)(a1 + 232) )
          v12 = ((unsigned int)*(unsigned __int16 *)(v7 + 40) + 1) % *(unsigned __int16 *)(a1 + 232);
        *(_WORD *)(v4 + 4236) = v12;
        v7 = 136LL * v12 + *(_QWORD *)(a1 + 544) - 136LL;
        result = ProcessCommandInSpecificQueue(a1, a2, v7, v6);
        if ( (_BYTE)result )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v10 < v11 )
          continue;
        return NVMeRequestComplete(a1, a2);
      }
    }
    else
    {
      return NVMeRequestComplete(a1, a2);
    }
  }
  return result;
}
