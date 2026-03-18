/*
 * XREFs of IopDequeueIrpFromThread @ 0x140107260
 * Callers:
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[19];
  CurrentIrql = 0;
  if ( v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v1 + 1856);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = SchedulerAssist[5];
          SchedulerAssist[5] = v12 + 1;
          if ( v12 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 1856), 0LL) )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v1 + 1856), v11);
      }
    }
  }
  v6 = a1[4];
  result = a1 + 4;
  v8 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v6 + 8) != a1 + 4 || (_QWORD *)*v8 != result )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  a1[5] = a1 + 4;
  *result = result;
  if ( v1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v1 + 1856, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1856), 0LL);
    v9 = KeGetCurrentPrcb();
    v10 = v9->SchedulerAssist;
    if ( v10 )
    {
      if ( v9->NestingLevel <= 1u )
      {
        v13 = v10[5] - 1;
        v10[5] = v13;
        if ( !v13 && !*((_BYTE *)v10 + 25) && !*((_BYTE *)v10 + 27) )
          KiPerformUnboostKick(v9);
      }
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
