/*
 * XREFs of xxxCalcMenuBar @ 0x1C000E548
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C000E440 (NtUserCalcMenuBar.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 208);
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 || !v5 )
    return 0LL;
  *(_DWORD *)(v5 + 56) |= 0x200u;
  v10 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v10;
  v11 = v5;
  ++*(_DWORD *)(v5 + 8);
  xxxMenuBarCompute((struct tagMENU *)v5, a5[2] - *a5 - a2 - a3);
  v7 = v11;
  v8 = *(_DWORD *)(v5 + 76);
  *(_DWORD *)(v11 + 56) &= ~0x200u;
  ThreadUnlock1(v7, v9);
  return v8;
}
