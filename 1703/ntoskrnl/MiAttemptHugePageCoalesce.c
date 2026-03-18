/*
 * XREFs of MiAttemptHugePageCoalesce @ 0x1400B58B0
 * Callers:
 *     MiLargePageFreeToZero @ 0x1400B3450 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400B7220 (MiPageToChannel.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 */

__int64 __fastcall MiAttemptHugePageCoalesce(unsigned __int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // r12
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rbx
  unsigned int i; // edi
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+60h] [rbp-58h]
  __int64 v38; // [rsp+68h] [rbp-50h]
  unsigned int v40; // [rsp+C8h] [rbp+10h]
  unsigned int v41; // [rsp+D0h] [rbp+18h]
  int v42; // [rsp+D8h] [rbp+20h] BYREF

  if ( (KeFeatureBits & 0x2000000000LL) == 0 )
    return 0LL;
  v2 = 48 * a1 - 0x58000000000LL;
  v3 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
  if ( *(_BYTE *)(v3 + 4549) == 1 )
    return 0LL;
  v41 = MiPageToNode(a1, 1LL);
  v40 = *(_BYTE *)(v2 + 34) & 7;
  v31 = *(_QWORD *)(v3 + 48) + 2184LL * v41;
  v4 = MiFreeZeroPageSizeIndex(48 * a1 - 0x58000000000LL);
  v34 = v4;
  v6 = MiLargePageSizes[v4];
  v7 = 8LL * (v4 - 1);
  v37 = v6;
  v36 = v7;
  v38 = *(__int64 *)((char *)MiLargePageSizes + v7);
  v8 = a1 & ~(v38 - 1);
  v33 = v8;
  v9 = v8 + v38;
  v10 = v8 + v38;
  v11 = 48 * v8 - 0x58000000000LL;
  v12 = v11 + 48 * v38;
  v32 = v11;
  v13 = v12;
  if ( v12 == v11 )
  {
LABEL_18:
    v26 = v13 + 24;
    v27 = *(__int64 *)((char *)&MiLargePageContainingFrames + v7) & 0xFFFFFFFFFLL;
    while ( 1 )
    {
      v13 -= 48LL;
      v26 -= 48LL;
      if ( ((v37 - 1) & --v9) != 0 )
      {
        v42 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v42);
            while ( *(__int64 *)v26 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0x3FuLL) );
          v8 = v33;
        }
      }
      *(_QWORD *)(v26 + 16) = v27 | *(_QWORD *)(v26 + 16) & 0xFFFFFFF000000000uLL;
      if ( v9 == v8 )
        break;
      if ( v13 != v2 )
        _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiInsertLargePageInNodeListHelper(v8, v38, v40);
    i = 1;
    if ( v13 != v2 )
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return i;
  }
  v14 = 48 * v6;
  v35 = v5;
  v15 = 48 * v8 - 0x58000000000LL;
  while ( 1 )
  {
    v12 -= v14;
    v10 -= v6;
    if ( v12 != v2 )
      break;
LABEL_16:
    if ( v12 == v15 )
    {
      v8 = v33;
      v7 = v36;
      goto LABEL_18;
    }
  }
  if ( !MiIsPfnInline(v10) || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    goto LABEL_25;
  if ( (*(_BYTE *)(v12 + 34) & 7) != (_DWORD)v17
    || (v18 & *(_QWORD *)(v12 + 40)) != v19
    || *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL)) != v3 )
  {
    goto LABEL_24;
  }
  if ( v41 == (unsigned int)MiPageToNode(v10, 1LL) )
  {
    v20 = *(_QWORD **)(v12 + 8);
    if ( (__int64)v20 < 0 )
    {
      v21 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v20 != v12 )
        __fastfail(3u);
      *v20 = v21;
      *(_QWORD *)(v21 + 8) = v20;
      *(_QWORD *)(v12 + 8) = 0LL;
      --*(_QWORD *)(v31 + 8 * (2 * v34 + v35));
      v22 = (unsigned int)MiPageToChannel(v10);
      v25 = v24 + 2 * ((a1 < 0x100000) + v23);
      --*(_QWORD *)(v31 + 8 * (v22 + 4 * v25) + 816);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 1984), -v6);
      v14 = 48 * v6;
      v15 = v32;
      goto LABEL_16;
    }
  }
  v17 = v40;
  v16 = 48 * v6;
LABEL_24:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_25:
  v28 = v16 + v12;
  for ( i = 0; v28 != v13; v28 += v16 )
  {
    v10 += v6;
    if ( v28 != v2 )
    {
      MiInsertLargePageInNodeListHelper(v10, v6, v17);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 = 48 * v6;
    }
    v17 = v40;
  }
  return i;
}
