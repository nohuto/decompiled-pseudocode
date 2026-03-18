/*
 * XREFs of ExpTryAcquireFannedOutPushLockExclusive @ 0x1402B925C
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14015E8D0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 */

char __fastcall ExpTryAcquireFannedOutPushLockExclusive(unsigned __int64 a1)
{
  char v2; // bl
  ULONG MaximumProcessorCount; // r10d
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int v6; // esi
  unsigned int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  volatile signed __int64 *v13; // rcx

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v4) = 0;
  if ( !MaximumProcessorCount )
    return 1;
  v5 = 0LL;
  v6 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  while ( 1 )
  {
    _BitScanReverse(&v7, v6);
    v8 = (a1 >> 4) & 0x1FF;
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + ExSaPageArrays) + 8LL * (v7 - 2)) + 8LL * (v6 ^ (1 << v7)) + 8);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 8 * v8), 0LL) )
      break;
    LODWORD(v4) = v4 + 1;
    v5 += 8LL;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      return 1;
  }
  while ( (_DWORD)v4 )
  {
    _BitScanReverse(&v11, v6);
    v12 = v6 ^ (1 << v11);
    v4 = (unsigned int)(v4 - 1);
    v13 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v4) + 8LL * (v11 - 2))
                                                + 8 * v12
                                                + 8)
                                    + 8 * v8);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13, v9, v12, v5);
  }
  return v2;
}
