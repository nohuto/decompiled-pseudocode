/*
 * XREFs of PpmSetSimulatedIdle @ 0x1402293C8
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PpmSetSimulatedIdle(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // dl
  _PPM_IDLE_STATES *IdleStates; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v4 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F;
  Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6;
  Affinity.Mask = 1LL << v4;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  v8 = 0;
  if ( IdleStates )
  {
    v9 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < IdleStates->ProcessorIdleCount )
    {
      IdleStates->IdleOverride = 1;
      IdleStates->OverrideIndex = v9;
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741637;
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v8;
}
