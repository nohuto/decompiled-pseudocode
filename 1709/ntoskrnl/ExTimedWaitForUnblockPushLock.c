/*
 * XREFs of ExTimedWaitForUnblockPushLock @ 0x1400BD7E0
 * Callers:
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     ExWaitForUnblockPushLock @ 0x140284FC0 (ExWaitForUnblockPushLock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 */

__int64 __fastcall ExTimedWaitForUnblockPushLock(
        volatile __int64 *a1,
        volatile signed __int32 *a2,
        LARGE_INTEGER *Timeout)
{
  unsigned int v3; // edi
  int v6; // eax

  *(_WORD *)a2 = 0;
  *((_BYTE *)a2 + 2) = 6;
  v3 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_QWORD *)a2 + 2) = a2 + 2;
  *((_QWORD *)a2 + 1) = a2 + 2;
  if ( MEMORY[0xFFFFF7800000036A] > 1u && (v6 = ExpSpinCount) != 0 )
  {
    while ( (a2[13] & 2) != 0 )
    {
      _mm_pause();
      if ( !--v6 )
        goto LABEL_5;
    }
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( _interlockedbittestandreset(a2 + 13, 1u) )
    {
      v3 = KeWaitForSingleObject((PVOID)a2, WrPushLock, 0, 0, Timeout);
      if ( v3 )
        ExpUnblockPushLock(a1, (void *)a2, 1);
    }
    return v3;
  }
}
