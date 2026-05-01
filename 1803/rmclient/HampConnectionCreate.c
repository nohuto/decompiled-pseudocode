/*
 * XREFs of HampConnectionCreate @ 0x180004D74
 * Callers:
 *     HamConnectToServer @ 0x180004F10 (HamConnectToServer.c)
 *     HamConnectForDebugging @ 0x18000C840 (HamConnectForDebugging.c)
 *     HamConnectForExtendedExecution @ 0x18000C8C0 (HamConnectForExtendedExecution.c)
 *     HamConnectForServicing @ 0x18000C940 (HamConnectForServicing.c)
 *     HamConnectForSessionState @ 0x18000C9A0 (HamConnectForSessionState.c)
 *     HamConnectForStateChangeNotifications @ 0x18000CA00 (HamConnectForStateChangeNotifications.c)
 * Callees:
 *     HampConnectionAllocateState @ 0x180003FE4 (HampConnectionAllocateState.c)
 *     RmpClientWnfCreateSubscription @ 0x180004BEC (RmpClientWnfCreateSubscription.c)
 *     HampConnectionInitialize @ 0x180004E1C (HampConnectionInitialize.c)
 *     HampConnectionDestroy @ 0x18000D468 (HampConnectionDestroy.c)
 */

__int64 __fastcall HampConnectionCreate(__int64 a1, void *a2, __int64 *a3)
{
  PVOID Heap; // rax
  __int64 v7; // rbx
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v7 = (__int64)Heap;
  if ( Heap )
  {
    HampConnectionInitialize(a1, a2, Heap);
    State = HampConnectionAllocateState(v7, a2);
    if ( State >= 0 )
    {
      if ( *(_DWORD *)(v7 + 112) != 5 )
        goto LABEL_4;
      State = RmpClientWnfCreateSubscription(
                (_QWORD *)(v7 + 8),
                (__int64)HampConnectionDeliverStateChangePayload,
                v7,
                (_QWORD *)(v7 + 16));
      if ( State >= 0 )
        State = 0;
      if ( State >= 0 )
      {
LABEL_4:
        *a3 = v7;
        State = 0;
        v7 = 0LL;
      }
    }
    if ( v7 )
      HampConnectionDestroy(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
