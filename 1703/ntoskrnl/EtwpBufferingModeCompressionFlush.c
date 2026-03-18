/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x14025741C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x14025780C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402581A4 (EtwpRelinquishCompressionTarget.c)
 */

__int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1016);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    ExAcquirePushLockExclusiveEx(a1 + 992, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 992));
    return KeAbPostRelease(a1 + 992);
  }
  return result;
}
