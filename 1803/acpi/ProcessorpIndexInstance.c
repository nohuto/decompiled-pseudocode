/*
 * XREFs of ProcessorpIndexInstance @ 0x1C008F040
 * Callers:
 *     ProcessorAddInstance @ 0x1C008E0EC (ProcessorAddInstance.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ProcessorpIndexInstance(int a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  PVOID PoolWithTag; // rax
  __int64 *v8; // rax
  int v9; // ecx
  int v10; // esi
  __int64 v11; // rdi
  _DWORD *i; // rbx
  _DWORD *v13; // rax
  _QWORD *v14; // rax

  v2 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v2);
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x28uLL);
    *(_WORD *)(v5 + 32) = v2;
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    v8 = (__int64 *)qword_1C0066568;
    if ( *(__int64 **)qword_1C0066568 != &ProcessorGroupListHead )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = qword_1C0066568;
    *(_QWORD *)v5 = &ProcessorGroupListHead;
    *v8 = v5;
    qword_1C0066568 = v5;
    *(_QWORD *)(ProcessorGroupByNumber + 8 * v2) = v5;
  }
  v9 = 1;
  if ( *(_DWORD *)(a2 + 20) != 1 )
    v9 = *(_DWORD *)(v5 + 36);
  if ( v9 == *(_DWORD *)(v5 + 36) )
  {
    if ( v9 == 3 )
      v10 = *(_DWORD *)(a2 + 16);
    else
      v10 = 0;
  }
  else
  {
    v10 = (a1 << 16) | 0xFFFF;
  }
  v11 = v5 + 16;
  for ( i = *(_DWORD **)(v5 + 16); i != (_DWORD *)v11; i = *(_DWORD **)i )
  {
    if ( i[4] == v10 )
      goto LABEL_22;
  }
  v13 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
  i = v13;
  if ( !v13 )
    return 3221225626LL;
  memset(v13, 0, 0x28uLL);
  i[4] = v10;
  i[8] = *(unsigned __int8 *)(a2 + 6);
  v14 = *(_QWORD **)(v11 + 8);
  if ( *v14 != v11 )
    __fastfail(3u);
  *(_QWORD *)i = v11;
  *((_QWORD *)i + 1) = v14;
  *v14 = i;
  *(_QWORD *)(v11 + 8) = i;
LABEL_22:
  *((_QWORD *)i + 3) |= 1LL << *(_BYTE *)(a2 + 6);
  return 0LL;
}
