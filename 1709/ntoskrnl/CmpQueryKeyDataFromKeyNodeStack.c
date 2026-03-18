/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x1401E5608
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E448C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPopulateCachedInformation @ 0x1401E55C0 (CmpPopulateCachedInformation.c)
 *     CmpPopulateNodeInformation @ 0x1404742E8 (CmpPopulateNodeInformation.c)
 *     CmpPopulateBasicInformation @ 0x140482A60 (CmpPopulateBasicInformation.c)
 *     CmpPopulateFullInformation @ 0x140584390 (CmpPopulateFullInformation.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140697F18 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069A87C (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned int v8; // r11d
  char v9; // r12
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 *EntryAtLayerHeight; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // r14d
  unsigned int v18; // edi
  _QWORD *v19; // rax
  unsigned int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // r12
  int v25; // eax
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v27; // r10d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  bool v30; // zf
  unsigned __int16 v31; // ax
  unsigned int v33; // [rsp+48h] [rbp-51h]
  unsigned int v34; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v35; // [rsp+50h] [rbp-49h]
  __int64 v36; // [rsp+58h] [rbp-41h] BYREF
  __int64 v37; // [rsp+60h] [rbp-39h] BYREF
  int v38; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v39[15]; // [rsp+70h] [rbp-29h] BYREF

  memset(v39, 0, 0x30uLL);
  v7 = *a1;
  v36 = 0LL;
  v8 = -1;
  v37 = 0xFFFFFFFFLL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( (v7 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7, v7, v6);
      if ( EntryAtLayerHeight[2] )
        break;
      LOWORD(v7) = v7 - 1;
      if ( (v7 & 0x8000u) != 0LL )
      {
        v12 = 0LL;
        goto LABEL_6;
      }
    }
    v13 = EntryAtLayerHeight[2];
    v12 = *EntryAtLayerHeight;
    v36 = v13;
  }
LABEL_6:
  v15 = *(unsigned int *)(v13 + 60);
  v16 = *(_QWORD *)(v13 + 4);
  v17 = (unsigned __int16)*(_DWORD *)(v13 + 52);
  v33 = *(_DWORD *)(v13 + 56);
  v34 = *(_DWORD *)(v13 + 60);
  v35 = *(_DWORD *)(v13 + 64);
  if ( *(char *)(v13 + 13) >= 0 )
  {
    v8 = *(_DWORD *)(v13 + 48);
    v9 = 1;
    v11 = *(unsigned __int16 *)(v13 + 74);
    v10 = v12;
  }
  LOWORD(v7) = v7 - 1;
  if ( (v7 & 0x8000u) == 0LL )
  {
    v18 = *(_DWORD *)(v13 + 56);
    do
    {
      v19 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7, v7, v15);
      if ( v19[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v19) == 1 )
          break;
        if ( v16 < *(_QWORD *)(v21 + 4) )
          v16 = *(_QWORD *)(v21 + 4);
        v23 = (unsigned __int16)*(_DWORD *)(v21 + 52);
        if ( v17 >= v23 )
          v23 = v17;
        v17 = v23;
        if ( v18 < *(_DWORD *)(v21 + 56) )
          v18 = *(_DWORD *)(v21 + 56);
        if ( !v9 && *(char *)(v21 + 13) >= 0 )
        {
          v9 = 1;
          v11 = *(unsigned __int16 *)(v21 + 74);
          v10 = v22;
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v22) )
          break;
      }
      LOWORD(v7) = v7 - 1;
    }
    while ( (v7 & 0x8000u) == 0LL );
    v33 = v18;
    v13 = v36;
    v35 = v20;
    v34 = v15;
  }
  if ( v9 && v11 )
  {
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v10 + 8))(v10, v8, &v37);
  }
  else
  {
    v24 = 0LL;
    v11 = 0;
  }
  if ( !a2 )
  {
    v39[0] = v16;
    v25 = CmpPopulateBasicInformation((unsigned int)v39, v13, a3, a4, (__int64)a5);
LABEL_30:
    SubKeyCountForKeyNodeStack = v25;
    goto LABEL_48;
  }
  if ( a2 == 1 )
  {
    v39[0] = v16;
    v25 = CmpPopulateNodeInformation(v39, v13, v24, v11, a3, a4, a5);
    goto LABEL_30;
  }
  SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v38);
  if ( SubKeyCountForKeyNodeStack >= 0 )
  {
    SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v36);
    if ( SubKeyCountForKeyNodeStack >= 0 )
    {
      if ( v38 )
      {
        v27 = v33;
      }
      else
      {
        v17 = 0;
        v27 = 0;
      }
      if ( (_DWORD)v36 )
      {
        v28 = v34;
        v29 = v35;
      }
      else
      {
        v28 = 0;
        v29 = 0;
      }
      if ( a2 == 4 )
      {
        v30 = (*(_BYTE *)(v13 + 2) & 0x20) == 0;
        v39[0] = v16;
        v31 = *(_WORD *)(v13 + 72);
        HIDWORD(v39[1]) = v38;
        v39[2] = __PAIR64__(v36, v17);
        v39[3] = __PAIR64__(v29, v28);
        if ( !v30 )
          v31 *= 2;
        LODWORD(v39[4]) = v31;
        v25 = CmpPopulateCachedInformation((__int64)v39, a3, a4, a5);
        goto LABEL_30;
      }
      if ( a2 == 2 )
      {
        v39[4] = __PAIR64__(v28, v36);
        HIDWORD(v39[2]) = v38;
        LODWORD(v39[5]) = v29;
        v39[0] = v16;
        v39[3] = __PAIR64__(v27, v17);
        v25 = CmpPopulateFullInformation(v39, v24, v11, a3, a4, a5);
        goto LABEL_30;
      }
      SubKeyCountForKeyNodeStack = -1073741811;
    }
  }
LABEL_48:
  if ( v24 )
    (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v37);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
