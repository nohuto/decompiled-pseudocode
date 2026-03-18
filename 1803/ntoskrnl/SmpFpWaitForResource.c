/*
 * XREFs of SmpFpWaitForResource @ 0x1402A80D8
 * Callers:
 *     SmFpAllocate @ 0x140096D84 (SmFpAllocate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall SmpFpWaitForResource(PEX_SPIN_LOCK SpinLock, int a2, struct _KTHREAD *a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *i; // rax
  KIRQL v8; // al
  _QWORD *v9; // rdx
  KIRQL v10; // bp
  __int64 v11; // rdi

  v3 = a2;
  CurrentThread = a3;
  if ( !a3 )
    CurrentThread = KeGetCurrentThread();
  for ( i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 13);
        CurrentThread != i
     && (*((_QWORD *)SpinLock + 13)
      || _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock + 13, (signed __int64)CurrentThread, 0LL));
        i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 13) )
  {
    KeWaitForSingleObject((PVOID)(SpinLock + 2), Executive, 0, 0, 0LL);
  }
  v8 = ExAcquireSpinLockExclusive(SpinLock);
  v9 = *(_QWORD **)&SpinLock[2 * v3 + 8];
  v10 = v8;
  while ( (v9[1] & 1) != 0 )
    v9 = (_QWORD *)*v9;
  v11 = v9[1];
  *((_DWORD *)v9 + 2) = v11 | 1;
  ++*((_BYTE *)SpinLock + v3 + 80);
  ++*((_BYTE *)SpinLock + 86);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v10);
  if ( !a3 )
    _InterlockedExchange64((volatile __int64 *)SpinLock + 13, v11);
  return v11;
}
