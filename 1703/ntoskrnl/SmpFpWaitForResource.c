/*
 * XREFs of SmpFpWaitForResource @ 0x14024EB6C
 * Callers:
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

__int64 __fastcall SmpFpWaitForResource(PEX_SPIN_LOCK SpinLock, int a2, struct _KTHREAD *a3)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // esi
  struct _KTHREAD *i; // rax
  KIRQL v8; // al
  _QWORD *v9; // rdx
  KIRQL v10; // r14
  __int64 v11; // rdi

  v3 = a2;
  CurrentThread = a3;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
  }
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
  *((_DWORD *)v9 + 2) |= 1u;
  ++*((_BYTE *)SpinLock + v3 + 80);
  ++*((_BYTE *)SpinLock + 86);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v10);
  if ( v6 )
    _InterlockedExchange64((volatile __int64 *)SpinLock + 13, v11);
  return v11;
}
