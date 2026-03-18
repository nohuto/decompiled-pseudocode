/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x1402B3110
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCompressPendingBuffers @ 0x1402B34F8 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402B3E9C (EtwpRelinquishCompressionTarget.c)
 */

char __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *(_DWORD *)(a1 + 1184);
  if ( v1 )
  {
    EtwpCompressPendingBuffers();
    ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1160), v3, v4, v5);
    LOBYTE(v1) = KeAbPostRelease(a1 + 1160);
  }
  return v1;
}
