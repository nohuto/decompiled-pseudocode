/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x140694B14
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  char v3; // bl
  PRTL_BALANCED_NODE v4; // rax

  v1 = (volatile signed __int32 *)(a1 + 40);
  v3 = 1;
  v4 = KeAbPreAcquire(a1 + 40, 0LL, 1);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v1, (unsigned __int64)v4);
    return 0;
  }
  else
  {
    if ( v4 )
      BYTE2(v4[1].Left) |= 1u;
    *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  }
  return v3;
}
