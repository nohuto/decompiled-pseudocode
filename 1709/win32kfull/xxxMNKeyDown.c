/*
 * XREFs of xxxMNKeyDown @ 0x1C0207450
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     _GetSubMenu @ 0x1C007C554 (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02045E8 (-GetMenuInheritedContextHelpId@@YAKV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C0205900 (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0205C6C (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0209840 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C021A3C4 (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C021A460 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C021A564 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int MenuInheritedContextHelpId; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  unsigned int ValidItem; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  _QWORD *v32; // rcx
  unsigned int v33; // ebx
  unsigned int v34; // eax
  _BOOL8 v35; // r9
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  _QWORD *SubMenu; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // rax
  __int64 *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned int v86; // ebx
  _QWORD *v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdi
  __int64 ThreadWin32Thread; // rax
  int v95; // eax
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  _QWORD v101[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v102; // [rsp+40h] [rbp-C0h]
  __int64 v103; // [rsp+48h] [rbp-B8h]
  __int64 v104; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v105; // [rsp+58h] [rbp-A8h]
  __int64 v106; // [rsp+68h] [rbp-98h]
  __int128 v107; // [rsp+70h] [rbp-90h]
  unsigned __int64 v108; // [rsp+80h] [rbp-80h]
  _QWORD v109[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v110; // [rsp+A0h] [rbp-60h]
  __int128 v111; // [rsp+B0h] [rbp-50h]
  __int64 *v112[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v113[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v114[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v115[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v116[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v117[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v118[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v119[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v120[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v121[2]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v122; // [rsp+160h] [rbp+60h] BYREF
  __int128 v123; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v124[2]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v125[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v126[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v127[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v128[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v129[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v130[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v131[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v132[3]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v133[5]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v134; // [rsp+258h] [rbp+158h]
  BOOL v135; // [rsp+258h] [rbp+158h]
  __int64 v136; // [rsp+258h] [rbp+158h]
  unsigned int v137; // [rsp+260h] [rbp+160h]
  unsigned int v138; // [rsp+268h] [rbp+168h]
  __int64 v139; // [rsp+268h] [rbp+168h]
  __int64 v140; // [rsp+268h] [rbp+168h]

  v137 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v101, 0LL, a3, a4);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = v137;
  LODWORD(v102) = v137;
  if ( (v8 & 8) != 0 && v137 != 112 )
  {
    if ( (v8 & 0x80u) != 0 && v137 == 27 )
      *(_DWORD *)(a2 + 8) = v8 | 0x2000;
    goto LABEL_125;
  }
  switch ( v137 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 68LL) )
      {
        v136 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 96LL) + 152LL * *(unsigned int *)(**a1 + 80);
        v95 = *(_DWORD *)(v136 + 4) & 3;
        if ( *(_QWORD *)(v136 + 16) )
        {
          if ( !v95 )
          {
LABEL_121:
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v130, **a1, v7, v9);
            v26 = v130;
            goto LABEL_24;
          }
        }
        else if ( !v95 )
        {
          v96 = **a1;
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v131, v96, v7, v137);
          xxxMNDismissWithNotify(a2, v131, v136, *(_DWORD *)(v96 + 80), 0LL);
          goto LABEL_125;
        }
      }
      goto LABEL_124;
    case 0x12u:
LABEL_15:
      if ( (v8 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0LL, 0LL);
        if ( v137 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      goto LABEL_125;
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v87 = (_QWORD *)**a1;
        if ( v87 != (_QWORD *)v87[8] && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 71LL) & 0x20) == 0 )
        {
          if ( (*(_DWORD *)**a1 & 2) != 0 )
          {
            v87 = (_QWORD *)**a1;
            if ( v87[4] == v87[1] )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v109, *(_QWORD *)(**a1 + 64), v7, v137);
              **(_DWORD **)v109[0] &= ~0x400u;
              if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
                xxxMNCancel(a2, 0, 0LL, 0LL);
              else
                xxxMNCloseHierarchy(*(_QWORD *)v109[0], a2, v88, v89);
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v109, v90, v91, v92);
              goto LABEL_125;
            }
          }
          v93 = *(_QWORD *)(**a1 + 32);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v87, v7, v137);
          v104 = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = &v104;
          v105 = v93;
          if ( v93 )
            _InterlockedAdd((volatile signed __int32 *)(v93 + 8), 1u);
          goto LABEL_66;
        }
      }
LABEL_124:
      xxxMNCancel(a2, 0, 0LL, 0LL);
      goto LABEL_125;
  }
  if ( v137 != 37 )
  {
    if ( v137 == 38 )
    {
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) != 0 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v114, **a1, 1LL, v137);
        v26 = v114;
LABEL_24:
        xxxMNOpenHierarchy(v26, a2);
        goto LABEL_125;
      }
      v27 = -1;
      if ( v137 != 38 )
        v27 = 1;
      ValidItem = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v27, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v115, **a1, v29, v30);
      v31 = ValidItem;
      v32 = v115;
LABEL_28:
      xxxMNSelectItem(v32, a2, v31);
      goto LABEL_125;
    }
    if ( v137 != 39 )
    {
      if ( v137 != 40 )
      {
        if ( v137 != 112 )
        {
          if ( v137 != 121 )
            goto LABEL_125;
          goto LABEL_15;
        }
        v10 = **a1;
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v112, v10, v7, 112LL);
        v13 = MNGetpItem(v112, *(unsigned int *)(v10 + 80), v11, v12);
        v134 = v13;
        v6 = **a1;
        if ( !*(_QWORD *)(v6 + 8) || !v13 )
          goto LABEL_125;
        v14 = **a1;
        v15 = *(_QWORD *)(v14 + 8);
        v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v7, v9);
        v104 = *(_QWORD *)(v16 + 392);
        *(_QWORD *)(v16 + 392) = &v104;
        v105 = v15;
        _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v113, **a1, v17, v18);
        v19 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(v113, v20, v21, v22);
        xxxSendHelpMessage(
          *(_QWORD *)(v19 + 8),
          2,
          *(_DWORD *)(v134 + 8),
          **(_QWORD **)(v19 + 40),
          MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v25, v24);
        goto LABEL_125;
      }
      goto LABEL_22;
    }
  }
  v33 = 1;
  v7 = 39LL;
  LODWORD(v103) = (*(_DWORD *)**a1 >> 22) & 1 ^ (*(unsigned __int8 *)(*(_QWORD *)(**a1 + 16) + 66LL) >> 6) & 1;
  if ( (_DWORD)v103 )
  {
    v34 = 39;
    if ( v137 != 37 )
      v34 = 37;
    v9 = v34;
    v137 = v34;
  }
  if ( (*(_DWORD *)**a1 & 1) == 0 && (_DWORD)v9 == 39 && !*(_QWORD *)(**a1 + 24) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v116, **a1, 39LL, v9);
    if ( xxxMNOpenHierarchy(v116, a2) == -1 || (*(_DWORD *)**a1 & 0x20) != 0 )
      goto LABEL_125;
  }
  if ( *(_QWORD *)(**a1 + 24) )
  {
    v135 = 1;
    if ( v137 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
    {
      xxxMNCloseHierarchy(**a1, a2, v7, v9);
      goto LABEL_125;
    }
  }
  else
  {
    v135 = (*(_DWORD *)**a1 & 0x400) != 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v101, **a1);
  v35 = (*(_DWORD *)**a1 & 2) != 0 && **a1 == *(_QWORD *)(**a1 + 64);
  v36 = 0xFFFFFFFFLL;
  if ( v137 != 37 )
    v36 = 1LL;
  v37 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v36, v35);
  v7 = 0xFFFFFFFFLL;
  v138 = v37;
  v6 = v37;
  if ( v37 == -1 )
  {
    if ( (*(_DWORD *)**a1 & 2) != 0 )
    {
      v38 = **a1;
      if ( *(_QWORD *)(v38 + 32) == *(_QWORD *)(v38 + 8) )
      {
        if ( (_DWORD)v103 )
        {
          v39 = 39;
          if ( v137 != 37 )
            v39 = 37;
          v137 = v39;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v117, *(_QWORD *)(**a1 + 64), v38, v9);
        xxxMNKeyDown(v117, a2, v137);
        goto LABEL_125;
      }
      v7 = 0xFFFFFFFFLL;
    }
    v6 = **a1;
    if ( v6 == *(_QWORD *)(v6 + 64) )
    {
      if ( (*(_DWORD *)v6 & 1) == 0 )
        goto LABEL_125;
      v6 = 0xFFFFFFFFLL;
      goto LABEL_61;
    }
    v40 = *(_QWORD *)(v6 + 32);
    v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, 0xFFFFFFFFLL, v9);
    v104 = *(_QWORD *)(v41 + 392);
    *(_QWORD *)(v41 + 392) = &v104;
    v105 = v40;
    if ( v40 )
      _InterlockedAdd((volatile signed __int32 *)(v40 + 8), 1u);
LABEL_66:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_21;
  }
LABEL_61:
  if ( (*(_DWORD *)**a1 & 1) == 0 )
  {
    if ( (_DWORD)v6 == -1 )
      goto LABEL_125;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v118, **a1, 0xFFFFFFFFLL, v9);
    v31 = v138;
    v32 = v118;
    goto LABEL_28;
  }
  if ( (_DWORD)v6 != -1 )
  {
    v86 = v37;
    goto LABEL_102;
  }
  v42 = 0LL;
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(**a1 + 8) + 70LL) & 8) == 0 )
    goto LABEL_96;
  v107 = 0LL;
  v108 = 0LL;
  v106 = gptiCurrent;
  v43 = **a1;
  if ( (*(_DWORD *)v43 & 4) != 0 )
    SubMenu = (_QWORD *)GetSubMenu(*(_QWORD *)(v43 + 40));
  else
    SubMenu = *(_QWORD **)(v43 + 40);
  if ( SubMenu )
    *(_QWORD *)&v107 = *SubMenu;
  else
    *(_QWORD *)&v107 = v42;
  v139 = *(_QWORD *)(**a1 + 8);
  v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v42, v9);
  v104 = *(_QWORD *)(v45 + 392);
  *(_QWORD *)(v45 + 392) = &v104;
  v105 = v139;
  if ( v139 )
    _InterlockedAdd((volatile signed __int32 *)(v139 + 8), 1u);
  xxxSendMessage(*(_QWORD *)(**a1 + 8));
  ThreadUnlock1(v47, v46);
  LOBYTE(v48) = 1;
  v51 = HMValidateHandleNoSecure(v108, v48, v49, v50);
  v140 = v51;
  if ( !v51 || *(_QWORD *)(v51 + 16) != v106 || (v103 = HMValidateHandleNoRip(*((__int64 *)&v107 + 1), 2)) == 0 )
  {
LABEL_96:
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v128, **a1, v42, v9);
    if ( !(unsigned int)xxxMNSwitchToAlternateMenu(v128, a2) )
      goto LABEL_125;
    if ( v137 != 39 )
      v33 = -1;
    v86 = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v33, 0LL);
    if ( v86 == -1 )
      goto LABEL_125;
    goto LABEL_102;
  }
  v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v42, v9);
  v132[0] = *(_QWORD *)(v53 + 392);
  *(_QWORD *)(v53 + 392) = v132;
  v132[1] = v103;
  _InterlockedAdd((volatile signed __int32 *)(v103 + 8), 1u);
  v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56);
  v133[0] = *(_QWORD *)(v57 + 392);
  *(_QWORD *)(v57 + 392) = v133;
  v133[1] = v140;
  _InterlockedAdd((volatile signed __int32 *)(v140 + 8), 1u);
  v60 = v135;
  if ( (*(_BYTE *)(v140 + 71) & 0x20) != 0 )
    v60 = 1;
  v135 = v60;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v119, **a1, v58, v59);
  xxxMNSelectItem(v119, a2, 0xFFFFFFFFLL);
  *(_DWORD *)(a2 + 8) |= 2u;
  v61 = **a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v120, v61, v62, v63);
  UnlockPopupMenu(v120, (struct tagMENU **)(v61 + 48), v64, v65);
  v67 = v140;
  *(_DWORD *)**a1 &= ~0x80u;
  v68 = *(_QWORD *)(v140 + 200);
  v102 = v68;
  if ( v68 )
  {
    v69 = GetSubMenu(v68);
    v70 = v103;
    if ( v69 == v103 )
      goto LABEL_88;
  }
  else
  {
    v70 = v103;
  }
  v102 = v70;
LABEL_88:
  v71 = **a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v121, v71, v67, v66);
  UnlockPopupMenu(v121, (struct tagMENU **)(v71 + 40), v72, v73);
  v74 = *a1;
  *((_QWORD *)&v110 + 1) = v140;
  *(_QWORD *)&v110 = *v74 + 8;
  v122 = v110;
  HMAssignmentLock(&v122);
  v75 = *a1;
  *((_QWORD *)&v111 + 1) = v140;
  *(_QWORD *)&v111 = *v75 + 16;
  v123 = v111;
  HMAssignmentLock(&v123);
  v76 = **a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v124, v76, v77, v78);
  LockPopupMenu(v124, (struct tagMENU **)(v76 + 40), v102);
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v106 + 408) + 380LL) &= ~0x100000u;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v125, **a1, v80, v81);
    xxxMNSetCapture(v125, a2);
  }
  v82 = v140;
  if ( (*(_BYTE *)(v140 + 71) & 0x40) == 0 )
  {
    v79 = **a1;
    if ( *(_QWORD *)(v79 + 40) )
    {
      v83 = **a1;
      if ( *(_QWORD *)(v140 + 208) == *(_QWORD *)(v83 + 40) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v126, v83, v80, v81);
        LockPopupMenu(v126, (struct tagMENU **)(v83 + 48), *(_QWORD *)(v140 + 200));
        *(_DWORD *)(a2 + 8) &= ~2u;
      }
      else
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v127, v83, v80, v81);
        LockPopupMenu(v127, (struct tagMENU **)(v83 + 48), *(_QWORD *)(v140 + 208));
      }
    }
  }
  ThreadUnlock1(v79, v82);
  ThreadUnlock1(v85, v84);
  *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  v86 = 0;
LABEL_102:
  if ( *(_QWORD *)(*(_QWORD *)v101[0] + 24LL) )
    xxxMNCloseHierarchy(*(_QWORD *)v101[0], a2, v7, v9);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v129, **a1, v7, v9);
  xxxMNSelectItem(v129, a2, v86);
  if ( v135 )
    goto LABEL_121;
LABEL_125:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v101, v6, v7, v9);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v97, v98, v99);
}
