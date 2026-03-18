/*
 * XREFs of MiStartingOffsetNeedLock @ 0x1400CDC90
 * Callers:
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 */

unsigned __int64 __fastcall MiStartingOffsetNeedLock(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KIRQL v5; // bp
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  result = MiStartingOffset(a1, a1[1], a2);
  v7 = result;
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v5);
    return v7;
  }
  return result;
}
