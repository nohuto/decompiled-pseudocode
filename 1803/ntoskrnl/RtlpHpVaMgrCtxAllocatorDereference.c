/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x14029679C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140295E0C (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx
  KIRQL v4; // bp
  __int64 result; // rax

  v3 = a1 + 48LL * *a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 96));
  if ( (*(_WORD *)(v3 + 154))-- == 1 )
  {
    memset((void *)(v3 + 112), 0, 0x30uLL);
    *(_QWORD *)(v3 + 120) = 0LL;
    *(_QWORD *)(v3 + 128) = 0LL;
    --*(_DWORD *)(a1 + 104);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 96));
  result = v4;
  __writecr8(v4);
  return result;
}
