/*
 * XREFs of Callback @ 0x1800D8F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x18009C7F0 (ZwGetCompleteWnfStateSubscription.c)
 *     sub_1800D8AD0 @ 0x1800D8AD0 (sub_1800D8AD0.c)
 */

void __fastcall Callback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // ebp
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Ptr; // rdi
  unsigned __int64 v6; // r14
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rax
  _RTL_SRWLOCK *v9; // rbx
  int v10; // eax

  if ( qword_18015D058 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015D058 + 8));
    v4 = (_RTL_SRWLOCK *)qword_18015D058;
    *(_QWORD *)(qword_18015D058 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Ptr = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015D058 + 8));
      v7 = (_RTL_SRWLOCK *)qword_18015D058;
      v8 = qword_18015D058 + 16;
      v9 = *(_RTL_SRWLOCK **)(qword_18015D058 + 16);
      while ( v9 != (_RTL_SRWLOCK *)v8 )
      {
        RtlAcquireSRWLockExclusive(v9 + 3);
        if ( LODWORD(v9[12].Ptr) == 2 && (PVOID)v6 >= v9[13].Ptr )
        {
          Ptr = (_WNF_STATE_NAME *)v9[11].Ptr;
          v9[11].Ptr = 0LL;
          LODWORD(v9[12].Ptr) = 0;
          RtlReleaseSRWLockExclusive(v9 + 3);
          v7 = (_RTL_SRWLOCK *)qword_18015D058;
          break;
        }
        RtlReleaseSRWLockExclusive(v9 + 3);
        v7 = (_RTL_SRWLOCK *)qword_18015D058;
        v9 = (_RTL_SRWLOCK *)v9->Ptr;
        v8 = qword_18015D058 + 16;
      }
      RtlReleaseSRWLockShared(v7 + 1);
      if ( !Ptr )
        break;
      sub_1800D8AD0();
      v3 = 0;
      v10 = sub_18004A0A0(Ptr, 1);
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
      sub_1800D8AD0();
  }
}
