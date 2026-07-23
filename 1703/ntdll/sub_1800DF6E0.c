/*
 * XREFs of sub_1800DF6E0 @ 0x1800DF6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x1800A6FF0 (ZwGetCompleteWnfStateSubscription.c)
 *     sub_1800DF250 @ 0x1800DF250 (sub_1800DF250.c)
 */

void __fastcall sub_1800DF6E0(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // ebp
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Ptr; // rdi
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rax
  _RTL_SRWLOCK *v9; // rbx
  int v10; // eax

  if ( qword_18015C008 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015C008 + 8));
    v4 = (_RTL_SRWLOCK *)qword_18015C008;
    *(_QWORD *)(qword_18015C008 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Ptr = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015C008 + 8));
      v7 = (_RTL_SRWLOCK *)qword_18015C008;
      v8 = qword_18015C008 + 16;
      v9 = *(_RTL_SRWLOCK **)(qword_18015C008 + 16);
      while ( v9 != (_RTL_SRWLOCK *)v8 )
      {
        RtlAcquireSRWLockExclusive(v9 + 3);
        if ( LODWORD(v9[12].Ptr) == 2 && (PVOID)v6 >= v9[13].Ptr )
        {
          Ptr = (_WNF_STATE_NAME *)v9[11].Ptr;
          v9[11].Ptr = 0LL;
          LODWORD(v9[12].Ptr) = 0;
          RtlReleaseSRWLockExclusive(v9 + 3);
          v7 = (_RTL_SRWLOCK *)qword_18015C008;
          break;
        }
        RtlReleaseSRWLockExclusive(v9 + 3);
        v7 = (_RTL_SRWLOCK *)qword_18015C008;
        v9 = (_RTL_SRWLOCK *)v9->Ptr;
        v8 = qword_18015C008 + 16;
      }
      RtlReleaseSRWLockShared(v7 + 1);
      if ( !Ptr )
        break;
      sub_1800DF250();
      v3 = 0;
      v10 = sub_180013664(Ptr, 1);
      if ( v10 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v10 )
          ZwGetCompleteWnfStateSubscription(Ptr + 1, (ULONG64 *)Ptr, Ptr[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Ptr);
      }
    }
    if ( v3 )
      sub_1800DF250();
  }
}
