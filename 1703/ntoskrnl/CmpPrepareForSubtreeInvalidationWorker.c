/*
 * XREFs of CmpPrepareForSubtreeInvalidationWorker @ 0x1406660D0
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryAcquireKcbIXLocks @ 0x140585FC8 (CmpTryAcquireKcbIXLocks.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidationWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // ecx

  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
    v5 = CmpTryAcquireKcbIXLocks(a1, a2, a3, *(_QWORD *)(a2 + 16));
    result = 0LL;
    if ( v5 == -1073741267 )
    {
      ++*(_DWORD *)(a2 + 8);
      v5 = 0;
    }
    if ( v5 < 0 )
    {
      *(_DWORD *)a2 = v5;
      return 1LL;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 4);
    return 0LL;
  }
  return result;
}
