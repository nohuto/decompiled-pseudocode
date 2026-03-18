/*
 * XREFs of ProcessCommand @ 0x1C001052C
 * Callers:
 *     NVMeHwStartIo @ 0x1C00025F0 (NVMeHwStartIo.c)
 *     IoQueuesCreation @ 0x1C0003F00 (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0004170 (IoQueuesDeletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0008970 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008A90 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C000A090 (NVMeSplitIoCommandCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000BF50 (QueryTemperatureThresholdCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000C150 (QueryTemperatureInfoHealthLogCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000D590 (ProtocolCommandCompletion.c)
 *     NVMeControllerIdentify @ 0x1C000E2A8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000E414 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E864 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000EB30 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000ECB4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000EDB8 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EF30 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000F0D8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000F228 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000F304 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000F3D4 (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F620 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000F8D8 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F970 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000FEBC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0010158 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0010240 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0010328 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C00128EC (NVMeSyncHostTime.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00028FC (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x1C0010688 (ProcessCommandInSpecificQueue.c)
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
  v5 = *(_WORD *)(v4 + 4244);
  if ( v5 )
  {
    v6 = *(_WORD *)(a1 + 238);
    v7 = 136LL * v5 + *(_QWORD *)(a1 + 552) - 136LL;
  }
  else
  {
    v6 = *(_WORD *)(a1 + 236);
    v7 = a1 + 248;
  }
  result = ProcessCommandInSpecificQueue(a1, a2, v7, v6);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v7 + 40)
      && (v9 = *(unsigned __int16 *)(a1 + 240), v10 = 0, *(_BYTE *)(v4 + 4253) |= 0x10u, (v11 = v9) != 0) )
    {
      while ( 1 )
      {
        v12 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v7 + 40) + 1) % *(unsigned __int16 *)(a1 + 240) )
          v12 = ((unsigned int)*(unsigned __int16 *)(v7 + 40) + 1) % *(unsigned __int16 *)(a1 + 240);
        *(_WORD *)(v4 + 4244) = v12;
        v7 = 136LL * v12 + *(_QWORD *)(a1 + 552) - 136LL;
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
