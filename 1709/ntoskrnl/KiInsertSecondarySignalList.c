/*
 * XREFs of KiInsertSecondarySignalList @ 0x1402071A8
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x140206DF0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KiAcquireSecondarySignalListLock @ 0x140206EC8 (KiAcquireSecondarySignalListLock.c)
 */

__int64 __fastcall KiInsertSecondarySignalList(_QWORD **a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 != a1 )
  {
    KiAcquireSecondarySignalListLock(&v5);
    v2 = qword_14036ABA8;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_14036ABA8 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    if ( (_QWORD **)(*a1)[1] != a1 || (_QWORD **)*a1[1] != a1 )
      __fastfail(3u);
    *(_QWORD *)qword_14036ABA8 = a1;
    qword_14036ABA8 = (__int64)a1[1];
    *a1[1] = &KiSecondarySignalList;
    v3 = KiSecondarySignalDpcRunning == 0;
    a1[1] = (_QWORD *)v2;
    if ( v3 )
    {
      KiSecondarySignalDpcRunning = 1;
      KiInsertQueueDpc((ULONG_PTR)&KiSecondarySignalDpc, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock(&KiSecondarySignalListLock);
    result = v5;
    __writecr8(v5);
  }
  return result;
}
