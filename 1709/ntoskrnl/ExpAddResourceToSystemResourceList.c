/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x140153A88
 * Callers:
 *     ExInitializeFastResource @ 0x140153A10 (ExInitializeFastResource.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall ExpAddResourceToSystemResourceList(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v3 = (_QWORD *)qword_14035B788;
  v4 = v2;
  if ( *(__int64 **)qword_14035B788 != &ExpSystemResourcesList )
    __fastfail(3u);
  a1[1] = qword_14035B788;
  *a1 = &ExpSystemResourcesList;
  *v3 = a1;
  qword_14035B788 = (__int64)a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  result = v4;
  __writecr8(v4);
  return result;
}
