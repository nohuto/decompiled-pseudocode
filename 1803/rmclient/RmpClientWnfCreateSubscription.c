/*
 * XREFs of RmpClientWnfCreateSubscription @ 0x180004BEC
 * Callers:
 *     HamIpcChannelAllocateState @ 0x180004BC4 (HamIpcChannelAllocateState.c)
 *     HampConnectionCreate @ 0x180004D74 (HampConnectionCreate.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000EA28 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall RmpClientWnfCreateSubscription(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  unsigned int v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
    v9 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x48uLL);
      v10 = TpAllocWork(&v13, RmpClientWnfMessageQueueWorker, v9, 0LL);
      if ( v10 >= 0 )
      {
        v15 = 0;
        v10 = NtQueryWnfStateData(a1, 0LL, 0LL, &v12, 0LL, &v15);
        if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
        {
          v10 = RtlSubscribeWnfStateChangeNotification(
                  &v14,
                  *a1,
                  v12,
                  RmpClientWnfSubscriptionWorker,
                  v9,
                  0LL,
                  0,
                  0,
                  v12);
          if ( v10 >= 0 )
          {
            v9[6] = *a1;
            RtlInitializeSRWLock(v9 + 4);
            v9[3] = v9 + 2;
            v9[2] = v9 + 2;
            *((_DWORD *)v9 + 16) &= ~1u;
            v9[5] = a2;
            v9[1] = a3;
            *v9 = v14;
            v14 = 0LL;
            v9[7] = v13;
            v13 = 0LL;
            *a4 = v9;
            v9 = 0LL;
            v10 = 0;
          }
        }
      }
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
    else
    {
      v10 = -1073741801;
    }
    if ( v13 )
      TpReleaseWork();
    if ( v14 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v10;
}
