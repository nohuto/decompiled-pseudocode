/*
 * XREFs of sub_180022E4C @ 0x180022E4C
 * Callers:
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall sub_180022E4C(__int64 a1, _BYTE *a2)
{
  int v4; // ecx
  int v5; // eax
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 64);
    if ( v4 && (result = NtCurrentTeb(), v4 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 62);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 608));
      v5 = *(_DWORD *)(a1 + 20);
      *a2 = -1;
      if ( (v5 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 392));
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 136));
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 256));
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 64) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 62) = 1;
    }
  }
  return result;
}
