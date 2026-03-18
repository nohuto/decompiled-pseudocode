/*
 * XREFs of ExpWnfDeleteStateData @ 0x1404FDB28
 * Callers:
 *     ExpWnfDeleteNameInstance @ 0x1404FEC5C (ExpWnfDeleteNameInstance.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteStateData(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  void *v5; // rdi

  v1 = (unsigned __int64 *)(a1 + 80);
  v3 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int16 *)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( (unsigned __int64)v5 >= 2 )
    ExFreePoolWithTag(v5, 0x20666E57u);
}
