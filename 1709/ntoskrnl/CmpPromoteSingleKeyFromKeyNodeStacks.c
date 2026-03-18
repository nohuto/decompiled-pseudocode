/*
 * XREFs of CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4
 * Callers:
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpGetCellContextMove @ 0x1401E446C (HvpGetCellContextMove.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1401E4688 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E46A4 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpCopyCell @ 0x1404767FC (CmpCopyCell.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpCopyValue @ 0x1405A651C (CmpCopyValue.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackAdvance @ 0x14069C39C (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14069C4B0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14069C53C (CmpValueEnumStackInitialize.c)
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
  __int64 v10; // r14
  __int16 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // ebx
  signed int v21; // r9d
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  ULONG_PTR v26; // r14
  __int64 v27; // rax
  __int64 v28; // r9
  char v29; // al
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 *v32; // rbx
  __int64 v33; // rcx
  unsigned __int16 v34; // dx
  int v35; // edx
  unsigned __int16 v36; // cx
  __int64 v37; // rax
  unsigned int v38; // r15d
  unsigned int v39; // r12d
  int v40; // eax
  __int64 (__fastcall **v41)(ULONG_PTR, _QWORD, char *); // r13
  __int64 CurrentValueHive; // rax
  unsigned int v43; // edi
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // edx
  __int16 v47; // dx
  unsigned __int16 v48; // cx
  unsigned __int16 v49; // ax
  int v50; // eax
  unsigned int v51; // edi
  unsigned int v52; // r15d
  char v53; // al
  ULONG_PTR v54; // r13
  unsigned int *v55; // rdi
  __int64 v56; // r14
  ULONG_PTR v57; // rdx
  __int64 v59; // rdi
  unsigned int v60; // r15d
  char v61; // al
  unsigned __int16 v62; // ax
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned int v65; // ecx
  __int64 v66; // rcx
  char v67; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v68; // [rsp+30h] [rbp-D0h]
  unsigned int v69; // [rsp+40h] [rbp-C0h]
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-BCh]
  unsigned int v72; // [rsp+4Ch] [rbp-B4h]
  unsigned int v73; // [rsp+50h] [rbp-B0h]
  __int64 EntryAtLayerHeight; // [rsp+58h] [rbp-A8h]
  int v76; // [rsp+60h] [rbp-A0h]
  unsigned int v77; // [rsp+68h] [rbp-98h] BYREF
  int v78; // [rsp+6Ch] [rbp-94h]
  char v79[8]; // [rsp+70h] [rbp-90h] BYREF
  char v80[8]; // [rsp+78h] [rbp-88h] BYREF
  char v81[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall **v82)(ULONG_PTR, _QWORD, char *); // [rsp+88h] [rbp-78h]
  unsigned int *v83; // [rsp+90h] [rbp-70h]
  __int64 *v84; // [rsp+98h] [rbp-68h]
  ULONG_PTR *v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  _DWORD v87[24]; // [rsp+D0h] [rbp-30h] BYREF

  v83 = a5;
  v8 = 0LL;
  v9 = 0LL;
  v84 = a6;
  v86 = a7;
  v85 = a4;
  HvpGetCellContextReinitialize((__int64)v80);
  v69 = -1;
  v10 = 0LL;
  CmpValueEnumStackInitialize(v87);
  v72 = 0;
  v77 = 0;
  BugCheckParameter3 = -1;
  v78 = -1;
  HvpGetCellContextReinitialize((__int64)v81);
  HvpGetCellContextReinitialize((__int64)v79);
  v11 = *a1;
  v14 = a2;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)*a1, v12, v13);
  v18 = EntryAtLayerHeight;
  if ( v11 < 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v19 = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v15, v16, v17);
    if ( *(_QWORD *)(v19 + 16) )
      break;
    LOWORD(v15) = v15 - 1;
    if ( (v15 & 0x8000u) != 0LL )
      goto LABEL_6;
  }
  v10 = v19;
LABEL_6:
  if ( (_WORD)v15 == v11 )
  {
LABEL_15:
    v25 = *(_DWORD *)(v10 + 8);
  }
  else
  {
    if ( !HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0) )
      goto LABEL_8;
    v21 = *(_DWORD *)(EntryAtLayerHeight + 8);
    if ( v21 >= 0 )
      v22 = *(_DWORD *)(v10 + 8) >> 31;
    else
      v22 = 1;
    LODWORD(v68) = v22;
    v23 = CmpCopyKeyPartial(
            *(_QWORD *)v10,
            *(unsigned int *)(v10 + 8),
            *(_QWORD *)EntryAtLayerHeight,
            v21,
            416,
            v67,
            v68);
    v69 = v23;
    v24 = v23;
    if ( v23 == -1 )
    {
      v20 = -1073741670;
      goto LABEL_68;
    }
    v25 = v23;
    v10 = EntryAtLayerHeight;
  }
  v73 = v25;
  v76 = v25 >> 31;
  v26 = *(_QWORD *)v10;
  v8 = v26;
  v82 = (__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v26 + 8);
  v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v8 + 8))(v8, v25, v80);
  v28 = 0LL;
  v9 = v27;
  if ( !a3 )
  {
    v52 = -1;
    goto LABEL_86;
  }
  if ( *(char *)(v27 + 13) >= 0 )
  {
LABEL_33:
    v20 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v87, v14);
    if ( v20 < 0 )
      goto LABEL_67;
    v38 = 0;
    v39 = 0;
    v40 = CmpValueEnumStackAdvance(v87);
    v28 = 0LL;
    v20 = v40;
    if ( v40 >= 0 )
    {
      v41 = v82;
      while ( 1 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)v87);
        if ( CurrentValueHive != v26 )
        {
          v43 = CmpCopyValue(CurrentValueHive, v87[0], v26, v76);
          v20 = CmpAddValueToListEx(v26, v43, v72, 1, &v77, 1);
          if ( v20 < 0 )
          {
            v52 = v78;
            v72 = v77;
            goto LABEL_101;
          }
          v44 = (*v41)(v26, v43, v81);
          v45 = *(_DWORD *)(v44 + 4);
          v46 = v45 + 0x80000000;
          if ( v45 < 0x80000000 )
            v46 = *(_DWORD *)(v44 + 4);
          if ( v46 > v38 )
          {
            v38 = *(_DWORD *)(v44 + 4);
            if ( v45 >= 0x80000000 )
              v38 = v45 + 0x80000000;
          }
          v47 = *(_WORD *)(v44 + 16) & 1;
          v48 = *(_WORD *)(v44 + 2);
          v49 = v48;
          if ( v47 )
            v49 = 2 * v48;
          if ( v49 > v39 )
          {
            if ( v47 )
              v48 *= 2;
            v39 = v48;
          }
          (*(void (__fastcall **)(ULONG_PTR, char *))(v26 + 16))(v26, v81);
          v72 = v77;
        }
        v50 = CmpValueEnumStackAdvance(v87);
        v28 = 0LL;
        v20 = v50;
        if ( v50 < 0 )
        {
          v51 = v78;
          BugCheckParameter3 = v78;
          goto LABEL_54;
        }
      }
    }
    v51 = -1;
LABEL_54:
    if ( v20 != -2147483622 )
    {
LABEL_58:
      v52 = BugCheckParameter3;
      goto LABEL_59;
    }
    if ( v72 )
    {
      v53 = HvpMarkCellDirty(v26, v73, 0);
      v28 = 0LL;
      if ( v53 && (!*(_DWORD *)(v9 + 36) || HvpMarkCellDirty(v26, *(unsigned int *)(v9 + 40), 0)) )
      {
        if ( *(_DWORD *)(v9 + 60) < v39 )
          *(_DWORD *)(v9 + 60) = v39;
        if ( *(_DWORD *)(v9 + 64) < v38 )
          *(_DWORD *)(v9 + 64) = v38;
        v59 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, __int64))(v26 + 8))(v26, v51, v79, v28);
        v60 = 0;
        while ( 1 )
        {
          v20 = CmpAddValueToListEx(
                  v26,
                  *(_DWORD *)(v59 + 4LL * v60),
                  *(_DWORD *)(v9 + 36),
                  v76,
                  (unsigned int *)(v9 + 36),
                  1);
          if ( v20 < 0 )
            break;
          *(_DWORD *)(v59 + 4LL * v60++) = -1;
          if ( v60 >= v72 )
          {
            (*(void (__fastcall **)(ULONG_PTR, char *))(v26 + 16))(v26, v79);
            HvFreeCell(v26, BugCheckParameter3);
            v28 = 0LL;
            v72 = 0;
            v52 = -1;
            goto LABEL_85;
          }
        }
        v52 = BugCheckParameter3;
        goto LABEL_104;
      }
      v20 = -1073741443;
      goto LABEL_58;
    }
    v52 = BugCheckParameter3;
LABEL_85:
    v25 = v73;
    v18 = EntryAtLayerHeight;
LABEL_86:
    if ( v69 != -1 )
    {
      v61 = CmpAddSubKeyEx(v26, *(unsigned int *)(v18 + 8), v69, 0);
      v28 = 0LL;
      if ( !v61 )
      {
        v20 = -1073741670;
LABEL_60:
        v54 = v26;
        v8 = v26;
        if ( v52 != -1 )
        {
          v55 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, __int64))(v26 + 8))(
                                  v26,
                                  v52,
                                  v79,
                                  v28);
          if ( v72 )
          {
            v56 = v72;
            do
            {
              v57 = *v55;
              if ( (_DWORD)v57 != -1 )
                CmpFreeValue(v54, v57);
              ++v55;
              --v56;
            }
            while ( v56 );
          }
          (*(void (__fastcall **)(ULONG_PTR, char *))(v54 + 16))(v54, v79);
          HvFreeCell(v54, v52);
          v8 = v54;
        }
        goto LABEL_67;
      }
      v62 = *(_WORD *)(v9 + 72);
      if ( (*(_BYTE *)(v9 + 2) & 0x20) != 0 )
        v62 *= 2;
      v63 = *(_QWORD *)(v18 + 16);
      if ( (unsigned __int16)*(_DWORD *)(v63 + 52) < (unsigned int)v62 )
        *(_WORD *)(v63 + 52) = v62;
      v64 = *(_QWORD *)(v18 + 16);
      v65 = *(unsigned __int16 *)(v9 + 74);
      if ( *(_DWORD *)(v64 + 56) < v65 )
        *(_DWORD *)(v64 + 56) = v65;
      v69 = -1;
    }
    if ( v83 )
      *v83 = v25;
    if ( v84 )
    {
      v66 = v86;
      *v84 = v9;
      *v85 = v26;
      HvpGetCellContextMove(v66, (__int64)v80);
      v9 = v28;
    }
    v20 = v28;
    v43 = -1;
LABEL_101:
    if ( v43 != -1 )
    {
      CmpFreeValue(v26, v43);
      v28 = 0LL;
      v59 = 0LL;
LABEL_104:
      if ( v59 )
        (*(void (__fastcall **)(ULONG_PTR, char *))(v26 + 16))(v26, v79);
    }
LABEL_59:
    v18 = EntryAtLayerHeight;
    goto LABEL_60;
  }
  v29 = HvpMarkCellDirty(v26, v25, 0);
  v31 = 0LL;
  if ( v29 )
  {
    do
    {
      if ( --v11 < 0 )
        goto LABEL_32;
      v32 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(v14, (unsigned __int16)v11, v31, v30);
      v33 = v32[2];
    }
    while ( !v33 || *(char *)(v33 + 13) < (char)v31 );
    v34 = *(_WORD *)(v33 + 74);
    if ( v34 )
    {
      if ( (unsigned int)v34 > *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 56LL)
        && !HvpMarkCellDirty(v26, *(unsigned int *)(EntryAtLayerHeight + 8), v31) )
      {
        goto LABEL_8;
      }
      v35 = CmpCopyCell(*v32, *(unsigned int *)(v32[2] + 48), v26, v76);
      if ( v35 == -1 )
      {
        v20 = -1073741670;
        goto LABEL_67;
      }
      v36 = *(_WORD *)(v32[2] + 74);
      *(_WORD *)(v9 + 74) = v36;
      *(_DWORD *)(v9 + 48) = v35;
      if ( v69 == -1 )
      {
        v37 = *(_QWORD *)(EntryAtLayerHeight + 16);
        if ( (unsigned int)v36 > *(_DWORD *)(v37 + 56) )
          *(_DWORD *)(v37 + 56) = v36;
      }
    }
LABEL_32:
    *(_BYTE *)(v9 + 13) &= ~0x80u;
    goto LABEL_33;
  }
LABEL_8:
  v20 = -1073741443;
LABEL_67:
  v24 = v69;
LABEL_68:
  CmpValueEnumStackCleanup(v87);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v8 + 16))(v8, v80);
  if ( v24 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)v18, v24, 0);
  return (unsigned int)v20;
}
