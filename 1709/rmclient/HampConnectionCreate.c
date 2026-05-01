/*
 * XREFs of HampConnectionCreate @ 0x180003FA0
 * Callers:
 *     HamConnectToServer @ 0x180003F30 (HamConnectToServer.c)
 *     HamConnectForExtendedExecution @ 0x180004660 (HamConnectForExtendedExecution.c)
 *     HamConnectForStateChangeNotifications @ 0x1800063D0 (HamConnectForStateChangeNotifications.c)
 * Callees:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 *     HampConnectionAllocateState @ 0x180004060 (HampConnectionAllocateState.c)
 *     HampConnectionInitialize @ 0x1800042F0 (HampConnectionInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x180004400 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HampConnectionCreate(__int64 a1, __int64 a2, __int64 *a3)
{
  PVOID Heap; // rax
  __int64 v7; // rbx
  int State; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v7 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  HampConnectionInitialize(a1, a2, Heap);
  State = HampConnectionAllocateState(v7, a2);
  if ( State < 0 )
    goto LABEL_8;
  if ( *(_DWORD *)(v7 + 112) != 2 )
    goto LABEL_4;
  State = RmpClientWnfCreateSubscription(v7 + 8, HampConnectionDeliverStateChangePayload, v7, v7 + 16);
  if ( State >= 0 )
    State = 0;
  if ( State < 0 )
  {
LABEL_8:
    HampConnectionDestroy(v7);
    return (unsigned int)State;
  }
  else
  {
LABEL_4:
    *a3 = v7;
    return 0LL;
  }
}
