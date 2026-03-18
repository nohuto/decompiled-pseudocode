/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x1404CAC38
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x1404CAAE4 (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpRemoveFromDelayedClose @ 0x140599B64 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 i; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx

  v2 = *(_DWORD *)(a1 + 2808);
  LOBYTE(a2) = 1;
  v3 = *(_QWORD *)(a1 + 2800);
  result = CmpRunDownDelayDerefKCBEngine(0LL, a2);
LABEL_2:
  LOBYTE(v5) = 0;
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    v7 = v3 + 24 * i;
    result = *(_QWORD *)(v7 + 16);
    if ( result )
    {
      do
      {
        v8 = result - 8;
        if ( *(_DWORD *)(result - 8) )
        {
          v9 = (__int64 *)(v8 + 16);
        }
        else
        {
          CmpRemoveFromDelayedClose(result - 8, v5);
          LOBYTE(v10) = 1;
          CmpCleanUpKcbCacheWithLock(v8, v10);
          if ( (*(_DWORD *)(v8 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v8);
          LOBYTE(v5) = 1;
          v9 = (__int64 *)(v7 + 16);
        }
        result = *v9;
      }
      while ( result );
      if ( (_BYTE)v5 )
        goto LABEL_2;
    }
  }
  return result;
}
