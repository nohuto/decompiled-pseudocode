/*
 * XREFs of CmpAddToLeaf @ 0x1404D2940
 * Callers:
 *     CmpAddSubKeyToList @ 0x1404D2404 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1404D3234 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 *     CmpCompareInIndex @ 0x140501AE0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpAddToLeaf(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3, __int64 a4)
{
  unsigned int v5; // r15d
  __int64 v6; // rax
  _WORD *v7; // rbx
  int v8; // ecx
  int v9; // eax
  _WORD *v10; // rdi
  int v11; // ecx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rsi
  int v15; // eax
  int v16; // eax
  size_t v17; // r8
  _WORD *v18; // rdx
  _WORD *v19; // rcx
  int FastLeafHintForUnicodeString; // eax
  __int64 result; // rax
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-10h] BYREF

  v24[0] = 0xFFFFFFFFLL;
  v5 = BugCheckParameter3;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3) )
    return 0xFFFFFFFFLL;
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v5, v24);
  v7 = (_WORD *)v6;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v8 = -4 - *(_DWORD *)(v6 - 4);
  v9 = *(unsigned __int16 *)(v6 + 2);
  if ( *v7 == 26988 )
  {
    v10 = 0LL;
    v11 = v8 - 4 * v9;
    v12 = 4;
  }
  else
  {
    v10 = v7;
    v11 = v8 - 8 * v9;
    v12 = 8;
  }
  v13 = v5;
  if ( v11 - 4 < v12 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
    v23 = 0LL;
    v13 = HvReallocateCell(BugCheckParameter2, v5, (__int64)&v23, (__int64)v24);
    result = 0xFFFFFFFFLL;
    if ( v13 == -1 )
      return result;
    v7 = (_WORD *)v23;
    if ( v10 )
      v10 = (_WORD *)v23;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v7, a4, (unsigned int)&v22, (__int64)&v23);
  v14 = (unsigned int)v23;
  if ( (int)v23 >= 0 && v22 == -1 )
  {
    if ( (_DWORD)v23 == (unsigned __int16)v7[1] )
    {
LABEL_16:
      if ( v10 )
      {
        *(_DWORD *)&v10[4 * v14 + 2] = a3;
        if ( *v10 == 26732 )
          FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
        else
          FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
        *(_DWORD *)&v10[4 * v14 + 4] = FastLeafHintForUnicodeString;
      }
      else
      {
        *(_DWORD *)&v7[2 * v14 + 2] = a3;
      }
      ++v7[1];
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
      if ( v13 != v5 )
        HvFreeCell(BugCheckParameter2, v5);
      return v13;
    }
    v15 = CmpCompareInIndex(BugCheckParameter2, a4, (unsigned int)v23, v7, &v22);
    if ( v15 != 2 )
    {
      if ( v15 > 0 )
        v14 = (unsigned int)(v14 + 1);
      v16 = (unsigned __int16)v7[1];
      if ( (_DWORD)v14 != v16 )
      {
        if ( v10 )
        {
          v17 = 8LL * ((unsigned __int16)v10[1] - (unsigned int)v14);
          v18 = &v10[4 * v14 + 2];
          v19 = &v10[4 * (unsigned int)(v14 + 1) + 2];
        }
        else
        {
          v17 = 4LL * (unsigned int)(v16 - v14);
          v18 = &v7[2 * (unsigned int)v14 + 2];
          v19 = &v7[2 * (unsigned int)(v14 + 1) + 2];
        }
        memmove(v19, v18, v17);
      }
      goto LABEL_16;
    }
  }
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
  if ( v13 != v5 )
    HvFreeCell(BugCheckParameter2, v13);
  return 0xFFFFFFFFLL;
}
