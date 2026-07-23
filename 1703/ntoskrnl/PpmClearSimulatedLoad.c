/*
 * XREFs of PpmClearSimulatedLoad @ 0x14022D354
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(_PROCESSOR_NUMBER *a1)
{
  unsigned int v1; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  char v3; // cl
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // dl
  _PROC_PERF_LOAD *Load; // rdi
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( a1->Reserved )
    return (unsigned int)-1073741811;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v3 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F;
    Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6;
    Affinity.Mask = 1LL << v3;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    Load = CurrentPrcb->PowerState.Load;
    CurrentPrcb->PowerState.Load = 0LL;
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( Load )
      ExFreePoolWithTag(Load, 0x704D5050u);
  }
  return v1;
}
