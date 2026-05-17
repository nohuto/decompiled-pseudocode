/*
 * XREFs of RtlpHpHeapLock @ 0x180048BF8
 * Callers:
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v5; // ecx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    if ( v5 && (result = NtCurrentTeb(), v5 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 62);
    }
    else
    {
      RtlAcquireSRWLockExclusive(a1 + 552, a2, a3, a4);
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(a1 + 360, v6, v7, v8);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(a1 + 136, v9, v10, v11);
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive(a1 + 240, v12, v13, v14);
            if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive(a1 + 72, v15, v16, v17);
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
