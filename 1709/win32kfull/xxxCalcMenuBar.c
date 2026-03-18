/*
 * XREFs of xxxCalcMenuBar @ 0x1C007CC3C
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C007CB30 (NtUserCalcMenuBar.c)
 * Callees:
 *     ThreadLockMenuNoModify @ 0x1C007CAD4 (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v7; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 208);
  if ( !v7 )
    return 0LL;
  ThreadLockMenuNoModify(*(_QWORD *)(a1 + 208), &v12);
  xxxMenuBarCompute((struct tagMENU *)v7, a5[2] - *a5 - a2 - a3);
  v9 = v13;
  v10 = *(_DWORD *)(v7 + 76);
  *(_DWORD *)(v13 + 56) &= ~0x200u;
  ThreadUnlock1(v9, v11);
  return v10;
}
