/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C
 * Callers:
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140222658 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPopulateCachedInformation @ 0x1402230C4 (CmpPopulateCachedInformation.c)
 *     CmpPopulateNodeInformation @ 0x1404A120C (CmpPopulateNodeInformation.c)
 *     CmpPopulateBasicInformation @ 0x1404AC2F0 (CmpPopulateBasicInformation.c)
 *     HvpGetCellContextInitialize @ 0x1404E15B4 (HvpGetCellContextInitialize.c)
 *     CmpPopulateFullInformation @ 0x14057583C (CmpPopulateFullInformation.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1406FAFF4 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406FF458 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v6; // r9
  char v7; // r11
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 *EntryAtLayerHeight; // rax
  __int64 v14; // rbx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  _QWORD *v18; // rax
  unsigned int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v28; // edx
  bool v29; // zf
  unsigned __int16 v30; // cx
  __int64 v31; // rbx
  unsigned int v33; // [rsp+48h] [rbp-51h] BYREF
  __int64 v34; // [rsp+50h] [rbp-49h]
  unsigned int v35; // [rsp+58h] [rbp-41h]
  unsigned int v36; // [rsp+60h] [rbp-39h] BYREF
  __int64 v37; // [rsp+68h] [rbp-31h]
  _QWORD v38[6]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v39[72]; // [rsp+A0h] [rbp+7h] BYREF

  memset(v38, 0, sizeof(v38));
  v33 = -1;
  v37 = 0LL;
  HvpGetCellContextInitialize(v39);
  v8 = *a1;
  v10 = v9;
  v34 = v9;
  v11 = (unsigned int)v9;
  v12 = (unsigned int)v9;
  if ( (v8 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v8, v8, v6);
      if ( EntryAtLayerHeight[2] )
        break;
      LOWORD(v8) = v8 - 1;
      if ( (v8 & 0x8000u) != 0LL )
      {
        v11 = v12;
        goto LABEL_6;
      }
    }
    v11 = *EntryAtLayerHeight;
    v12 = EntryAtLayerHeight[2];
    v34 = v12;
  }
LABEL_6:
  v14 = *(_QWORD *)(v12 + 4);
  v15 = *(_DWORD *)(v12 + 60);
  v16 = *(_DWORD *)(v12 + 64);
  v17 = (unsigned __int16)*(_DWORD *)(v12 + 52);
  v35 = *(_DWORD *)(v12 + 56);
  if ( *(char *)(v12 + 13) >= (char)v6 )
  {
    v10 = *(unsigned __int16 *)(v12 + 74);
    v7 = 1;
    v6 = v11;
    v33 = *(_DWORD *)(v12 + 48);
    v37 = v11;
  }
  LOWORD(v8) = v8 - 1;
  if ( (v8 & 0x8000u) == 0LL )
  {
    do
    {
      v18 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v8, v8, v6);
      if ( v18[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v18) == 1 )
          break;
        if ( v14 < *(_QWORD *)(v20 + 4) )
          v14 = *(_QWORD *)(v20 + 4);
        v22 = (unsigned __int16)*(_DWORD *)(v20 + 52);
        if ( v17 >= v22 )
          v22 = v17;
        v17 = v22;
        v23 = *(_DWORD *)(v20 + 60);
        if ( v15 >= v23 )
          v23 = v15;
        v15 = v23;
        v24 = *(_DWORD *)(v20 + 64);
        if ( v16 >= v24 )
          v24 = v16;
        v16 = v24;
        if ( !v7 && *(char *)(v20 + 13) >= 0 )
        {
          v10 = *(unsigned __int16 *)(v20 + 74);
          v33 = *(_DWORD *)(v20 + 48);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v21) )
          break;
      }
      LOWORD(v8) = v8 - 1;
    }
    while ( (v8 & 0x8000u) == 0LL );
    v12 = v34;
    v35 = v19;
    v37 = v6;
  }
  if ( v7 && v10 )
  {
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v6 + 8))(v6, v33, v39);
    v34 = v25;
  }
  else
  {
    v25 = 0LL;
    v34 = 0LL;
    v10 = 0;
  }
  if ( !a2 )
  {
    v38[0] = v14;
    v26 = CmpPopulateBasicInformation((unsigned int)v38, v12, a3, a4, (__int64)a5);
LABEL_31:
    SubKeyCountForKeyNodeStack = v26;
    goto LABEL_48;
  }
  if ( a2 == 1 )
  {
    v38[0] = v14;
    v26 = CmpPopulateNodeInformation(v38, v12, v25, v10, a3, a4, a5);
    goto LABEL_31;
  }
  SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v33);
  if ( SubKeyCountForKeyNodeStack < 0 )
    goto LABEL_48;
  SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v36);
  if ( SubKeyCountForKeyNodeStack < 0 )
    goto LABEL_48;
  if ( v33 )
  {
    v28 = v35;
  }
  else
  {
    v17 = 0;
    v28 = 0;
  }
  if ( !v36 )
  {
    v15 = 0;
    v16 = 0;
  }
  if ( a2 == 4 )
  {
    v29 = (*(_BYTE *)(v12 + 2) & 0x20) == 0;
    HIDWORD(v38[1]) = v33;
    v30 = *(_WORD *)(v12 + 72);
    v38[0] = v14;
    v38[2] = __PAIR64__(v36, v17);
    v38[3] = __PAIR64__(v16, v15);
    if ( !v29 )
      v30 *= 2;
    LODWORD(v38[4]) = v30;
    v26 = CmpPopulateCachedInformation((__int64)v38, a3, a4, a5);
    goto LABEL_31;
  }
  if ( a2 == 2 )
  {
    v38[4] = __PAIR64__(v15, v36);
    v38[0] = v14;
    v31 = v34;
    HIDWORD(v38[2]) = v33;
    v38[3] = __PAIR64__(v28, v17);
    LODWORD(v38[5]) = v16;
    SubKeyCountForKeyNodeStack = CmpPopulateFullInformation(v38, v34, v10, a3, a4, a5);
    goto LABEL_49;
  }
  SubKeyCountForKeyNodeStack = -1073741811;
LABEL_48:
  v31 = v34;
LABEL_49:
  if ( v31 )
    (*(void (__fastcall **)(__int64, _BYTE *))(v37 + 16))(v37, v39);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
