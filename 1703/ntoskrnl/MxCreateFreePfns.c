/*
 * XREFs of MxCreateFreePfns @ 0x140800A20
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140800254 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x1408008A0 (MiCreateFreePfns.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400B7220 (MiPageToChannel.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestrictRangeToNode @ 0x1401547A8 (MiRestrictRangeToNode.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiInitializeBlankPfns @ 0x140800E50 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x14083509C (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // rbp
  __int64 v3; // r11
  int v4; // eax
  __int64 v5; // rcx
  char v6; // r12
  __int64 v7; // rsi
  _QWORD *v8; // r15
  __int16 v9; // ax
  _QWORD *v10; // rcx
  __int64 v11; // r10
  unsigned __int64 v12; // rdi
  int v13; // eax
  int v14; // r10d
  unsigned int v15; // r12d
  int v16; // r8d
  unsigned int i; // r13d
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdi
  __int16 v23; // bp
  unsigned __int8 CurrentIrql; // r14
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // eax
  int v28; // r10d
  _QWORD *v29; // [rsp+30h] [rbp-78h]
  unsigned __int64 v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  unsigned __int64 v32; // [rsp+48h] [rbp-60h]
  unsigned int v33; // [rsp+58h] [rbp-50h]
  BOOL v34; // [rsp+B0h] [rbp+8h]
  int v35; // [rsp+B8h] [rbp+10h]
  int v36; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 1LL;
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  v37 = v4;
  if ( v4 == 2 || (v5 = 1LL, v4 == 24) )
    v5 = 0LL;
  v31 = v5;
  v6 = v4 != 24;
  v34 = v4 != 24;
  v7 = 48 * v1 - 0x58000000000LL;
  v29 = 0LL;
  v8 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( v5 )
      {
        v9 = *(_WORD *)(v7 + 32);
        if ( v9 == (_WORD)v3 )
        {
          v10 = (_QWORD *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
          *v10 = 0LL;
          if ( MiPteInShadowRange((unsigned __int64)v10) )
            MiWritePteShadow();
          *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) - v3)) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == v3 )
          {
            MiFreeEmptyBootPageTable(v11);
            v3 = 1LL;
          }
          v5 = v31;
          *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v7 + 32) = 0;
        }
        else if ( v9 )
        {
          goto LABEL_21;
        }
      }
      if ( (v1 & 0x1FF) != 0 || v5 || v2 < 0x200 )
      {
        *(_QWORD *)v7 = v8;
        v8 = (_QWORD *)v7;
        v29 = (_QWORD *)v7;
LABEL_21:
        v1 += v3;
        v7 += 48LL;
        v2 -= v3;
        goto LABEL_38;
      }
      v30 = MiRestrictRangeToNode(v1, v2);
      v12 = v30;
      if ( v30 < 0x200 )
      {
        *(_QWORD *)v7 = v8;
        v3 = 1LL;
        v8 = (_QWORD *)v7;
        v29 = (_QWORD *)v7;
        ++v1;
        v7 += 48LL;
        --v2;
        goto LABEL_38;
      }
      v35 = MiPageToNode(v1, 0LL);
      v13 = MiPageToChannel(v1);
      v3 = 1LL;
      v36 = v13;
      v15 = ((KeFeatureBits >> 37) & 1) == 0;
      v16 = v13;
      v33 = v15;
      for ( i = v15; i <= 1; ++i )
      {
        v18 = MiLargePageSizes[i];
        if ( v1 != (v1 & ~(v18 - 1)) || v12 < v18 )
          continue;
        if ( i == v15 )
        {
          v20 = v12;
        }
        else
        {
          v19 = MiLargePageSizes[i - 1];
          v20 = v19 - (v1 & (v19 - 1));
          if ( v20 > v12 )
            v20 = v12;
        }
        v32 = v18 * (v20 / v18);
        if ( v32 )
        {
          v21 = v30;
          do
          {
            MiInitializeBlankPfns(v7, i, v14, v16, v34);
            v22 = (unsigned __int8)MiLockPageInline(v7);
            MiInsertLargePageInNodeListHelper(v1, v18, v34, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v22);
            v21 -= v18;
            v7 += 48 * v18;
            v14 = v35;
            v2 -= v18;
            v16 = v36;
            v1 += v18;
            v32 -= v18;
          }
          while ( v32 );
          v30 = v21;
          v3 = 1LL;
          v12 = v21;
          v15 = v33;
        }
        if ( v12 < 0x200 )
          break;
        i = v15 - 1;
      }
      v8 = v29;
LABEL_38:
      v5 = v31;
      if ( !v2 )
      {
        v6 = v34;
        break;
      }
    }
  }
  v23 = 1025;
  if ( v37 != 24 )
    v23 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( v8 )
  {
    v25 = (__int64)v8;
    v8 = (_QWORD *)*v8;
    v26 = (v25 + 0x58000000000LL) / 48;
    MiPageToNode(v26, 0LL);
    v27 = MiPageToChannel(v26);
    MiInitializeBlankPfns(v25, -1, v28, v27, v6);
    MiLockPageAtDpcInline(v25);
    MiInsertPageInFreeOrZeroedList(v26, v23);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
}
