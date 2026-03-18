/*
 * XREFs of TtmpDispatchGetTerminalEvent @ 0x1407108E0
 * Callers:
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiRetrieveEventFromQueue @ 0x140710EB4 (TtmiRetrieveEventFromQueue.c)
 */

__int64 __fastcall TtmpDispatchGetTerminalEvent(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // ebx
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  int EventFromQueue; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v3 = ObReferenceObjectByHandle(
         *(HANDLE *)(a1 + 8),
         0xF0000u,
         TtmpQueueObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v4 = v3;
  if ( v3 < 0 )
    TtmiLogError("TtmiReferenceQueueByHandle", 310, v3, v3);
  if ( v4 < 0 )
  {
    v5 = v4;
    v6 = v4;
    v7 = 388;
LABEL_5:
    TtmiLogError("TtmpDispatchGetTerminalEvent", v7, v6, v5);
    goto LABEL_9;
  }
  EventFromQueue = TtmiRetrieveEventFromQueue(Object, a2);
  v4 = EventFromQueue;
  if ( EventFromQueue < 0 )
  {
    v5 = EventFromQueue;
    v6 = EventFromQueue;
    v7 = 396;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_9:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v4;
}
