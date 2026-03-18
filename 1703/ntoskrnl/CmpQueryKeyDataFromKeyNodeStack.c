/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x1401E14EC
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E032C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPopulateCachedInformation @ 0x1401E14A4 (CmpPopulateCachedInformation.c)
 *     CmpPopulateFullInformation @ 0x1404461E4 (CmpPopulateFullInformation.c)
 *     CmpPopulateNodeInformation @ 0x1404D2B6C (CmpPopulateNodeInformation.c)
 *     CmpPopulateBasicInformation @ 0x1404FF110 (CmpPopulateBasicInformation.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14066D9F8 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406701AC (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 *EntryAtLayerHeight; // rax
  __int64 v16; // rbx
  __int64 v17; // r9
  unsigned int v18; // eax
  char v19; // si
  unsigned int v20; // edi
  _QWORD *v21; // rax
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // eax
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v30; // r8d
  unsigned int v31; // r11d
  unsigned int v32; // r9d
  unsigned int v33; // r10d
  bool v34; // zf
  int v35; // eax
  unsigned int v37; // [rsp+48h] [rbp-51h]
  unsigned int v38; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v39; // [rsp+50h] [rbp-49h]
  unsigned int v40; // [rsp+58h] [rbp-41h]
  __int64 v41; // [rsp+60h] [rbp-39h] BYREF
  __int64 v42; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v43[15]; // [rsp+70h] [rbp-29h] BYREF
  int v44; // [rsp+F8h] [rbp+5Fh] BYREF
  int v45; // [rsp+100h] [rbp+67h]
  __int64 v46; // [rsp+108h] [rbp+6Fh]
  unsigned int v47; // [rsp+110h] [rbp+77h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v5 = a2;
  memset(v43, 0, 0x30uLL);
  v7 = *a1;
  v8 = 0LL;
  v41 = 0LL;
  v9 = -1;
  v42 = 0xFFFFFFFFLL;
  v10 = 0;
  LOBYTE(v44) = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( (v7 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7, v7, v8);
      if ( EntryAtLayerHeight[2] != v8 )
        break;
      LOWORD(v7) = v7 - 1;
      if ( (v7 & 0x8000u) != 0LL )
      {
        v11 = 0LL;
        v10 = 0;
        goto LABEL_6;
      }
    }
    v14 = EntryAtLayerHeight[2];
    v10 = v8;
    v11 = *EntryAtLayerHeight;
    v41 = v14;
  }
LABEL_6:
  v16 = *(_QWORD *)(v14 + 4);
  v17 = (unsigned __int16)*(_DWORD *)(v14 + 52);
  v18 = *(_DWORD *)(v14 + 56);
  v38 = (unsigned __int16)*(_DWORD *)(v14 + 52);
  v37 = v18;
  v39 = *(_DWORD *)(v14 + 60);
  v40 = *(_DWORD *)(v14 + 64);
  if ( *(_BYTE *)(v14 + 13) < 0x80u )
  {
    v9 = *(_DWORD *)(v14 + 48);
    v10 = 1;
    v13 = *(unsigned __int16 *)(v14 + 74);
    v12 = v11;
    LOBYTE(v44) = 1;
  }
  LOWORD(v7) = v7 - 1;
  if ( (v7 & 0x8000u) == 0LL )
  {
    v19 = v44;
    v20 = v18;
    do
    {
      v21 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7, v7, v17);
      if ( v21[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v21) == 1 )
          break;
        if ( v16 < *(_QWORD *)(v24 + 4) )
          v16 = *(_QWORD *)(v24 + 4);
        if ( v20 < *(_DWORD *)(v24 + 56) )
          v20 = *(_DWORD *)(v24 + 56);
        if ( !v19 && *(_BYTE *)(v24 + 13) < 0x80u )
        {
          v9 = *(_DWORD *)(v24 + 48);
          v19 = 1;
          v13 = *(unsigned __int16 *)(v24 + 74);
          v12 = v25;
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v25) )
          break;
      }
      LOWORD(v7) = v7 - 1;
    }
    while ( (v7 & 0x8000u) == 0LL );
    LOBYTE(v44) = v19;
    v5 = v45;
    v10 = v44;
    v37 = v20;
    v14 = v41;
    v40 = v23;
    v39 = v22;
    v38 = v17;
  }
  v26 = 0LL;
  if ( v10 && v13 )
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v12 + 8))(v12, v9, &v42);
  else
    v13 = 0;
  v27 = v26;
  if ( !v5 )
  {
    v43[0] = v16;
    v28 = CmpPopulateBasicInformation((unsigned int)v43, v14, v46, v47, (__int64)a5);
LABEL_28:
    SubKeyCountForKeyNodeStack = v28;
    goto LABEL_47;
  }
  if ( v5 == 1 )
  {
    v43[0] = v16;
    v28 = CmpPopulateNodeInformation(v43, v14, v26, v13, v46, v47, a5);
    goto LABEL_28;
  }
  SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v44);
  if ( SubKeyCountForKeyNodeStack >= 0 )
  {
    SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v41);
    if ( SubKeyCountForKeyNodeStack >= 0 )
    {
      if ( v44 )
      {
        v30 = v38;
        v31 = v37;
      }
      else
      {
        v30 = 0;
        v31 = 0;
      }
      if ( (_DWORD)v41 )
      {
        v32 = v39;
        v33 = v40;
      }
      else
      {
        v32 = 0;
        v33 = 0;
      }
      if ( v45 == 4 )
      {
        v34 = (*(_BYTE *)(v14 + 2) & 0x20) == 0;
        v43[0] = v16;
        HIDWORD(v43[1]) = v44;
        v43[2] = __PAIR64__(v41, v30);
        v43[3] = __PAIR64__(v33, v32);
        if ( v34 )
          v35 = *(unsigned __int16 *)(v14 + 72);
        else
          v35 = (unsigned __int16)(2 * *(_WORD *)(v14 + 72));
        LODWORD(v43[4]) = v35;
        v28 = CmpPopulateCachedInformation((__int64)v43, v46, v47, a5);
        goto LABEL_28;
      }
      if ( v45 == 2 )
      {
        v43[4] = __PAIR64__(v32, v41);
        HIDWORD(v43[2]) = v44;
        v43[3] = __PAIR64__(v31, v30);
        v43[0] = v16;
        LODWORD(v43[5]) = v33;
        v28 = CmpPopulateFullInformation(v43, v27, v13, v46, v47, a5);
        goto LABEL_28;
      }
      SubKeyCountForKeyNodeStack = -1073741811;
    }
  }
LABEL_47:
  if ( v27 )
    (*(void (__fastcall **)(__int64, __int64 *))(v12 + 16))(v12, &v42);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
