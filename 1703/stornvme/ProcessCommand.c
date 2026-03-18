/*
 * XREFs of ProcessCommand @ 0x1C000F8C8
 * Callers:
 *     NVMeHwStartIo @ 0x1C00023F0 (NVMeHwStartIo.c)
 *     IoQueuesCreation @ 0x1C0003C34 (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003EAC (IoQueuesDeletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C00080D0 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00081F0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0009650 (NVMeSplitIoCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000B5E0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000C960 (ProtocolCommandCompletion.c)
 *     NVMeControllerIdentify @ 0x1C000D674 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000D7E0 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000DC18 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000DED0 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E054 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E15C (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000E2C0 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000E45C (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000E5A0 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000E67C (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000E74C (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000E980 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000EC38 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000ECD0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F224 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000F4D8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000F5C0 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00026E0 (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x1C000FA2C (ProcessCommandInSpecificQueue.c)
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
  unsigned int v12; // edx

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
    v7 = *(_QWORD *)(a1 + 544) + 136LL * (v5 - 1);
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
        v12 = ((unsigned int)*(unsigned __int16 *)(v7 + 40) + 1) % *(unsigned __int16 *)(a1 + 232);
        if ( !(_WORD)v12 )
          LOWORD(v12) = 1;
        *(_WORD *)(v4 + 4236) = v12;
        v7 = *(_QWORD *)(a1 + 544) + 136LL * ((unsigned __int16)v12 - 1);
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
