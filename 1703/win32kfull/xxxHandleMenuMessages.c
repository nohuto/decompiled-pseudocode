/*
 * XREFs of xxxHandleMenuMessages @ 0x1C02018C8
 * Callers:
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01CA140 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C020164C (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C02016F4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0203CAC (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0203D04 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C02041F0 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C020451C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0205230 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // r9d
  int v35; // eax
  int v36; // edx
  __int64 MenuStateWindow; // rax
  int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned int v41; // ebx
  __int64 v42; // r10
  __int64 v43; // r10
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // r10
  int v49; // r13d
  unsigned int v50; // ebx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rcx
  _QWORD **v60; // rdx
  _QWORD **v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v68; // ecx
  unsigned int v69; // [rsp+28h] [rbp-59h] BYREF
  __int64 v70; // [rsp+30h] [rbp-51h] BYREF
  __int64 v71; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v72; // [rsp+40h] [rbp-41h] BYREF
  _QWORD **v73; // [rsp+48h] [rbp-39h]
  __int64 v74; // [rsp+58h] [rbp-29h] BYREF
  __int64 v75; // [rsp+60h] [rbp-21h]
  __int64 v76; // [rsp+70h] [rbp-11h] BYREF
  __int64 v77; // [rsp+78h] [rbp-9h]
  _QWORD v78[4]; // [rsp+88h] [rbp+7h] BYREF

  LODWORD(v4) = 0;
  v5 = *a3;
  if ( !*(_QWORD *)(*a3 + 40) )
    goto LABEL_157;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 16);
  v70 = v8;
  if ( v9 <= 0x105 )
  {
    if ( v9 == 261 )
    {
      if ( v10 == 18 || v10 == 121 )
        goto LABEL_156;
      goto LABEL_57;
    }
    if ( v9 <= 0xA5 )
    {
      if ( v9 != 165 )
      {
        v11 = v9 - 160;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
LABEL_12:
            *(_DWORD *)(a2 + 20) = -1;
            AdjustMouseCoordinates(*(struct tagWND **)(*a3 + 16), &v70);
            v15 = v70;
            *(_DWORD *)(a2 + 12) = (__int16)v70;
            *(_DWORD *)(a2 + 16) = SHIWORD(v15);
            SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
            v16 = xxxMNFindWindowFromPoint(&v71, &v69, v15);
            LODWORD(v70) = IsMFMWFPWindow(v16);
            if ( (_DWORD)v70 )
            {
              v76 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v76;
              v77 = v16;
              if ( v16 )
                ++*(_DWORD *)(v16 + 8);
            }
            v17 = v69;
            if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
            {
              *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
              *(_DWORD *)(a2 + 72) = v17;
              LockMFMWFPWindow(a2 + 64, v16);
            }
            if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
              *(_DWORD *)(a2 + 76) = ((v10 & 2) != 0) + 1;
            if ( v16 || v17 )
            {
              if ( (*(_DWORD *)*a3 & 2) != 0 && v16 == 4294967291LL )
              {
                SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a3);
                xxxMNSwitchToAlternateMenu(v78, a2);
                v16 = 0xFFFFFFFFLL;
              }
              if ( v16 == 0xFFFFFFFFLL )
              {
                SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
                xxxMNButtonDown(&v71, a2, v17, 1LL);
                goto LABEL_150;
              }
              if ( (unsigned int)IsMFMWFPWindow(v16) )
              {
                xxxSendMessage(v68, 493, v17, 0);
LABEL_150:
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                  xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
                goto LABEL_152;
              }
            }
LABEL_148:
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
            goto LABEL_152;
          }
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 )
                goto LABEL_11;
LABEL_146:
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a3);
              return 0LL;
            }
            goto LABEL_79;
          }
LABEL_99:
          v44 = *(_DWORD *)(a2 + 8);
          if ( (v44 & 8) == 0 )
            goto LABEL_156;
          if ( (v44 & 0x400) != 0 )
          {
            UnlockMFMWFPWindow(a2 + 64);
            v45 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
            *(_DWORD *)(a2 + 8) = v45;
            if ( (v45 & 0x2000) != 0 )
            {
              v25 = v45 & 0xFFFFDFF7;
LABEL_36:
              *(_DWORD *)(a2 + 8) = v25;
LABEL_156:
              LODWORD(v4) = 1;
LABEL_157:
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a3);
              return (unsigned int)v4;
            }
          }
          AdjustMouseCoordinates(*(struct tagWND **)(*a3 + 16), &v70);
          v46 = v70;
          *(_DWORD *)(a2 + 12) = (__int16)v70;
          *(_DWORD *)(a2 + 16) = SHIWORD(v46);
          SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
          v47 = xxxMNFindWindowFromPoint(&v71, &v69, v46);
          v49 = IsMFMWFPWindow(v47);
          LODWORD(v70) = v49;
          if ( v49 )
          {
            v18 = gptiCurrent;
            v76 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v76;
            v77 = v48;
            if ( v48 )
              ++*(_DWORD *)(v48 + 8);
          }
          v19 = *a3;
          v50 = v69;
          v51 = *(_DWORD *)*a3;
          if ( (v51 & 2) != 0 )
          {
            if ( !v48 && !v69 )
              goto LABEL_148;
            if ( v48 == 0xFFFFFFFFLL )
            {
              if ( (v51 & 0x84) == 0x84 )
                goto LABEL_148;
LABEL_119:
              SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
              xxxMNButtonUp(&v71, a2, v50, 0LL);
              goto LABEL_152;
            }
          }
          else
          {
            if ( !v48 && !v69 && (v51 & 0x200) == 0 )
            {
              v52 = *(_QWORD *)(v19 + 16);
              v74 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v74;
              v75 = v52;
              if ( v52 )
                ++*(_DWORD *)(v52 + 8);
              xxxSendMessage(*(_QWORD *)(*a3 + 16), 486, 0, 0);
              ThreadUnlock1(v54, v53);
LABEL_152:
              if ( !(_DWORD)v70 )
                goto LABEL_156;
              goto LABEL_50;
            }
            *(_DWORD *)v19 = v51 & 0xFFFFFDFF;
            if ( v48 == 0xFFFFFFFFLL )
              goto LABEL_119;
          }
          if ( v49 )
            xxxSendMessage(v48, 495, v50, v46);
          else
            *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
          goto LABEL_152;
        }
        goto LABEL_67;
      }
LABEL_98:
      if ( (*(_DWORD *)v5 & 0x40) != 0 )
        goto LABEL_99;
      v55 = *(_DWORD *)(a2 + 8);
      if ( (v55 & 8) != 0 )
      {
        if ( (v55 & 0x100) == 0 )
          xxxMNRemoveMessage(v9, 0);
        goto LABEL_156;
      }
      if ( v9 != 517 || (*(_DWORD *)v5 & 0x800) != 0 )
        goto LABEL_146;
      SmartObjStackRef<tagPOPUPMENU>::Init(&v71, 0LL);
      v56 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*a3 + 56));
      if ( v56 )
      {
        v57 = *(_QWORD *)(v56 + 8);
        v58 = v71;
        if ( v71 != v57 )
        {
          if ( v71 )
          {
            v59 = v72;
            v60 = v73;
            if ( (_QWORD **)v72[1] != &v72 || *v73 != &v72 )
              __fastfail(3u);
            *v73 = v72;
            v59[1] = v60;
          }
          v71 = v57;
          if ( !v57 )
            goto LABEL_145;
          v61 = (_QWORD **)(v57 + 88);
          v62 = *v61;
          if ( (_QWORD **)(*v61)[1] != v61 )
            __fastfail(3u);
          v72 = *v61;
          v73 = v61;
          v62[1] = &v72;
          *v61 = &v72;
          v58 = v71;
        }
        if ( v58 )
        {
          if ( *(int *)(v58 + 80) >= 0 )
          {
            v63 = *(_QWORD *)(v58 + 8);
            if ( v63 )
            {
              v78[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v78;
              v78[1] = v63;
              ++*(_DWORD *)(v63 + 8);
              v64 = *(__int64 **)(v71 + 40);
              if ( v64 )
                v4 = *v64;
              xxxSendMessage(*(_QWORD *)(v71 + 8), 290, *(_DWORD *)(v71 + 80), v4);
              ThreadUnlock1(v66, v65);
            }
          }
        }
      }
LABEL_145:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v71);
      goto LABEL_146;
    }
    v20 = v9 - 166;
    if ( !v20 )
      goto LABEL_154;
    v21 = v20 - 90;
    if ( !v21 )
    {
LABEL_31:
      v24 = *(_DWORD *)(a2 + 8);
      if ( (v24 & 8) != 0 && v10 != 112 )
      {
        if ( (v24 & 0x80u) == 0 || v10 != 27 )
          goto LABEL_156;
        v25 = v24 | 0x2000;
        goto LABEL_36;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v10 == 3 )
        goto LABEL_46;
      if ( v10 == 9 )
      {
        if ( (*(_DWORD *)*a3 & 1) != 0 && !*(_QWORD *)(*a3 + 56) )
          goto LABEL_155;
      }
      else if ( v10 == 13 || v10 == 18 || v10 == 27 || v10 > 0x24 && (v10 <= 0x28 || v10 == 112 || v10 == 121) )
      {
LABEL_46:
        v26 = *(_QWORD *)(*a3 + 56);
        if ( !v26 )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
          xxxMNKeyDown(&v71, a2, v10);
          goto LABEL_156;
        }
        v74 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v74;
        v75 = v26;
        ++*(_DWORD *)(v26 + 8);
        goto LABEL_48;
      }
LABEL_57:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0);
      goto LABEL_156;
    }
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_57;
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 2 )
        goto LABEL_146;
      goto LABEL_31;
    }
LABEL_76:
    v39 = *(_QWORD *)(v5 + 56);
    if ( !v39 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(&v71, v5);
      xxxMNChar(&v71, a2, v10);
      goto LABEL_156;
    }
    v74 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v74;
    v75 = v39;
    ++*(_DWORD *)(v39 + 8);
LABEL_48:
    v27 = v10;
    v28 = *(_DWORD *)(a1 + 8);
    v29 = *(_QWORD *)(*a3 + 56);
    goto LABEL_49;
  }
  if ( v9 <= 0x203 )
  {
    if ( v9 == 515 )
    {
LABEL_79:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(*a3 + 16), &v70);
      SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
      v40 = xxxMNFindWindowFromPoint(&v71, &v69, (unsigned int)v70);
      v41 = v69;
      v42 = v40;
      if ( !v40 && !v69 )
        goto LABEL_155;
      if ( (*(_DWORD *)*a3 & 2) != 0 && v40 == 4294967291LL )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v78, *a3);
        xxxMNSwitchToAlternateMenu(v78, a2);
        v42 = 0xFFFFFFFFLL;
      }
      if ( v42 == 0xFFFFFFFFLL )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
        xxxMNDoubleClick(a2, &v71, v41);
        goto LABEL_156;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v42) )
      {
LABEL_155:
        xxxMNCancel(a2, 0LL, 0LL, 0LL);
        goto LABEL_156;
      }
      v76 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v76;
      v77 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      v27 = v41;
      v28 = 497;
      LODWORD(v29) = v43;
LABEL_49:
      xxxSendMessage(v29, v28, v27, 0);
LABEL_50:
      ThreadUnlock1(v19, v18);
      goto LABEL_156;
    }
    v30 = v9 - 262;
    if ( v30 )
    {
      v31 = v30 - 18;
      if ( !v31 )
        goto LABEL_156;
      v32 = v31 - 232;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_12;
        if ( v33 != 1 )
          goto LABEL_146;
        goto LABEL_99;
      }
LABEL_67:
      v34 = *(_DWORD *)(a2 + 8);
      if ( (v34 & 0x400) != 0 && (v34 & 8) != 0 && (v34 & 0x80u) == 0 && (v34 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v74 = *(_QWORD *)(a2 + 56);
          v75 = v74;
          v35 = *(_DWORD *)(gpsi + 2152LL);
          v36 = *(_DWORD *)(gpsi + 2156LL);
          LODWORD(v74) = v74 - v35;
          LODWORD(v75) = v35 + v75;
          HIDWORD(v74) -= v36;
          HIDWORD(v75) += v36;
          LODWORD(v70) = (__int16)v8;
          HIDWORD(v70) = SWORD1(v8);
          if ( !PtInRect(&v74, v70) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v38 | 0x80;
              PostMessage(MenuStateWindow, 500LL, 0LL, 0LL);
            }
          }
        }
      }
      SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
      xxxMNMouseMove(&v71, a2, (unsigned int)v8);
      goto LABEL_156;
    }
    goto LABEL_76;
  }
  if ( v9 != 516 )
  {
    if ( v9 != 517 )
    {
      if ( v9 == 518 )
        goto LABEL_154;
      if ( v9 == 578 || v9 == 582 )
      {
        if ( IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16)) )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
          if ( !xxxMNFindWindowFromPoint(&v71, &v69, (unsigned int)v8) )
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
        }
      }
      goto LABEL_146;
    }
    goto LABEL_98;
  }
LABEL_11:
  if ( (*(_DWORD *)v5 & 0x40) != 0 )
    goto LABEL_12;
LABEL_154:
  *(_DWORD *)(a2 + 20) = -1;
  AdjustMouseCoordinates(*(struct tagWND **)(*a3 + 16), &v70);
  SmartObjStackRef<tagPOPUPMENU>::Init(&v71, *a3);
  if ( !xxxMNFindWindowFromPoint(&v71, &v69, (unsigned int)v70) )
    goto LABEL_155;
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a3);
  return 1LL;
}
