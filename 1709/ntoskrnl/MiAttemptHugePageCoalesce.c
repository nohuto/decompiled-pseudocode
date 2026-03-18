/*
 * XREFs of MiAttemptHugePageCoalesce @ 0x1400C59B0
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiLargePageFreeToZero @ 0x14010FA20 (MiLargePageFreeToZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 */

__int64 __fastcall MiAttemptHugePageCoalesce(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned int v4; // eax
  int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 result; // rax
  unsigned __int64 v36; // r9
  __int64 v37; // [rsp+20h] [rbp-98h]
  int v38; // [rsp+28h] [rbp-90h] BYREF
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  __int64 v42; // [rsp+48h] [rbp-70h]
  __int64 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  unsigned int v47; // [rsp+C8h] [rbp+10h]
  unsigned int v48; // [rsp+D0h] [rbp+18h]
  unsigned int v49; // [rsp+D8h] [rbp+20h]

  if ( (KeFeatureBits & 0x2000000000LL) == 0 )
    return 0LL;
  v2 = 48 * a1 - 0x58000000000LL;
  v3 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
  if ( *(_BYTE *)(v3 + 4677) == 1 )
    return 0LL;
  v4 = MiPageToNode(a1, 1LL);
  v5 = *(_BYTE *)(v2 + 34) & 7;
  v48 = v4;
  v39 = *(_QWORD *)(v3 + 16) + 8256LL * v4;
  v47 = v5;
  v6 = MiFreeZeroPageSizeIndex(48 * a1 - 0x58000000000LL);
  v40 = v6;
  v49 = v6;
  v7 = MiLargePageContainingFrames[v6];
  v8 = MiLargePageSizes[v6];
  v9 = v6 - 1;
  v44 = v7;
  v10 = MiLargePageSizes[v9];
  v37 = v8;
  v45 = v9 * 8;
  v46 = v10;
  v11 = a1 & ~(v10 - 1);
  v42 = v11;
  v12 = v11 + v10;
  v13 = v11 + v10;
  v14 = 48 * v11 - 0x58000000000LL;
  v15 = v14 + 48 * v10;
  v43 = v14;
  v16 = v15;
  if ( v15 == v14 )
  {
LABEL_20:
    v32 = v8 - 1;
    v33 = v16 + 24;
    v34 = *(__int64 *)((char *)MiLargePageContainingFrames + v45) & 0xFFFFFFFFFLL;
    while ( 1 )
    {
      v16 -= 48LL;
      v33 -= 48LL;
      if ( (v32 & --v12) != 0 )
      {
        v38 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v38);
            while ( *(__int64 *)v33 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0x3FuLL) );
          v11 = v42;
        }
      }
      *(_QWORD *)(v33 + 16) = v34 | *(_QWORD *)(v33 + 16) & 0xFFFFFFF000000000uLL;
      if ( v12 == v11 )
        break;
      if ( v16 != v2 )
        _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiInsertLargePageInNodeListHelper(v11, v46, v47, 7LL);
    result = 1LL;
    if ( v16 != v2 )
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  v17 = 48 * v8;
  v41 = 48 * v8;
  while ( 1 )
  {
    v18 = v15;
    v13 -= v8;
    v15 -= v17;
    if ( v15 != v2 )
      break;
LABEL_18:
    if ( v15 == v14 )
    {
      v11 = v42;
      goto LABEL_20;
    }
  }
  if ( !(unsigned int)MiIsPfnInline(v13) || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    goto LABEL_28;
  if ( (*(_BYTE *)(v15 + 34) & 7) != (_DWORD)v19
    || (v20 & *(_QWORD *)(v15 + 40)) != v22
    || *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v15 + 40) >> 40) & 0x3FFLL)) != v3 )
  {
    goto LABEL_27;
  }
  if ( v48 == (unsigned int)MiPageToNode(v13, 1LL) )
  {
    v23 = *(_QWORD **)(v15 + 8);
    if ( (__int64)v23 < 0 )
    {
      v24 = *(_QWORD *)v15;
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v23 != v15 )
        __fastfail(3u);
      *v23 = v24;
      *(_QWORD *)(v24 + 8) = v23;
      v25 = v39;
      v26 = v40;
      *(_QWORD *)(v15 + 8) = 0LL;
      --*(_QWORD *)(v25 + 8 * (v47 + 2 * v26));
      v27 = MiPageToChannel(v13);
      v29 = v27;
      if ( v49 > 1 )
      {
        v36 = 16 * (v27 + 4 * (v47 + 2 * v28))
            + (((unsigned __int64)(unsigned int)dword_140388540 >> 4) & (unsigned int)(v13 >> 4));
        v30 = v39;
        --*(_QWORD *)(v39 + 8 * v36 + 5040);
      }
      else
      {
        v30 = v39;
      }
      v31 = v28 + 2 * v40;
      v8 = v37;
      --*(_QWORD *)(v30 + 8 * (v29 + 4 * (v47 + 2 * v31)) + 48);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 2112), -v37);
      v17 = v41;
      v14 = v43;
      goto LABEL_18;
    }
  }
  v19 = v47;
  v21 = v37;
LABEL_27:
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_28:
  while ( v18 != v16 )
  {
    v13 += v21;
    if ( v18 != v2 )
    {
      MiInsertLargePageInNodeListHelper(v13, v21, v19, 7LL);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v37;
    }
    v19 = v47;
    v18 += v41;
  }
  return 0LL;
}
