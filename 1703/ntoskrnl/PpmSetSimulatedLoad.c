/*
 * XREFs of PpmSetSimulatedLoad @ 0x14022D688
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(__int64 a1)
{
  _PROC_PERF_LOAD *Load; // rdi
  unsigned int v3; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v5; // rbp
  _PROC_PERF_LOAD *PoolWithTag; // rax
  _PROC_PERF_LOAD *v7; // rsi
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Load = 0LL;
  if ( *(_BYTE *)(a1 + 3) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)a1);
    v5 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber == -1 || *(_BYTE *)(a1 + 4) > 0x64u )
    {
      v3 = -1073741811;
    }
    else
    {
      PoolWithTag = (_PROC_PERF_LOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x704D5050u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v8 = KiProcessorIndexToNumberMappingTable[v5];
      PoolWithTag->BusyPercentage = *(_BYTE *)(a1 + 4);
      PoolWithTag->FrequencyPercentage = *(_BYTE *)(a1 + 5);
      Affinity.Group = v8 >> 6;
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      Affinity.Mask = 1LL << (v8 & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      Load = CurrentPrcb->PowerState.Load;
      CurrentPrcb->PowerState.Load = v7;
      __writecr8(CurrentIrql);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v3 = 0;
    }
    if ( Load )
      ExFreePoolWithTag(Load, 0x704D5050u);
  }
  return v3;
}
