/*
 * XREFs of MiIssueSynchronousFlush @ 0x1400B8D58
 * Callers:
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

int __fastcall MiIssueSynchronousFlush(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3, char a4, __int64 a5, int *a6)
{
  int *v9; // r14
  int result; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF

  v12 = a3;
  LOWORD(Event.Header.Lock) = 0;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.Size = 6;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  KeResetEvent(&Event);
  v9 = a6;
  result = IoSynchronousPageWriteEx(a1, a2, &v12, (__int64)&Event, a4, a5, (__int64)a6);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, WrPageOut, 0, 0, 0LL);
  *v9 = result;
  return result;
}
