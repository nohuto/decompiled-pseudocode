/*
 * XREFs of KseSetCompletionHook @ 0x1402082E0
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolAllocateNonPaged @ 0x14015396C (KsepPoolAllocateNonPaged.c)
 */

__int64 __fastcall KseSetCompletionHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *NonPaged; // rax
  _QWORD *v9; // r10
  __int64 result; // rax
  __int64 v11; // rcx

  NonPaged = KsepPoolAllocateNonPaged(0x30uLL);
  v9 = NonPaged;
  if ( !NonPaged )
    return 3221225626LL;
  v11 = *(_QWORD *)(a2 + 184);
  *NonPaged = a1;
  NonPaged[1] = a3;
  NonPaged[2] = a4;
  NonPaged[3] = *(_QWORD *)(v11 + 56);
  NonPaged[4] = *(_QWORD *)(v11 + 64);
  *((_DWORD *)NonPaged + 10) = *(unsigned __int8 *)(v11 + 3);
  *(_QWORD *)(v11 + 56) = &KsepCompletionSafeWrapper;
  result = 0LL;
  *(_QWORD *)(v11 + 64) = v9;
  *(_BYTE *)(v11 + 3) = -32;
  return result;
}
