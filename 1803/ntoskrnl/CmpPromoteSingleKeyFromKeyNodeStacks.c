/*
 * XREFs of CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510
 * Callers:
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x140222850 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14022286C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpCopyCell @ 0x14054F92C (CmpCopyCell.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCopyValue @ 0x1406FDA54 (CmpCopyValue.c)
 *     CmpValueEnumStackAdvance @ 0x14070104C (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x1407011A8 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140701208 (CmpValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKeyNodeStacks(
        __int16 *a1,
        __int16 *a2,
        char a3,
        ULONG_PTR *a4,
        unsigned int *a5,
        __int64 *a6,
        __int64 a7)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rsi
  int v10; // r13d
  __int64 v11; // r14
  __int16 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 EntryAtLayerHeight; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int16 *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // ebx
  signed int v23; // r9d
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  unsigned int v28; // ecx
  ULONG_PTR v29; // r14
  char v30; // al
  __int64 v31; // r9
  __int64 v32; // r8
  __int16 v33; // r15
  __int64 *v34; // rbx
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  int v37; // edx
  unsigned __int16 v38; // cx
  __int64 v39; // rax
  unsigned int v40; // r12d
  unsigned int v41; // r15d
  __int64 CurrentValueHive; // rax
  unsigned int v43; // r15d
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned __int16 v47; // r8
  __int16 v48; // dx
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // ax
  __int64 v51; // r15
  unsigned int v52; // r12d
  __int64 v53; // rax
  unsigned __int16 v54; // cx
  __int64 v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  unsigned int *v58; // rdi
  __int64 v59; // r15
  ULONG_PTR v60; // rdx
  char v62; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v63; // [rsp+30h] [rbp-D0h]
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  unsigned int v66; // [rsp+48h] [rbp-B8h]
  unsigned int BugCheckParameter3; // [rsp+4Ch] [rbp-B4h]
  unsigned int BugCheckParameter3_4; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h]
  unsigned int v71; // [rsp+68h] [rbp-98h]
  __int16 *v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v74; // [rsp+80h] [rbp-80h] BYREF
  int v75; // [rsp+84h] [rbp-7Ch]
  __int64 v76; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v77; // [rsp+90h] [rbp-70h]
  __int64 *v78; // [rsp+98h] [rbp-68h]
  ULONG_PTR *v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  _DWORD v81[24]; // [rsp+B0h] [rbp-50h] BYREF

  v77 = a5;
  v8 = 0LL;
  v80 = a7;
  v9 = 0LL;
  v78 = a6;
  v69 = 0xFFFFFFFFLL;
  v10 = -1;
  v11 = 0LL;
  v79 = a4;
  v72 = a2;
  v64 = -1;
  CmpValueEnumStackInitialize(v81);
  v12 = *a1;
  v66 = 0;
  v74 = 0;
  BugCheckParameter3 = -1;
  v75 = -1;
  v76 = 0xFFFFFFFFLL;
  v73 = 0xFFFFFFFFLL;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v12, v13, v14);
  v18 = v72;
  v19 = 0LL;
  v70 = EntryAtLayerHeight;
  v20 = EntryAtLayerHeight;
  if ( v12 < 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v21 = CmpKeyNodeStackGetEntryAtLayerHeight(v72, v16, v19, v17);
    if ( *(_QWORD *)(v21 + 16) != v19 )
      break;
    LOWORD(v16) = v16 - 1;
    if ( (v16 & 0x8000u) != 0LL )
      goto LABEL_6;
  }
  v11 = v21;
LABEL_6:
  if ( (_WORD)v16 == v12 )
  {
LABEL_15:
    v28 = *(_DWORD *)(v11 + 8);
    goto LABEL_16;
  }
  if ( HvpMarkCellDirty(*(_QWORD *)v20, *(unsigned int *)(v20 + 8), v19) )
  {
    v23 = *(_DWORD *)(v20 + 8);
    v24 = *(unsigned int *)(v11 + 8);
    if ( v23 >= 0 )
      v25 = (unsigned int)v24 >> 31;
    else
      v25 = 1;
    LODWORD(v63) = v25;
    v26 = CmpCopyKeyPartial(*(_QWORD *)v11, v24, *(_QWORD *)v20, v23, 416, v62, v63);
    v64 = v26;
    v27 = v26;
    if ( v26 == -1 )
    {
      v22 = -1073741670;
      goto LABEL_95;
    }
    v28 = v26;
    v11 = v20;
    v10 = v26;
LABEL_16:
    v8 = *(_QWORD *)v11;
    BugCheckParameter3_4 = v28;
    v71 = v28 >> 31;
    v29 = v8;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(v8, v28, &v69);
    if ( a3 )
    {
      if ( *(char *)(v9 + 13) < 0 )
      {
        v30 = HvpMarkCellDirty(v8, BugCheckParameter3_4, 0);
        v32 = 0LL;
        if ( !v30 )
          goto LABEL_8;
        v33 = v12 - 1;
        if ( v33 >= 0 )
        {
          while ( 1 )
          {
            v34 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(v18, (unsigned __int16)v33, v32, v31);
            v35 = v34[2];
            if ( v35 )
            {
              if ( *(char *)(v35 + 13) >= (char)v32 )
                break;
            }
            if ( --v33 < 0 )
              goto LABEL_32;
            v18 = v72;
          }
          v36 = *(_WORD *)(v35 + 74);
          if ( v36 )
          {
            if ( (unsigned int)v36 > *(_DWORD *)(*(_QWORD *)(v20 + 16) + 56LL)
              && !HvpMarkCellDirty(v8, *(unsigned int *)(v20 + 8), v32) )
            {
              goto LABEL_8;
            }
            v37 = CmpCopyCell(*v34, *(unsigned int *)(v34[2] + 48), v8, v71);
            if ( v37 == -1 )
            {
              v22 = -1073741670;
              goto LABEL_94;
            }
            v38 = *(_WORD *)(v34[2] + 74);
            *(_WORD *)(v9 + 74) = v38;
            *(_DWORD *)(v9 + 48) = v37;
            if ( v10 == -1 )
            {
              v39 = *(_QWORD *)(v20 + 16);
              if ( (unsigned int)v38 > *(_DWORD *)(v39 + 56) )
                *(_DWORD *)(v39 + 56) = v38;
            }
          }
        }
LABEL_32:
        *(_BYTE *)(v9 + 13) &= ~0x80u;
      }
      v22 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v81, v72);
      if ( v22 < 0 )
        goto LABEL_94;
      LODWORD(v72) = 0;
      v40 = 0;
      v41 = 0;
      v22 = CmpValueEnumStackAdvance(v81);
      if ( v22 >= 0 )
      {
        while ( 1 )
        {
          CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)v81);
          if ( CurrentValueHive != v8 )
          {
            v43 = CmpCopyValue(CurrentValueHive, v81[0], v8, v71);
            v22 = CmpAddValueToListEx(v8, v43, v66, 1, &v74, 1);
            if ( v22 < 0 )
            {
              v66 = v74;
              BugCheckParameter3 = v75;
              goto LABEL_82;
            }
            v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(v8, v43, &v76);
            v45 = *(_DWORD *)(v44 + 4);
            v46 = v45 + 0x80000000;
            if ( v45 < 0x80000000 )
              v46 = *(_DWORD *)(v44 + 4);
            if ( v46 > v40 )
            {
              v40 = *(_DWORD *)(v44 + 4);
              if ( v45 >= 0x80000000 )
                v40 = v45 + 0x80000000;
            }
            v47 = *(_WORD *)(v44 + 2);
            v48 = *(_WORD *)(v44 + 16) & 1;
            v49 = 2 * v47;
            v50 = 2 * v47;
            if ( !v48 )
              v50 = v47;
            v41 = (unsigned int)v72;
            if ( v50 > (unsigned int)v72 )
            {
              if ( !v48 )
                v49 = v47;
              v41 = v49;
              LODWORD(v72) = v49;
            }
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v76);
            v66 = v74;
          }
          v22 = CmpValueEnumStackAdvance(v81);
          if ( v22 < 0 )
          {
            BugCheckParameter3 = v75;
            break;
          }
        }
      }
      if ( v22 != -2147483622 )
        goto LABEL_86;
      if ( v66 )
      {
        if ( HvpMarkCellDirty(v8, BugCheckParameter3_4, 0)
          && (!*(_DWORD *)(v9 + 36) || HvpMarkCellDirty(v8, *(unsigned int *)(v9 + 40), 0)) )
        {
          if ( *(_DWORD *)(v9 + 60) < v41 )
            *(_DWORD *)(v9 + 60) = v41;
          if ( *(_DWORD *)(v9 + 64) < v40 )
            *(_DWORD *)(v9 + 64) = v40;
          v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(v8, BugCheckParameter3, &v73);
          v52 = 0;
          while ( 1 )
          {
            v22 = CmpAddValueToListEx(
                    v8,
                    *(_DWORD *)(v51 + 4LL * v52),
                    *(_DWORD *)(v9 + 36),
                    v71,
                    (unsigned int *)(v9 + 36),
                    1);
            if ( v22 < 0 )
              goto LABEL_84;
            v53 = v52++;
            *(_DWORD *)(v51 + 4 * v53) = -1;
            if ( v52 >= v66 )
            {
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v73);
              HvFreeCell(v8, BugCheckParameter3);
              BugCheckParameter3 = -1;
              v66 = 0;
              goto LABEL_66;
            }
          }
        }
        v22 = -1073741443;
        goto LABEL_86;
      }
LABEL_66:
      v20 = v70;
    }
    if ( v64 != -1 )
    {
      if ( !CmpAddSubKeyEx(v8, *(unsigned int *)(v20 + 8), v64, 0) )
      {
        v22 = -1073741670;
        goto LABEL_87;
      }
      v54 = *(_WORD *)(v9 + 72);
      if ( (*(_BYTE *)(v9 + 2) & 0x20) != 0 )
        v54 *= 2;
      v55 = *(_QWORD *)(v20 + 16);
      if ( (unsigned __int16)*(_DWORD *)(v55 + 52) < (unsigned int)v54 )
      {
        *(_WORD *)(v55 + 52) = v54;
        v55 = *(_QWORD *)(v20 + 16);
      }
      v56 = *(unsigned __int16 *)(v9 + 74);
      if ( *(_DWORD *)(v55 + 56) < v56 )
        *(_DWORD *)(v55 + 56) = v56;
      v64 = -1;
    }
    if ( v77 )
      *v77 = BugCheckParameter3_4;
    if ( v78 )
    {
      v57 = v80;
      *v78 = v9;
      v9 = 0LL;
      *v79 = v8;
      *(_DWORD *)v57 = v69;
      *(_WORD *)(v57 + 4) = WORD2(v69);
      v69 = 0xFFFFFFFFLL;
    }
    v22 = 0;
    v43 = -1;
LABEL_82:
    if ( v43 != -1 )
    {
      CmpFreeValue(v8, v43);
      v51 = 0LL;
LABEL_84:
      if ( v51 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v73);
    }
LABEL_86:
    v20 = v70;
LABEL_87:
    if ( BugCheckParameter3 != -1 )
    {
      v58 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(
                              v8,
                              BugCheckParameter3,
                              &v73);
      if ( v66 )
      {
        v59 = v66;
        do
        {
          v60 = *v58;
          if ( (_DWORD)v60 != -1 )
            CmpFreeValue(v29, v60);
          ++v58;
          --v59;
        }
        while ( v59 );
      }
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v29 + 16))(v29, &v73);
      HvFreeCell(v29, BugCheckParameter3);
      v8 = v29;
    }
    goto LABEL_94;
  }
LABEL_8:
  v22 = -1073741443;
LABEL_94:
  v27 = v64;
LABEL_95:
  CmpValueEnumStackCleanup(v81);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v69);
  if ( v27 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)v20, v27, 0);
  return (unsigned int)v22;
}
