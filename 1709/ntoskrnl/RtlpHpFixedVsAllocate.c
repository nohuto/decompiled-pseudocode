/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x14025C300
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400C25F0 (RtlFindClearBitsAndSetEx.c)
 *     RtlFindLongestRunClearEx @ 0x1402529D0 (RtlFindLongestRunClearEx.c)
 */

__int64 __fastcall RtlpHpFixedVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  unsigned __int64 v4; // rbx
  int v7; // r14d
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v9; // rdi
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v7 = a4 & 1;
  if ( (a4 & 1) == 0 )
    ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v4 >> 12, 0LL);
  v11 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
  {
    if ( a3 )
      *a3 = (unsigned int)RtlFindLongestRunClearEx((unsigned __int64 *)(a1 + 48), &v11) << 12;
    v9 = 0LL;
  }
  else
  {
    v9 = a1 + (ClearBitsAndSet << 12);
    if ( a3 )
      *a3 = 0;
  }
  if ( !v7 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
    KeAbPostRelease(a1 + 24);
  }
  return v9;
}
