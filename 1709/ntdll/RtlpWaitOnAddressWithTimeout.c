/*
 * XREFs of RtlpWaitOnAddressWithTimeout @ 0x18004AA1C
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004CFD0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWaitOnAddress @ 0x18006DA0C (RtlpWaitOnAddress.c)
 * Callees:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004CFD0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWithTimeout(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  int v7; // edx
  unsigned int v8; // esi

  v4 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v7 = 0;
    if ( a4 )
    {
      while ( (a2[10] & 1) != 0 )
      {
        _mm_pause();
        if ( ++v7 >= a4 )
          goto LABEL_3;
      }
      return 0LL;
    }
  }
LABEL_3:
  if ( !_interlockedbittestandreset(a2 + 10, 0) )
    return 0LL;
  v8 = NtWaitForAlertByThreadId(*(_QWORD *)a2, a3);
  if ( v8 == 258 )
  {
    if ( _InterlockedExchange(a2 + 10, 4) == 2 )
      v8 = NtWaitForAlertByThreadId(*(_QWORD *)a2, 0LL);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1, a2);
  }
  if ( v8 != 257 )
    return v8;
  return v4;
}
