/*
 * XREFs of ViDeadlockMergeNodes @ 0x140829D54
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x1408297D8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140829858 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x14082A6A4 (ViDeadlockUpdateChildrenCount.c)
 */

__int64 __fastcall ViDeadlockMergeNodes(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // r11
  _QWORD *v11; // rcx
  __int64 v12; // r10
  _QWORD *v13; // r11
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 64);
  v5 = (_QWORD *)a2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 64) = v3;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72) & 1 | *(_DWORD *)(a1 + 72) & 0xFFFFFFFE;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  while ( v7 != v6 )
  {
    v8 = (_QWORD *)*v7;
    v9 = v7 - 3;
    v10 = v7;
    v7 = v8;
    if ( (_QWORD *)v8[1] != v10 || (v11 = (_QWORD *)v10[1], (_QWORD *)*v11 != v10) )
      __fastfail(3u);
    *v11 = v8;
    v8[1] = v11;
    ViDeadlockUpdateChildrenCount(v5, (unsigned int)~*((_DWORD *)v9 + 19));
    *v9 = v12;
    v14 = *(_QWORD **)(v12 + 16);
    if ( *v14 != v12 + 8 )
      __fastfail(3u);
    v13[1] = v14;
    *v13 = v12 + 8;
    *v14 = v13;
    *(_QWORD *)(v12 + 16) = v13;
    ViDeadlockUpdateChildrenCount(v12, (unsigned int)(*((_DWORD *)v9 + 19) + 1));
  }
  if ( *v5 )
  {
    v15 = v5[3];
    if ( *(_QWORD **)(v15 + 8) != v5 + 3 || (v16 = (_QWORD *)v5[4], (_QWORD *)*v16 != v5 + 3) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    ViDeadlockUpdateChildrenCount(*v5, 0xFFFFFFFFLL);
  }
  --*(_WORD *)(v5[7] + 4LL);
  v17 = v5[5];
  if ( *(_QWORD **)(v17 + 8) != v5 + 5 || (v18 = (_QWORD *)v5[6], (_QWORD *)*v18 != v5 + 5) )
    __fastfail(3u);
  result = *a3;
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  *a3 = (__int64)v5;
  *v5 = result;
  return result;
}
