/*
 * XREFs of sub_18001F91C @ 0x18001F91C
 * Callers:
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall sub_18001F91C(__int64 a1)
{
  int v2; // edx
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 40);
    if ( v2 && (result = NtCurrentTeb(), v2 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 38);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 336));
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 176));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 40) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 38) = 1;
    }
  }
  return result;
}
