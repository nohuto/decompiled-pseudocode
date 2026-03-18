/*
 * XREFs of TtmiCreateEventQueue @ 0x1407745A4
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140773EC4 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x140776590 (TtmiLogQueueCreated.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v7; // r9
  int inserted; // eax
  unsigned int v9; // ebx
  int v10; // edx
  char *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-78h]
  int v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+68h] [rbp-30h]
  __int128 v20; // [rsp+70h] [rbp-28h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = CurrentThread->gap0[10];
  v16 = 48;
  v17 = 0LL;
  v19 = 32;
  v18 = 0LL;
  v20 = 0LL;
  inserted = ObCreateObjectEx(0, TtmpQueueObjectType, (int)&v16, v7, v15, 176, 0, 0, &Object, 0LL);
  v9 = inserted;
  if ( inserted >= 0 )
  {
    v11 = (char *)Object;
    memset(Object, 0, 0xB0uLL);
    *((_QWORD *)v11 + 20) = v11 + 152;
    *((_QWORD *)v11 + 19) = v11 + 152;
    ExInitializeResourceLite((PERESOURCE)(v11 + 24));
    KeInitializeEvent((PRKEVENT)(v11 + 128), NotificationEvent, 0);
    v11[168] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v12 = Object;
    *((_QWORD *)Object + 2) = a1;
    v13 = *(_QWORD **)(a1 + 88);
    if ( *v13 != a1 + 80 )
      __fastfail(3u);
    *v12 = a1 + 80;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(a1 + 88) = v12;
    inserted = ObInsertObjectEx(v12, 0LL, 2031616LL, 0, 0, 0LL, &v22);
    v9 = inserted;
    if ( inserted >= 0 )
    {
      TtmiLogQueueCreated(v12);
      v9 = 0;
      *a3 = v22;
      *a2 = v12;
      return v9;
    }
    v10 = 605;
  }
  else
  {
    v10 = 572;
  }
  TtmiLogError("TtmiCreateEventQueue", v10, inserted, inserted);
  return v9;
}
