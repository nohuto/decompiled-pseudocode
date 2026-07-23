/*
 * XREFs of RtlpHpHeapLock @ 0x180048BF8
 * Callers:
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1)
{
  int v2; // ecx
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 64);
    if ( v2 && (result = NtCurrentTeb(), v2 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 62);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 552));
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 360));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 136));
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
            if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
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
