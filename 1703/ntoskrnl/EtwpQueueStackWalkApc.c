/*
 * XREFs of EtwpQueueStackWalkApc @ 0x140256B58
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkDpc @ 0x140256EF0 (EtwpStackWalkDpc.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     KeTryToInsertQueueApc @ 0x140201740 (KeTryToInsertQueueApc.c)
 */

char __fastcall EtwpQueueStackWalkApc(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v5; // r15
  void *EtwSupport; // rdi
  PSLIST_ENTRY CurrentThread; // rax
  unsigned int v10; // esi
  _SLIST_ENTRY *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rdx
  char inserted; // al
  _SLIST_ENTRY *Next; // rcx

  v5 = a3;
  EtwSupport = KeGetCurrentPrcb()->EtwSupport;
  CurrentThread = (PSLIST_ENTRY)KeGetCurrentThread();
  if ( (PSLIST_ENTRY)a1 == CurrentThread )
  {
    LODWORD(CurrentThread) = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 616LL)
                           + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) >> 3) & 1);
    if ( !(_DWORD)CurrentThread && !*(_BYTE *)(a1 + 644) )
    {
      v10 = (HIWORD(a3) & 7) + 24;
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), v10) )
      {
        if ( (*(_DWORD *)(a1 + 116) & 0x4000) == 0
          || (CurrentThread = RtlpInterlockedPopEntrySList((PSLIST_HEADER)EtwSupport + 6), (v11 = CurrentThread) == 0LL) )
        {
LABEL_14:
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), v10);
          return (char)CurrentThread;
        }
        KeInitializeApc((__int64)CurrentThread, a1, 0, (__int64)EtwpStackWalkApc, 0LL, (__int64)EtwpStackWalkApc, 0, v5);
        v12 = a4[1];
        v13 = *a4;
        if ( a2 <= 2u )
          inserted = KeInsertQueueApc((__int64)v11, v13, v12, 0);
        else
          inserted = KeTryToInsertQueueApc((__int64)v11, v13, v12);
        if ( !inserted )
        {
          LOBYTE(CurrentThread) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)EtwSupport + 6, v11);
          if ( a2 > 2u )
          {
            CurrentThread = (PSLIST_ENTRY)KeGetCurrentPrcb();
            Next = CurrentThread[1549].Next;
            if ( !_interlockedbittestandset((volatile signed __int32 *)&Next[1], 1u) )
            {
              HIDWORD(Next[1].Next) = v5;
              *((_QWORD *)&Next[1].Next + 1) = a1;
              LOBYTE(CurrentThread) = KeInsertQueueDpc((PRKDPC)&Next[2], (PVOID)*a4, (PVOID)a4[1]);
            }
          }
          goto LABEL_14;
        }
        _InterlockedIncrement((volatile signed __int32 *)EtwSupport + 364);
        LODWORD(CurrentThread) = *((_DWORD *)EtwSupport + 364);
        if ( (int)CurrentThread > *((_DWORD *)EtwSupport + 365) )
          *((_DWORD *)EtwSupport + 365) = (_DWORD)CurrentThread;
      }
    }
  }
  return (char)CurrentThread;
}
