/*
 * XREFs of MxCreateFreePfns @ 0x14082A9F8
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x14082A224 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x14082A878 (MiCreateFreePfns.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiRestrictRangeToNode @ 0x1401378C4 (MiRestrictRangeToNode.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiInitializeBlankPfns @ 0x14082AE10 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x14086C238 (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rcx
  BOOL v5; // r12d
  __int64 v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // r11
  __int16 v9; // ax
  _QWORD *v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  int v14; // r9d
  int v15; // r10d
  unsigned int v16; // r8d
  unsigned int i; // r15d
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r13
  unsigned int v23; // edi
  __int16 v24; // bp
  unsigned __int8 CurrentIrql; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // eax
  int v29; // r10d
  _QWORD *v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+38h] [rbp-70h]
  unsigned __int64 v32; // [rsp+40h] [rbp-68h]
  unsigned int v33; // [rsp+50h] [rbp-58h]
  int v34; // [rsp+B0h] [rbp+8h]
  int v35; // [rsp+B8h] [rbp+10h]
  int v36; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v3 = *(_DWORD *)(a1 + 16);
  v37 = v3;
  if ( v3 == 2 || (v4 = 1LL, v3 == 24) )
    v4 = 0LL;
  v31 = v4;
  v5 = v3 != 24;
  v34 = v5;
  v6 = 48 * v1 - 0x58000000000LL;
  v30 = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    v8 = 0x3FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      if ( v4 )
      {
        v9 = *(_WORD *)(v6 + 32);
        if ( v9 == 1 )
        {
          v10 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
          v11 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          *v10 = 0LL;
          if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          v12 = *(_QWORD *)(v11 + 24) ^ v8 & (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) - 1LL));
          *(_QWORD *)(v11 + 24) = v12;
          if ( (v8 & v12) == 1 )
            MiFreeEmptyBootPageTable(v11);
          v4 = v31;
          *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v6 + 32) = 0;
        }
        else if ( v9 )
        {
          goto LABEL_23;
        }
      }
      if ( (v1 & 0x1FF) != 0 || v4 || v2 < 0x200 || (v32 = MiRestrictRangeToNode(v1, v2), v13 = v32, v32 < 0x200) )
      {
        *(_QWORD *)v6 = v7;
        v7 = (_QWORD *)v6;
        v30 = (_QWORD *)v6;
LABEL_23:
        ++v1;
        v6 += 48LL;
        --v2;
        goto LABEL_39;
      }
      v35 = MiPageToNode(v1, 0LL);
      v14 = MiPageToChannel(v1);
      v36 = v14;
      v16 = ((KeFeatureBits >> 37) & 1) == 0;
      v33 = v16;
      for ( i = v16; i <= 1; ++i )
      {
        v18 = MiLargePageSizes[i];
        if ( v1 != (v1 & ~(v18 - 1)) || v13 < v18 )
          continue;
        if ( i == v16 )
        {
          v21 = v13;
          v20 = v13;
        }
        else
        {
          v19 = MiLargePageSizes[i - 1];
          v20 = v19 - (v1 & (v19 - 1));
          if ( v20 > v13 )
            v20 = v13;
          v21 = v20;
        }
        v22 = v20 - v21 % v18;
        if ( v22 )
        {
          do
          {
            MiInitializeBlankPfns(v6, i, v15, v14, v34);
            v23 = (unsigned __int8)MiLockPageInline(v6);
            MiInsertLargePageInNodeListHelper(v1, v18, v34, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v23);
            v2 -= v18;
            v6 += 48 * v18;
            v13 = v32 - v18;
            v15 = v35;
            v1 += v18;
            v14 = v36;
            v32 -= v18;
            v22 -= v18;
          }
          while ( v22 );
          v16 = v33;
        }
        if ( v13 < 0x200 )
          break;
        i = v16 - 1;
      }
      v7 = v30;
LABEL_39:
      v4 = v31;
      v8 = 0x3FFFFFFFFFFFFFFFLL;
      if ( !v2 )
      {
        v5 = v34;
        break;
      }
    }
  }
  v24 = 1025;
  if ( v37 != 24 )
    v24 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( v7 )
  {
    v26 = (__int64)v7;
    v7 = (_QWORD *)*v7;
    v27 = (v26 + 0x58000000000LL) / 48;
    MiPageToNode(v27, 0LL);
    v28 = MiPageToChannel(v27);
    MiInitializeBlankPfns(v26, -1, v29, v28, v5);
    MiLockPageAtDpcInline(v26);
    MiInsertPageInFreeOrZeroedList(v27, v24);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
}
