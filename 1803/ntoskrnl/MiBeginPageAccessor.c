/*
 * XREFs of MiBeginPageAccessor @ 0x1400E7730
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     MiGetSinglePageToZero @ 0x140266CF4 (MiGetSinglePageToZero.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  LONG *v4; // rdi
  bool v5; // zf
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_BYTE *)(a2 + 34) |= 8u;
  v4 = &dword_1403CBD18;
  *(_QWORD *)(a2 + 16) = a1;
  v5 = *(_BYTE *)(a1 + 71) == 0;
  LOBYTE(a2) = -1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v5 )
    v4 = &dword_1403CBD28;
  *(_WORD *)(a1 + 69) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, a2);
  else
    ExpAcquireSpinLockExclusive(v4, a2);
  LOBYTE(v6) = 0;
  if ( *(_BYTE *)(a1 + 71) )
  {
    v7 = (_QWORD *)qword_1403CBD20;
    if ( qword_1403CBD20 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v7[7] )
        {
          v13 = (_QWORD *)v7[1];
          if ( !v13 )
          {
            LOBYTE(v6) = 1;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)*v7;
          if ( !*v7 )
          {
            LOBYTE(v6) = 0;
            break;
          }
        }
        v7 = v13;
      }
    }
    v8 = &qword_1403CBD20;
    goto LABEL_9;
  }
  v7 = (_QWORD *)qword_1403CBD30;
  if ( !qword_1403CBD30 )
    goto LABEL_8;
  while ( a1 < (unsigned __int64)v7 )
  {
    v12 = (_QWORD *)*v7;
    if ( !*v7 )
    {
      LOBYTE(v6) = 0;
      goto LABEL_8;
    }
LABEL_20:
    v7 = v12;
  }
  v12 = (_QWORD *)v7[1];
  if ( v12 )
    goto LABEL_20;
  LOBYTE(v6) = 1;
LABEL_8:
  v8 = &qword_1403CBD30;
LABEL_9:
  RtlAvlInsertNodeEx(v8, v7, v6, a1);
  *(_BYTE *)(a1 + 68) = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v14 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v14;
      if ( !v14 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  return 1LL;
}
