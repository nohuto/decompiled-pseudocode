/*
 * XREFs of RmpClientWnfCreateSubscription @ 0x180004400
 * Callers:
 *     HampConnectionCreate @ 0x180003FA0 (HampConnectionCreate.c)
 *     HampConnectionAllocateState @ 0x180004060 (HampConnectionAllocateState.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800067A0 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     HamIpcChannelAllocateState @ 0x180007200 (HamIpcChannelAllocateState.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

__int64 __fastcall RmpClientWnfCreateSubscription(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  unsigned int v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  if ( !a2 )
    return 3221225712LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
  v9 = Heap;
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_15;
  }
  memset_0(Heap, 0, 0x48uLL);
  v10 = TpAllocWork(&v13, RmpClientWnfMessageQueueWorker, v9, 0LL);
  if ( v10 < 0
    || (v15 = 0, v10 = NtQueryWnfStateData(a1, 0LL, 0LL, &v12, 0LL, &v15), (int)(v10 + 0x80000000) >= 0)
    && v10 != -1073741789
    || (v10 = RtlSubscribeWnfStateChangeNotification(v14, *a1, v12, RmpClientWnfSubscriptionWorker, v9, 0LL, 0, 0, v12),
        v10 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
LABEL_15:
    if ( v13 )
      TpReleaseWork(v13);
    goto LABEL_7;
  }
  v9[6] = *a1;
  RtlInitializeSRWLock(v9 + 4);
  v10 = 0;
  v9[3] = v9 + 2;
  v9[2] = v9 + 2;
  *((_DWORD *)v9 + 16) &= ~1u;
  v9[5] = a2;
  v9[1] = a3;
  *v9 = v14[0];
  v14[0] = 0LL;
  v9[7] = v13;
  v13 = 0LL;
  *a4 = v9;
LABEL_7:
  if ( v14[0] )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v14[0]);
  return (unsigned int)v10;
}
