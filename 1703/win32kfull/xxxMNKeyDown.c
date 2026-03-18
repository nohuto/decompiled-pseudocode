/*
 * XREFs of xxxMNKeyDown @ 0x1C020589C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetSubMenu @ 0x1C00C283C (_GetSubMenu.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0202ACC (-GetMenuInheritedContextHelpId@@YAKV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     LockPopupMenu @ 0x1C0203D60 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C0203E44 (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0204220 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0207828 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C02191CC (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C0219268 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C021936C (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 *a1, __int64 a2, unsigned int a3)
{
  int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rbx
  int MenuInheritedContextHelpId; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 *v16; // rcx
  __int64 v17; // r8
  unsigned int ValidItem; // ebx
  __int64 v19; // r8
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // eax
  _QWORD *v25; // rcx
  _QWORD **v26; // rdx
  _QWORD **v27; // r8
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  BOOL v30; // edx
  __int64 v31; // r10
  __int64 v32; // r8
  int v33; // ecx
  char v34; // cl
  __int64 v35; // r8
  _QWORD *v36; // rdx
  _QWORD *SubMenu; // rax
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // ebx
  _QWORD *v60; // r8
  int v61; // r9d
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  int v67; // eax
  _QWORD *v69; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+38h] [rbp-C8h]
  _QWORD *v71; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v73; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD **v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+68h] [rbp-98h]
  unsigned int v76; // [rsp+6Ch] [rbp-94h]
  unsigned int v77; // [rsp+70h] [rbp-90h]
  _QWORD v78[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int64 v80[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v85; // [rsp+F0h] [rbp-10h]
  _QWORD v86[7]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int64 v88; // [rsp+148h] [rbp+48h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  BOOL v92; // [rsp+158h] [rbp+58h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v72, 0LL);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = a3;
  v76 = a3;
  if ( (v5 & 8) != 0 && a3 != 112 )
  {
    if ( (v5 & 0x80u) != 0 && a3 == 27 )
      *(_DWORD *)(a2 + 8) = v5 | 0x2000;
    goto LABEL_133;
  }
  switch ( a3 )
  {
    case 0xDu:
      v90 = *a1;
      v64 = *(_QWORD *)(*a1 + 40);
      v65 = *(unsigned int *)(*a1 + 80);
      if ( (unsigned int)v65 < *(_DWORD *)(v64 + 68) )
      {
        v66 = *(_QWORD *)(v64 + 96) + 152 * v65;
        v67 = *(_DWORD *)(v66 + 4) & 3;
        if ( *(_QWORD *)(v66 + 16) )
        {
          if ( !v67 )
          {
LABEL_129:
            SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
            v16 = v78;
            goto LABEL_24;
          }
        }
        else if ( !v67 )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
          xxxMNDismissWithNotify(a2, v78, v66, *(_DWORD *)(v90 + 80), 0LL);
          goto LABEL_133;
        }
      }
      goto LABEL_132;
    case 0x12u:
LABEL_15:
      if ( (v5 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      goto LABEL_133;
    case 0x1Bu:
      v60 = (_QWORD *)*a1;
      v61 = *(_DWORD *)*a1;
      if ( (v61 & 1) == 0 )
      {
        v62 = v60[8];
        if ( v60 != (_QWORD *)v62 && (*(_BYTE *)(*(_QWORD *)(v62 + 8) + 71LL) & 0x20) == 0 )
        {
          if ( (v61 & 2) != 0 && v60[4] == v60[1] )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(v80, v62);
            *(_DWORD *)v80[0] &= ~0x400u;
            if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
              xxxMNCancel(a2, 0, 0, 0LL);
            else
              xxxMNCloseHierarchy(v80[0], a2);
            SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v80);
            goto LABEL_133;
          }
          v63 = v60[4];
          v82 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v82;
          v83 = v63;
          if ( v63 )
            ++*(_DWORD *)(v63 + 8);
          v40 = 484;
          v39 = 0;
          goto LABEL_77;
        }
      }
LABEL_132:
      xxxMNCancel(a2, 0, 0, 0LL);
      goto LABEL_133;
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
    {
LABEL_22:
      v15 = *a1;
      v87 = *a1;
      if ( (*(_DWORD *)*a1 & 1) != 0 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v80, v15);
        v16 = v80;
LABEL_24:
        xxxMNOpenHierarchy(v16, a2);
        goto LABEL_133;
      }
      v17 = -1LL;
      if ( a3 != 38 )
        v17 = 1LL;
      ValidItem = MNFindNextValidItem(*(_QWORD *)(v15 + 40), *(unsigned int *)(v15 + 80), v17, 0LL);
      SmartObjStackRef<tagPOPUPMENU>::Init(v80, v87);
      v19 = ValidItem;
LABEL_28:
      xxxMNSelectItem(v80, a2, v19);
      goto LABEL_133;
    }
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 != 112 )
        {
          if ( a3 != 121 )
            goto LABEL_133;
          goto LABEL_15;
        }
        v7 = *a1;
        SmartObjStackRef<tagPOPUPMENU>::Init(v80, *a1);
        v8 = MNGetpItem(v80, *(_DWORD *)(v7 + 80));
        v9 = v8;
        v10 = *(_QWORD *)(*a1 + 8);
        if ( !v10 || !v8 )
          goto LABEL_133;
        v82 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v82;
        v83 = v10;
        ++*(_DWORD *)(v10 + 8);
        SmartObjStackRef<tagPOPUPMENU>::Init(v86, *a1);
        v11 = *a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(v86);
        xxxSendHelpMessage(
          *(_QWORD *)(v11 + 8),
          2,
          *(_DWORD *)(v9 + 8),
          **(_QWORD **)(v11 + 40),
          MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v14, v13);
        goto LABEL_133;
      }
      goto LABEL_22;
    }
  }
  v20 = *a1;
  v21 = 1;
  v22 = *(_DWORD *)*a1;
  LODWORD(v79) = (v22 >> 22) & 1 ^ (*(unsigned __int8 *)(*(_QWORD *)(*a1 + 16) + 66LL) >> 6) & 1;
  if ( (_DWORD)v79 )
  {
    v23 = 39;
    if ( a3 != 37 )
      v23 = 37;
    v6 = v23;
    a3 = v23;
  }
  if ( (v22 & 1) == 0 && v6 == 39 )
  {
    if ( *(_QWORD *)(v20 + 24) )
      goto LABEL_39;
    SmartObjStackRef<tagPOPUPMENU>::Init(v80, v20);
    if ( xxxMNOpenHierarchy(v80, a2) == -1 )
      goto LABEL_133;
    v20 = *a1;
    v22 = *(_DWORD *)*a1;
    if ( (v22 & 0x20) != 0 )
      goto LABEL_133;
  }
  if ( !*(_QWORD *)(v20 + 24) )
  {
    v24 = a3;
    v92 = (v22 & 0x400) != 0;
    goto LABEL_43;
  }
LABEL_39:
  v24 = a3;
  v92 = 1;
  if ( a3 == 37 && (v22 & 1) == 0 )
  {
    xxxMNCloseHierarchy(v20, a2);
    goto LABEL_133;
  }
LABEL_43:
  if ( v72 != v20 )
  {
    if ( v72 )
    {
      v25 = v73;
      v26 = v74;
      if ( (_QWORD **)v73[1] != &v73 || *v74 != &v73 )
        __fastfail(3u);
      *v74 = v73;
      v25[1] = v26;
    }
    v72 = v20;
    if ( v20 )
    {
      v27 = (_QWORD **)(v20 + 88);
      v28 = *v27;
      if ( (_QWORD **)(*v27)[1] != v27 )
        __fastfail(3u);
      v73 = *v27;
      v74 = v27;
      v28[1] = &v73;
      *v27 = &v73;
    }
  }
  v29 = (_QWORD *)*a1;
  v71 = v29;
  v75 = *(_DWORD *)v29;
  v81 = v75 & 2;
  v30 = (v75 & 2) != 0 && v29 == (_QWORD *)v29[8];
  v31 = v29[5];
  v32 = 0xFFFFFFFFLL;
  v69 = (_QWORD *)v31;
  if ( v24 != 37 )
    v32 = 1LL;
  v77 = MNFindItemInColumn(v31, *((unsigned int *)v29 + 20), v32, v30);
  if ( v77 == -1 )
  {
    if ( v81 && v71[4] == v71[1] )
    {
      if ( (_DWORD)v79 )
      {
        v33 = 39;
        if ( a3 != 37 )
          v33 = 37;
        a3 = v33;
      }
      SmartObjStackRef<tagPOPUPMENU>::Init(v80, v71[8]);
      xxxMNKeyDown(v80, a2, a3);
      goto LABEL_133;
    }
    if ( v71 == (_QWORD *)v71[8] )
    {
      v34 = v75;
      if ( (v75 & 1) == 0 )
        goto LABEL_133;
      goto LABEL_69;
    }
    v38 = v71[4];
    v82 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v82;
    v83 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    v39 = v76;
    v40 = 256;
LABEL_77:
    xxxSendMessage(*(_QWORD *)(*a1 + 32), v40, v39, 0);
    goto LABEL_21;
  }
  v34 = v75;
  if ( (v75 & 1) == 0 )
  {
    SmartObjStackRef<tagPOPUPMENU>::Init(v80, (__int64)v71);
    v19 = v77;
    goto LABEL_28;
  }
LABEL_69:
  if ( v77 != -1 )
  {
    v59 = v77;
    goto LABEL_110;
  }
  v35 = v71[1];
  if ( !v35 || (*(_BYTE *)(v35 + 70) & 8) == 0 )
    goto LABEL_104;
  v85 = 0LL;
  v84 = 0LL;
  v36 = (_QWORD *)gptiCurrent;
  v71 = (_QWORD *)gptiCurrent;
  if ( (v34 & 4) != 0 )
  {
    SubMenu = (_QWORD *)GetSubMenu((__int64)v69);
    v36 = v71;
  }
  else
  {
    SubMenu = v69;
  }
  if ( SubMenu )
    *(_QWORD *)&v84 = *SubMenu;
  else
    *(_QWORD *)&v84 = 0LL;
  v82 = v36[46];
  v36[46] = &v82;
  v83 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  xxxSendMessage(*(_QWORD *)(*a1 + 8), 531, v76, (int)&v84);
  ThreadUnlock1(v42, v41);
  v43 = HMValidateHandleNoSecure(v85, 1);
  v88 = v43;
  if ( !v43
    || *(_QWORD **)(v43 + 16) != v71
    || (v44 = HMValidateHandleNoRip(*((__int64 *)&v84 + 1), 2), (v69 = (_QWORD *)v44) == 0LL) )
  {
LABEL_104:
    SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
    if ( !(unsigned int)xxxMNSwitchToAlternateMenu(v78, a2) )
      goto LABEL_133;
    if ( a3 != 39 )
      v21 = -1;
    v59 = MNFindNextValidItem(*(_QWORD *)(*a1 + 40), 0xFFFFFFFFLL, v21, 0LL);
    if ( v59 == -1 )
      goto LABEL_133;
    goto LABEL_110;
  }
  v86[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v86;
  v86[1] = v44;
  ++*(_DWORD *)(v44 + 8);
  v80[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v80;
  v80[1] = v88;
  ++*(_DWORD *)(v88 + 8);
  v45 = v92;
  if ( (*(_BYTE *)(v88 + 71) & 0x20) != 0 )
    v45 = 1;
  v92 = v45;
  SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
  xxxMNSelectItem(v78, a2, 0xFFFFFFFFLL);
  *(_DWORD *)(a2 + 8) |= 2u;
  v46 = *a1;
  SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
  UnlockPopupMenu(v78, (struct tagMENU **)(v46 + 48));
  *(_DWORD *)*a1 &= ~0x80u;
  v47 = *(_QWORD *)(v88 + 200);
  v79 = v47;
  if ( v47 )
  {
    v48 = GetSubMenu(v47);
    v49 = (__int64)v69;
    if ( (_QWORD *)v48 == v69 )
      goto LABEL_96;
  }
  else
  {
    v49 = (__int64)v69;
  }
  v79 = v49;
LABEL_96:
  v50 = *a1;
  SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
  UnlockPopupMenu(v78, (struct tagMENU **)(v50 + 40));
  v69 = (_QWORD *)(*a1 + 8);
  v70 = v88;
  HMAssignmentLock(&v69);
  v51 = *a1;
  v70 = v88;
  v69 = (_QWORD *)(v51 + 16);
  HMAssignmentLock(&v69);
  v52 = *a1;
  SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
  LockPopupMenu(v78, (struct tagMENU **)(v52 + 40), v79);
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
  {
    *(_DWORD *)(v71[48] + 340LL) &= ~0x100000u;
    SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
    xxxMNSetCapture(v78, a2);
  }
  v55 = v88;
  if ( (*(_BYTE *)(v88 + 71) & 0x40) == 0 )
  {
    v56 = *a1;
    v89 = *a1;
    v54 = *(_QWORD *)(*a1 + 40);
    if ( v54 )
    {
      if ( *(_QWORD *)(v55 + 208) == v54 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v78, v56);
        LockPopupMenu(v78, (struct tagMENU **)(v89 + 48), *(_QWORD *)(v55 + 200));
        *(_DWORD *)(a2 + 8) &= ~2u;
      }
      else
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v78, v56);
        LockPopupMenu(v78, (struct tagMENU **)(v89 + 48), *(_QWORD *)(v55 + 208));
      }
    }
  }
  ThreadUnlock1(v54, v53);
  ThreadUnlock1(v58, v57);
  *(_DWORD *)*a1 ^= (*(_DWORD *)*a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  v59 = 0;
LABEL_110:
  if ( *(_QWORD *)(v72 + 24) )
    xxxMNCloseHierarchy(v72, a2);
  SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a1);
  xxxMNSelectItem(v78, a2, v59);
  if ( v92 )
    goto LABEL_129;
LABEL_133:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v72);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
