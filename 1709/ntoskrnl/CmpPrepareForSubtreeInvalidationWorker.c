/*
 * XREFs of CmpPrepareForSubtreeInvalidationWorker @ 0x14068FB60
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryAcquireKcbIXLocks @ 0x1405A6F34 (CmpTryAcquireKcbIXLocks.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidationWorker(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // ecx

  v3 = (_DWORD *)a2;
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    LOBYTE(a2) = 1;
    v6 = CmpTryAcquireKcbIXLocks(a1, a2, a3, v5);
    result = 0LL;
    if ( v6 == -1073741267 )
    {
      ++v3[2];
      v6 = 0;
    }
    if ( v6 < 0 )
    {
      *v3 = v6;
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
