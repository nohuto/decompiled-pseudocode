/*
 * XREFs of CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4
 * Callers:
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     HvpGetCellContextMove @ 0x14003C438 (HvpGetCellContextMove.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1401E0528 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E0544 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpCopyCell @ 0x14057226C (CmpCopyCell.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackAdvance @ 0x140671354 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14067146C (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x1406714CC (CmpValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKeyNodeStacks(
        __int16 *a1,
        __int16 *a2,
        char a3,
        ULONG_PTR *a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // r13d
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int16 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 EntryAtLayerHeight; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rbx
  __int16 *v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  ULONG_PTR v26; // r14
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 *v31; // rbx
  __int64 v32; // rax
  int v33; // edx
  __int64 CurrentValueHive; // rax
  unsigned int v35; // r15d
  int v36; // eax
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned int v43; // edx
  _DWORD *v44; // rdx
  __int64 v45; // rcx
  unsigned int *v46; // r14
  __int64 v47; // r15
  ULONG_PTR v48; // rdx
  __int64 v50; // [rsp+28h] [rbp-D8h]
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-BCh]
  unsigned int BugCheckParameter3_4; // [rsp+48h] [rbp-B8h]
  unsigned int v54; // [rsp+4Ch] [rbp-B4h]
  unsigned int v55; // [rsp+50h] [rbp-B0h] BYREF
  int v56; // [rsp+54h] [rbp-ACh]
  char v57[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int16 *v59; // [rsp+68h] [rbp-98h]
  char v60[8]; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR *v61; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall **v62)(ULONG_PTR, _QWORD, char *); // [rsp+A0h] [rbp-60h]
  __int64 *v63; // [rsp+B8h] [rbp-48h]
  ULONG_PTR *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  _DWORD v67[24]; // [rsp+E0h] [rbp-20h] BYREF

  v65 = a5;
  v63 = a6;
  v8 = 0LL;
  v9 = 0LL;
  v66 = a7;
  v64 = a4;
  v59 = a2;
  HvpGetCellContextReinitialize((__int64)v60);
  v10 = -1;
  v11 = 0LL;
  CmpValueEnumStackInitialize(v67);
  v55 = 0;
  BugCheckParameter3 = -1;
  v56 = -1;
  v12 = 0;
  v58 = 0LL;
  HvpGetCellContextReinitialize((__int64)v57);
  v13 = *a1;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)*a1, v14, v15);
  v19 = 0LL;
  v61 = (ULONG_PTR *)EntryAtLayerHeight;
  v20 = EntryAtLayerHeight;
  if ( v13 < 0 )
    goto LABEL_13;
  v21 = v59;
  while ( 1 )
  {
    v22 = CmpKeyNodeStackGetEntryAtLayerHeight(v21, v17, v19, v18);
    if ( *(_QWORD *)(v22 + 16) != v19 )
      break;
    LOWORD(v17) = v17 - 1;
    if ( (v17 & 0x8000u) != 0LL )
      goto LABEL_7;
  }
  v11 = v22;
LABEL_7:
  if ( (_WORD)v17 == v13 )
  {
LABEL_13:
    v25 = *(_DWORD *)(v11 + 8);
  }
  else
  {
    if ( !HvpMarkCellDirty(*(_QWORD *)v20, *(unsigned int *)(v20 + 8), v19) )
    {
LABEL_9:
      v23 = -1073741443;
      goto LABEL_71;
    }
    v24 = CmpCopyKeyPartial(
            *(_QWORD *)v11,
            *(unsigned int *)(v11 + 8),
            *(_QWORD *)v20,
            *(_DWORD *)(v20 + 8),
            160,
            v50,
            2u);
    v10 = v24;
    if ( v24 == -1 )
    {
LABEL_11:
      v23 = -1073741670;
      goto LABEL_71;
    }
    v25 = v24;
    v11 = v20;
  }
  BugCheckParameter3_4 = v25;
  v54 = v25 >> 31;
  v26 = *(_QWORD *)v11;
  v8 = v26;
  v62 = (__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v26 + 8);
  v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v8 + 8))(v8, v25, v60);
  v9 = v27;
  if ( !a3 )
    goto LABEL_46;
  if ( *(_BYTE *)(v27 + 13) >= 0x80u )
  {
    v28 = HvpMarkCellDirty(v26, BugCheckParameter3_4, 0);
    v30 = 0LL;
    if ( !v28 )
      goto LABEL_9;
    while ( --v13 >= 0 )
    {
      v31 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(v59, (unsigned __int16)v13, v30, v29);
      v32 = v31[2];
      if ( v32 && *(_BYTE *)(v32 + 13) < 0x80u )
      {
        if ( *(_WORD *)(v32 + 74) != (_WORD)v30 )
        {
          v33 = CmpCopyCell(*v31, *(unsigned int *)(v32 + 48), v26, v54);
          if ( v33 == -1 )
            goto LABEL_11;
          *(_WORD *)(v9 + 74) = *(_WORD *)(v31[2] + 74);
          *(_DWORD *)(v9 + 48) = v33;
        }
        break;
      }
    }
    *(_BYTE *)(v9 + 13) &= ~0x80u;
  }
  v23 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v67, v59);
  if ( v23 >= 0 )
  {
    v23 = CmpValueEnumStackAdvance(v67);
    if ( v23 >= 0 )
    {
      while ( 1 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)v67);
        if ( CurrentValueHive != v26 )
        {
          v35 = CmpCopyValue(CurrentValueHive, v67[0], v26, v54);
          v36 = CmpAddValueToListEx(v26, v35, v12, 1u, &v55, 1);
          v12 = v55;
          v23 = v36;
          if ( v36 < 0 )
            break;
        }
        v23 = CmpValueEnumStackAdvance(v67);
        if ( v23 < 0 )
        {
          BugCheckParameter3 = v56;
          goto LABEL_32;
        }
      }
      BugCheckParameter3 = v56;
LABEL_60:
      v8 = v26;
      if ( v35 != -1 )
      {
        CmpFreeValue(v26, v35);
LABEL_62:
        if ( v58 )
          (*(void (__fastcall **)(ULONG_PTR, char *))(v8 + 16))(v8, v57);
      }
LABEL_64:
      if ( BugCheckParameter3 != -1 )
      {
        v46 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v8 + 8))(
                                v8,
                                BugCheckParameter3,
                                v57);
        if ( v12 )
        {
          v47 = v12;
          do
          {
            v48 = *v46;
            if ( (_DWORD)v48 != -1 )
              CmpFreeValue(v8, v48);
            ++v46;
            --v47;
          }
          while ( v47 );
        }
        (*(void (__fastcall **)(ULONG_PTR, char *))(v8 + 16))(v8, v57);
        HvFreeCell(v8, BugCheckParameter3);
      }
      goto LABEL_71;
    }
LABEL_32:
    if ( v23 != -2147483622 )
      goto LABEL_64;
    v37 = 0;
    if ( v12 )
    {
      if ( HvpMarkCellDirty(v26, BugCheckParameter3_4, 0)
        && (!*(_DWORD *)(v9 + 36) || HvpMarkCellDirty(v26, *(unsigned int *)(v9 + 40), 0)) )
      {
        v58 = (*v62)(v26, BugCheckParameter3, v57);
        v38 = v58;
        while ( 1 )
        {
          v23 = CmpAddValueToListEx(
                  v26,
                  *(_DWORD *)(v38 + 4LL * v37),
                  *(_DWORD *)(v9 + 36),
                  v54,
                  (unsigned int *)(v9 + 36),
                  1);
          if ( v23 < 0 )
            break;
          v38 = v58;
          v39 = v37++;
          *(_DWORD *)(v58 + 4 * v39) = -1;
          if ( v37 >= v12 )
          {
            (*(void (__fastcall **)(ULONG_PTR, char *))(v26 + 16))(v26, v57);
            HvFreeCell(v26, BugCheckParameter3);
            BugCheckParameter3 = -1;
            v12 = 0;
            goto LABEL_44;
          }
        }
        v8 = v26;
        goto LABEL_62;
      }
      v23 = -1073741443;
      goto LABEL_36;
    }
LABEL_44:
    v20 = (__int64)v61;
LABEL_46:
    if ( v10 != -1 )
    {
      if ( !CmpAddSubKeyEx(v26, *(unsigned int *)(v20 + 8), v10, 0) )
      {
        v23 = -1073741670;
LABEL_36:
        v8 = v26;
        goto LABEL_64;
      }
      if ( (*(_BYTE *)(v9 + 2) & 0x20) != 0 )
        v40 = (unsigned __int16)(2 * *(_WORD *)(v9 + 72));
      else
        v40 = *(unsigned __int16 *)(v9 + 72);
      v41 = *(_QWORD *)(v20 + 16);
      if ( (unsigned __int16)*(_DWORD *)(v41 + 52) < v40 )
        *(_WORD *)(v41 + 52) = v40;
      v42 = *(_QWORD *)(v20 + 16);
      v43 = *(unsigned __int16 *)(v9 + 74);
      if ( *(_DWORD *)(v42 + 56) < v43 )
        *(_DWORD *)(v42 + 56) = v43;
      v10 = -1;
    }
    if ( v63 )
    {
      v44 = (_DWORD *)v65;
      v45 = v66;
      *v63 = v9;
      *v64 = v26;
      *v44 = BugCheckParameter3_4;
      HvpGetCellContextMove(v45, (__int64)v60);
      v9 = 0LL;
    }
    v23 = 0;
    v58 = 0LL;
    v35 = -1;
    goto LABEL_60;
  }
LABEL_71:
  CmpValueEnumStackCleanup(v67);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v8 + 16))(v8, v60);
  if ( v10 != -1 )
    CmpFreeKeyByCell(*v61, v10, 0);
  return (unsigned int)v23;
}
