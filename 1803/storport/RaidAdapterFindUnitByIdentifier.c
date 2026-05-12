/*
 * XREFs of RaidAdapterFindUnitByIdentifier @ 0x1C0026018
 * Callers:
 *     RaBuildSetBootLunBufferForMiniport @ 0x1C0038CC0 (RaBuildSetBootLunBufferForMiniport.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaidAdapterFindUnitByIdentifier(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *i; // rcx
  __int64 v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v6 = (_QWORD **)(a1 + 120);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v5 = i - 6;
    v8 = i[209] - *a2;
    if ( !v8 )
      v8 = v5[216] - a2[1];
    if ( !v8 )
      break;
  }
  if ( i != v6 )
    v4 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
