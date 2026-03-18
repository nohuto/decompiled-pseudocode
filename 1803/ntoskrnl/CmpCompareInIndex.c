/*
 * XREFs of CmpCompareInIndex @ 0x1404A8E10
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x1404A8BE0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpAddToLeaf @ 0x140513600 (CmpAddToLeaf.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1404A9790 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpCompareInIndex(__int64 a1, unsigned __int16 *a2, int a3, __int16 *a4, _DWORD *a5)
{
  __int16 v5; // r10
  _DWORD *v7; // rdi
  bool v9; // zf
  __int16 *v10; // r14
  __int64 v11; // rbp
  _BYTE *v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edi
  __int64 v16; // r15
  WCHAR v17; // cx
  unsigned int v18; // esi
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 result; // rax
  int v25; // eax
  __int16 *v26; // rbx
  unsigned int v27; // eax

  v5 = *a4;
  v7 = a5;
  v9 = ((*a4 - 26220) & 0xFDFF) == 0;
  *a5 = -1;
  if ( !v9 )
  {
    v26 = &a4[2 * a3];
    v27 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v26 + 1));
    v23 = v27;
    if ( v27 != 2 )
    {
      if ( v27 )
        return v23;
      v25 = *((_DWORD *)v26 + 1);
      goto LABEL_31;
    }
    return 2LL;
  }
  v10 = &a4[4 * a3];
  if ( v5 != 26220 )
  {
LABEL_17:
    v22 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v10 + 1));
    v23 = v22;
    if ( v22 != 2 )
    {
      if ( v22 )
        return v23;
      v25 = *((_DWORD *)v10 + 1);
LABEL_31:
      *v7 = v25;
      return v23;
    }
    return 2LL;
  }
  v11 = 0LL;
  v12 = v10 + 4;
  v13 = 0;
  v14 = 4;
  while ( *v12 )
  {
    ++v13;
    ++v12;
    if ( v13 >= 4 )
      goto LABEL_6;
  }
  v14 = v13;
LABEL_6:
  v15 = *a2 >> 1;
  if ( v15 >= v14 )
    v15 = v14;
  if ( !v15 )
  {
LABEL_16:
    v7 = a5;
    goto LABEL_17;
  }
  v16 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    v17 = *(_WORD *)(v16 + 2 * v11);
    v18 = *((unsigned __int8 *)v10 + v11 + 8);
    if ( v17 >= 0x61u )
      v19 = v17 <= 0x7Au ? v17 - 32 : RtlUpcaseUnicodeChar(v17);
    else
      v19 = v17;
    if ( v18 >= 0x61 )
      v20 = v18 <= 0x7A ? v18 - 32 : RtlUpcaseUnicodeChar(v18);
    else
      v20 = v18;
    v21 = v19 - v20;
    if ( v21 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v15 )
      goto LABEL_16;
  }
  result = 1LL;
  if ( v21 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
