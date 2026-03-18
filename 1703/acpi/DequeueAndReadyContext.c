/*
 * XREFs of DequeueAndReadyContext @ 0x1C0025E08
 * Callers:
 *     WriteCookAccess @ 0x1C0025BD0 (WriteCookAccess.c)
 *     SignalASLEvent @ 0x1C005F430 (SignalASLEvent.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 */

struct _SLIST_ENTRY *__fastcall DequeueAndReadyContext(struct _SLIST_ENTRY **a1)
{
  struct _SLIST_ENTRY *v2; // rdi
  KIRQL v3; // dl
  struct _SLIST_ENTRY *v4; // rax
  _SLIST_ENTRY *Next; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  byte_1C00775A0 = v3;
  v4 = *a1;
  if ( *a1 != (struct _SLIST_ENTRY *)a1 )
  {
    Next = v4->Next;
    if ( *((struct _SLIST_ENTRY ***)&v4->Next + 1) != a1 || *(&Next->Next + 1) != v4 )
      __fastfail(3u);
    *a1 = Next;
    v2 = v4 - 2;
    *((_QWORD *)&Next->Next + 1) = a1;
    *((_QWORD *)&v4->Next + 1) = v4;
    v4->Next = v4;
    InsertReadyQueue(v4 - 2, 1);
    v3 = byte_1C00775A0;
  }
  KeReleaseSpinLock(&SpinLock, v3);
  return v2;
}
