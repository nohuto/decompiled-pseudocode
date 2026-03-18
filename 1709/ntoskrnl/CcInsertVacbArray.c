/*
 * XREFs of CcInsertVacbArray @ 0x14014801C
 * Callers:
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x140147F2C (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcInsertVacbArray(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  bool v5; // cc
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *result; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // r9

  if ( (unsigned int)CcVacbArraysAllocated > 0x500 )
    KeBugCheckEx(0x34u, 0x198uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = (_QWORD *)CcVacbArrays;
  v4 = 0LL;
  while ( *v3 )
  {
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    if ( (unsigned int)v4 >= 0x500 )
      goto LABEL_6;
  }
  v5 = (unsigned int)v4 <= CcVacbArraysHighestUsedIndex;
  *(_QWORD *)(CcVacbArrays + 8 * v4) = a2;
  *a2 = v4;
  if ( !v5 )
    CcVacbArraysHighestUsedIndex = v4;
LABEL_6:
  if ( (_DWORD)v4 == 1280 )
    KeBugCheckEx(0x34u, 0x1B5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = 0LL;
  do
  {
    v7 = 5 * v6;
    if ( *(_QWORD *)&a2[10 * v6 + 4] )
    {
      result = &a2[2 * v7 + 8];
      v10 = *(_QWORD **)(a1 + 848);
      if ( *v10 != a1 + 840 )
        __fastfail(3u);
      *result = a1 + 840;
      result[1] = v10;
      *v10 = result;
      *(_QWORD *)(a1 + 848) = result;
      ++*(_DWORD *)(a1 + 856);
    }
    else
    {
      result = &a2[2 * v7 + 8];
      v9 = (_QWORD *)qword_140387418;
      if ( *(__int64 **)qword_140387418 != &CcVacbFreeList )
        __fastfail(3u);
      *result = &CcVacbFreeList;
      result[1] = v9;
      *v9 = result;
      ++CcNumberOfFreeVacbs;
      qword_140387418 = (__int64)result;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 0xCCC );
  return result;
}
