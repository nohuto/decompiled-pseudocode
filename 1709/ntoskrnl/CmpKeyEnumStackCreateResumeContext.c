/*
 * XREFs of CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069B1D8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackCreateResumeContext(__int64 a1, __int64 a2, int a3, char a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v6; // r14
  SIZE_T v10; // rdx
  char *TransientPoolWithTag; // rax
  char *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // di
  __int64 EntryAtLayerHeight; // rbp
  char *v18; // r14
  __int64 KcbAtLayerHeight; // r13
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rbp
  volatile signed __int32 **v23; // r14
  __int64 v24; // rsi

  v5 = *(__int16 *)(a1 + 2);
  v6 = a2;
  v10 = 24LL * (v5 + 1) + 8;
  if ( a4 )
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(a1, v10, 0x36374D43u);
  else
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(a1, v10, 0x37374D43u);
  v12 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, 24LL * (v5 + 1) + 8);
    *((_DWORD *)v12 + 1) = a3;
    v16 = 0;
    *(_WORD *)v12 = v5;
    v12[2] = a4;
    if ( (v5 & 0x8000u) != 0 )
    {
LABEL_11:
      v13 = 0;
      *a5 = v12;
      v12 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(v6, (unsigned __int16)v16, v14, v15);
        v18 = &v12[16 * v16 + 8 + 8 * v16];
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v16);
        if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)KcbAtLayerHeight) )
          break;
        v20 = 2LL;
        *((_QWORD *)v18 + 1) = KcbAtLayerHeight;
        v21 = v18 + 16;
        *(_QWORD *)v18 = *(_QWORD *)(KcbAtLayerHeight + 296);
        v22 = EntryAtLayerHeight - (_QWORD)v18;
        do
        {
          *v21 = *(_DWORD *)((char *)v21 + v22 + 8);
          ++v21;
          --v20;
        }
        while ( v20 );
        v6 = a2;
        if ( ++v16 > (__int16)v5 )
          goto LABEL_11;
      }
      v13 = -1073741670;
    }
    if ( v12 )
    {
      if ( (v5 & 0x8000u) == 0 )
      {
        v23 = (volatile signed __int32 **)(v12 + 16);
        v24 = (unsigned __int16)(v5 + 1);
        do
        {
          if ( *v23 )
            CmpDereferenceKeyControlBlockUnsafe(*v23);
          v23 += 3;
          --v24;
        }
        while ( v24 );
      }
      MiDeleteSubsection((PPRIVILEGE_SET)v12);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
