/*
 * XREFs of MiGet64KPage @ 0x1402240A0
 * Callers:
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiGetFreeZeroLargePage @ 0x140128E70 (MiGetFreeZeroLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 */

__int64 __fastcall MiGet64KPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  int v13; // r15d
  __int64 v14; // r12
  unsigned int v15; // r13d
  __int64 v16; // rsi
  int v17; // r8d
  bool v18; // zf
  unsigned __int64 v19; // rbp
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  int v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  unsigned __int64 v25; // [rsp+48h] [rbp-90h]
  unsigned __int64 v26; // [rsp+50h] [rbp-88h]
  __int64 v27; // [rsp+60h] [rbp-78h]
  unsigned __int64 v28; // [rsp+68h] [rbp-70h]
  unsigned __int64 v29; // [rsp+80h] [rbp-58h] BYREF
  char v30; // [rsp+92h] [rbp-46h]
  int v32; // [rsp+F8h] [rbp+20h]

  v5 = 3;
  while ( 1 )
  {
    result = MiGetFreeZeroLargePage(a1, --v5, 66, a2, 4u);
    v23 = result;
    v7 = result;
    if ( result )
      break;
    if ( !v5 )
      return result;
  }
  v8 = MiLargePageSizes[v5];
  if ( v8 != 16 )
  {
    v9 = (unsigned int)(v5 + 1);
    v22 = v5 + 1;
    do
    {
      v10 = MiLargePageSizes[v9];
      v11 = 0LL;
      v26 = 0LL;
      v32 = *(_BYTE *)(v7 + 34) & 7;
      v24 = (unsigned int)v9;
      v28 = v8 / v10;
      v12 = (v7 + 0x58000000000LL) / 48;
      v25 = v12;
      if ( v8 / v10 )
      {
        v13 = *(_BYTE *)(v7 + 34) & 7;
        v14 = 48 * v10;
        v27 = v8 / v10 - 1;
        do
        {
          v15 = 1;
          v16 = v7 + 48;
          if ( v10 > 1 )
          {
            do
            {
              MiLockPageAtDpcInline(v16);
              *(_QWORD *)(v16 + 40) ^= (*(_QWORD *)(v16 + 40) ^ MiLargePageContainingFrames[v24]) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v15;
              v16 += 48LL;
            }
            while ( v15 < v10 );
            v7 = v23;
            v12 = v25;
            v11 = v26;
            v14 = 48 * v10;
            v13 = v32;
          }
          MiLockPageAtDpcInline(v7);
          *(_QWORD *)(v7 + 40) ^= (*(_QWORD *)(v7 + 40) ^ MiLargePageContainingFrames[v24]) & 0xFFFFFFFFFLL;
          if ( v11 != v27 )
          {
            *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v7 + 34) ^= (*(_BYTE *)(v7 + 34) ^ v13) & 7;
            MiInsertLargePageInNodeListHelper(v12, v10, v13, 0);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v12 += v10;
          v7 += v14;
          ++v11;
          v25 = v12;
          v23 = v7;
          v26 = v11;
        }
        while ( v11 < v28 );
        LODWORD(v9) = v22;
      }
      v9 = (unsigned int)(v9 + 1);
      v7 += -48LL * v10;
      v22 = v9;
      v23 = v7;
      v8 = v10;
    }
    while ( v10 != 16 );
  }
  v17 = MiProtectionToCacheAttribute(a3);
  v29 = 0LL;
  v18 = (*(_BYTE *)(v7 + 34) & 7) == 0;
  v30 = v30 & 0x3F | 0x40;
  if ( !v18 )
    MiSetOriginalPtePfnFromFreeList(&v29);
  if ( v17 != 1 || MiPfnZeroingNeeded() )
    MiZeroAndConvertLargePage(v7, v8);
  v19 = ((__int64)((unsigned __int128)((v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
      + 1
      + ((unsigned __int64)((unsigned __int128)((v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
  v20 = (_QWORD *)(v7 + 40);
  do
  {
    MiLockPageAtDpcInline((__int64)(v20 - 5));
    *(v20 - 5) = 0LL;
    *v20 &= 0xFFFFFFF000000000uLL;
    *(v20 - 3) = 0LL;
    v21 = 0xFFFFFFFFFLL;
    if ( v8 != 1 )
      v21 = v19;
    MiSetPfnBlink((__int64)(v20 - 5), v21, 1);
    *((_BYTE *)v20 - 6) = *((_BYTE *)v20 - 6) & 0xF8 | 5;
    _InterlockedAnd64(v20 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    ++v19;
    v20 += 6;
    --v8;
  }
  while ( v8 );
  return v7;
}
