/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x140152634
 * Callers:
 *     ExInitializeFastResource @ 0x1401525C0 (ExInitializeFastResource.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall ExpAddResourceToSystemResourceList(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v3 = (_QWORD *)qword_140343048;
  v4 = v2;
  if ( *(__int64 **)qword_140343048 != &ExpSystemResourcesList )
    __fastfail(3u);
  a1[1] = qword_140343048;
  *a1 = &ExpSystemResourcesList;
  *v3 = a1;
  qword_140343048 = (__int64)a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  result = v4;
  __writecr8(v4);
  return result;
}
