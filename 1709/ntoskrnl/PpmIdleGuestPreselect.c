/*
 * XREFs of PpmIdleGuestPreselect @ 0x14013B1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestPreselect(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 *StatisticsPage; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdi
  unsigned int HvTargetState; // r9d
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    StatisticsPage = CurrentPrcb->StatisticsPage;
    v4 = StatisticsPage[(unsigned int)xmmword_1403A1E00];
    v5 = v4 - StatisticsPage[DWORD1(xmmword_1403A1E00)];
  }
  HvTargetState = *(_DWORD *)(a2 + 32);
  if ( HvTargetState != -1 )
  {
    if ( HvTargetState < 2 )
    {
LABEL_11:
      CurrentPrcb->PowerState.HvIdleCheck.Time = v4;
      CurrentPrcb->PowerState.HvIdleCheck.Idle = v5;
      goto LABEL_6;
    }
LABEL_16:
    HvTargetState = 1;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a2 + 42) && CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
    goto LABEL_16;
  v7 = v4 - CurrentPrcb->PowerState.HvIdleCheck.Time;
  HvTargetState = CurrentPrcb->PowerState.HvTargetState;
  if ( v7 >= *(unsigned int *)(a2 + 36) )
  {
    v9 = v5 - CurrentPrcb->PowerState.HvIdleCheck.Idle;
    if ( v9 < (unsigned int)(v7 * *(unsigned __int8 *)(a2 + 41) / 0x64) && CurrentPrcb->PowerState.HvTargetState )
    {
      --HvTargetState;
    }
    else if ( v9 >= (unsigned int)(v7 * *(unsigned __int8 *)(a2 + 40) / 0x64) && HvTargetState + 1 < 2 )
    {
      ++HvTargetState;
    }
    goto LABEL_11;
  }
LABEL_6:
  result = HvTargetState;
  CurrentPrcb->PowerState.HvTargetState = HvTargetState;
  return result;
}
