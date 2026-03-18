/*
 * XREFs of MxCreateFreePfns @ 0x14089A028
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140899844 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x140899EBC (MiCreateFreePfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiPageToChannel @ 0x140122B2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiRestrictRangeToNode @ 0x14016FC04 (MiRestrictRangeToNode.c)
 *     MiInitializeBlankPfns @ 0x14089A430 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x1408E0F5C (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rcx
  BOOL v5; // ebx
  __int64 v6; // rdi
  _QWORD *i; // r14
  __int16 v8; // ax
  __int16 v9; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  int v13; // eax
  int v14; // r10d
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  int v23; // r8d
  int v24; // r10d
  unsigned int v25; // r13d
  unsigned int j; // r14d
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbx
  _QWORD *v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  unsigned int v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h]
  int v39; // [rsp+B8h] [rbp+10h]
  int v40; // [rsp+C0h] [rbp+18h]
  int v41; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v3 = *(_DWORD *)(a1 + 16);
  v41 = v3;
  if ( v3 == 2 || (v4 = 1LL, v3 == 24) )
    v4 = 0LL;
  v36 = v4;
  v5 = v3 != 24;
  v38 = v5;
  v6 = 48 * v1 - 0x58000000000LL;
  v35 = 0LL;
  for ( i = 0LL; v2; v4 = v36 )
  {
    if ( v4 )
    {
      v8 = *(_WORD *)(v6 + 32);
      if ( v8 == 1 )
      {
        v15 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
        *v15 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v15) )
          MiWritePteShadow(v17, v16, v18);
        v21 = *(_QWORD *)(v19 + 24) ^ v20 & (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 1LL));
        *(_QWORD *)(v19 + 24) = v21;
        if ( (v20 & v21) == 1 )
          MiFreeEmptyBootPageTable(v19);
        v4 = v36;
        *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v6 + 32) = 0;
      }
      else if ( v8 )
      {
        goto LABEL_10;
      }
    }
    if ( (v1 & 0x1FF) == 0 && !v4 && v2 >= 0x200 )
    {
      v22 = MiRestrictRangeToNode(v1, v2);
      if ( v22 >= 0x200 )
      {
        v39 = MiPageToNode(v1, 0);
        v23 = MiPageToChannel(v1);
        v40 = v23;
        v25 = ((KeFeatureBits >> 37) & 1) == 0;
        v37 = v25;
        for ( j = v25; j <= 1; ++j )
        {
          v27 = MiLargePageSizes[j];
          if ( v1 == (v1 & ~(v27 - 1)) && v22 >= v27 )
          {
            v28 = v22;
            if ( j == v25 )
            {
              v31 = v22;
            }
            else
            {
              v29 = MiLargePageSizes[j - 1];
              v30 = v29 - (v1 & (v29 - 1));
              if ( v30 <= v22 )
                v28 = v30;
              v31 = v28;
            }
            v32 = v28 - v31 % v27;
            if ( v32 )
            {
              v33 = v32;
              do
              {
                MiInitializeBlankPfns(v6, j, v24, v23, v5);
                v34 = (unsigned __int8)MiLockPageInline(v6);
                MiInsertLargePageInNodeListHelper(v1, v27, v38, 0);
                _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v34);
                v6 += 48 * v27;
                v22 -= v27;
                v24 = v39;
                v2 -= v27;
                v23 = v40;
                v1 += v27;
                v5 = v38;
                v33 -= v27;
              }
              while ( v33 );
              v25 = v37;
            }
            if ( v22 < 0x200 )
            {
              i = v35;
              goto LABEL_11;
            }
            j = v25 - 1;
          }
        }
        i = v35;
        continue;
      }
    }
    *(_QWORD *)v6 = i;
    i = (_QWORD *)v6;
    v35 = (_QWORD *)v6;
LABEL_10:
    ++v1;
    v6 += 48LL;
    --v2;
LABEL_11:
    ;
  }
  v9 = 1025;
  if ( v41 != 24 )
    v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( i )
  {
    v11 = (__int64)i;
    i = (_QWORD *)*i;
    v12 = (v11 + 0x58000000000LL) / 48;
    MiPageToNode(v12, 0);
    v13 = MiPageToChannel(v12);
    MiInitializeBlankPfns(v11, -1, v14, v13, v38);
    MiLockPageAtDpcInline(v11);
    MiInsertPageInFreeOrZeroedList(v12, v9);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
}
