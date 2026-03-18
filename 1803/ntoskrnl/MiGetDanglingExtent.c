/*
 * XREFs of MiGetDanglingExtent @ 0x14025DAF4
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_1403CEF20, &LockHandle);
  do
  {
    v4 = qword_1403CB3E8;
    if ( !qword_1403CB3E8 )
      break;
    v5 = *(_QWORD *)qword_1403CB3E8;
    v6 = qword_1403CB3E8;
    qword_1403CB3E8 = *(_QWORD *)qword_1403CB3E8;
    if ( v2 )
      v6 = v3;
    ++v2;
    v3 = v6;
  }
  while ( v5 == v4 - 48 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v2 )
    return -1LL;
  v8 = v3 - 48 * v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = v8 + 48; i <= v3; i += 48LL )
  {
    MiLockPageAtDpcInline(i);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v8 + 0x58000000030LL) / 48;
}
