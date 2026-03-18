/*
 * XREFs of ExTimedWaitForUnblockPushLock @ 0x1400A1DC0
 * Callers:
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 *     ExWaitForUnblockPushLock @ 0x1402B9680 (ExWaitForUnblockPushLock.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExTimedWaitForUnblockPushLock(__int64 a1, volatile signed __int32 *a2, LARGE_INTEGER *Timeout)
{
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // r8

  *(_WORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_BYTE *)a2 + 2) = 6;
  *((_QWORD *)a2 + 2) = a2 + 2;
  *((_QWORD *)a2 + 1) = a2 + 2;
  if ( MEMORY[0xFFFFF7800000036A] > 1u && (v5 = ExpSpinCount) != 0 )
  {
    while ( (a2[13] & 2) != 0 )
    {
      _mm_pause();
      if ( !--v5 )
        goto LABEL_5;
    }
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( _interlockedbittestandreset(a2 + 13, 1u) )
    {
      v6 = KeWaitForSingleObject((PVOID)a2, WrPushLock, 0, 0, Timeout);
      if ( v6 )
      {
        LOBYTE(v7) = 1;
        ExpUnblockPushLock(a1, a2, v7);
      }
    }
    else
    {
      return 0;
    }
    return v6;
  }
}
