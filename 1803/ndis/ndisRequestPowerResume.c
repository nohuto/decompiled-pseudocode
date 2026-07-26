/*
 * XREFs of ndisRequestPowerResume @ 0x1C0071150
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C006FB80 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00704CC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisMoveLinkedList @ 0x1C0070B74 (ndisMoveLinkedList.c)
 *     ndisReplayRecvNbls @ 0x1C0071014 (ndisReplayRecvNbls.c)
 */

void __fastcall ndisRequestPowerResume(_QWORD *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // si
  struct _NET_BUFFER_LIST *v6; // r14
  struct _NET_BUFFER_LIST *v7; // rbp
  struct _NET_BUFFER_LIST *Alignment; // rax
  _QWORD *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1[560];
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  v4 = *(_DWORD *)(v1 + 504);
  v5 = v3;
  if ( (v4 & 0x30) == 0x10 )
  {
    if ( (v4 & 0x400) != 0 )
    {
      KeSetEvent((PRKEVENT)(v1 + 248), 0, 0);
      v6 = *(struct _NET_BUFFER_LIST **)(v1 + 544);
      *(_QWORD *)(v1 + 544) = 0LL;
      *(_QWORD *)(v1 + 552) = v1 + 544;
      v7 = *(struct _NET_BUFFER_LIST **)(v1 + 560);
      *(_QWORD *)(v1 + 560) = 0LL;
      *(_QWORD *)(v1 + 568) = v1 + 560;
      ndisMoveLinkedList(v9, v1 + 584);
      KeReleaseSpinLock((PKSPIN_LOCK)v1, v5);
      if ( v6 )
      {
        Alignment = v6;
        do
        {
          Alignment->Status = -1073676271;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        ndisMSendNetBufferListsCompleteInternal((__int64)a1, v6, 0, 0);
      }
      if ( v7 )
        ndisReplayRecvNbls(a1, v7);
      ndisCancelDequeuedDirectOidRequests((__int64)a1, v9);
    }
    else
    {
      *(_DWORD *)(v1 + 504) = v4 | 0x20;
      KeReleaseSpinLock((PKSPIN_LOCK)v1, v3);
      ndisRequestDevicePowerD0((__int64)a1, 8u);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v1, v3);
  }
}
