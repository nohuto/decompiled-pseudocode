/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140280E6C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x140281264 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x140281C04 (EtwpRelinquishCompressionTarget.c)
 */

char __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 2328);
  if ( v1 )
  {
    EtwpCompressPendingBuffers();
    ExAcquirePushLockExclusiveEx(a1 + 2304, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2304), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2304));
    LOBYTE(v1) = KeAbPostRelease(a1 + 2304);
  }
  return v1;
}
