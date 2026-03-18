/*
 * XREFs of ExpReleaseFannedOutPushLockExclusive @ 0x14015A6FC
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 */

char __fastcall ExpReleaseFannedOutPushLockExclusive(unsigned __int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  volatile signed __int64 *v10; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v4 = 0LL;
  if ( MaximumProcessorCount )
  {
    v5 = MaximumProcessorCount;
    v6 = ((unsigned int)a1 >> 13) & 0x3FFFF;
    do
    {
      _BitScanReverse(&v7, v6);
      v8 = v7 - 2;
      v9 = v6 ^ (1 << v7);
      v10 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + ExSaPageArrays) + 8 * v8) + 8 * v9 + 8)
                                      + 8 * ((a1 >> 4) & 0x1FF));
      LOBYTE(MaximumProcessorCount) = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6;
      if ( (_BYTE)MaximumProcessorCount == 2 )
        LOBYTE(MaximumProcessorCount) = ExfTryToWakePushLock(v10, v8, v9, v3);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  return MaximumProcessorCount;
}
