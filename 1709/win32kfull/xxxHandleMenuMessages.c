/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0203214
 * Callers:
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0205D10 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01CE580 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0202F64 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C020300C (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0205758 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C02057B0 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0205C3C (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0205FA4 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 **a3)
{
  unsigned int v3; // edi
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int16 v14; // ecx^2
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v22; // r12d
  _DWORD *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rax
  ULONG_PTR v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  int v38; // edx
  __int64 MenuStateWindow; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v54; // eax
  __int16 v55; // ecx^2
  __int64 v56; // r8
  __int64 v57; // r9
  ULONG_PTR v58; // r14
  int v59; // r15d
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  ULONG_PTR v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int v81; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v82; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v83; // [rsp+30h] [rbp-D0h]
  __int64 v84; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v85; // [rsp+40h] [rbp-C0h]
  _QWORD v86[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+60h] [rbp-A0h]
  __int64 v89; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v90; // [rsp+78h] [rbp-88h]
  _QWORD v91[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v92[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v93[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v94[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v95[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v96[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v97[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v98[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v99[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v100[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v101[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v102[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v103[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v104[3]; // [rsp+158h] [rbp+58h] BYREF

  v3 = 0;
  v7 = **a3;
  if ( !*(_QWORD *)(v7 + 40) )
    goto LABEL_143;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 16);
  v82 = v7;
  if ( v8 <= 0x105 )
  {
    if ( v8 == 261 )
    {
      if ( v9 == 18 || v9 == 121 )
        goto LABEL_142;
      goto LABEL_55;
    }
    if ( v8 <= 0xA5 )
    {
      if ( v8 != 165 )
      {
        v10 = v8 - 160;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
LABEL_12:
            *(_DWORD *)(a2 + 20) = -1;
            AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v82, (__int64)a3, v7);
            v14 = WORD1(v82);
            *(_DWORD *)(a2 + 12) = (__int16)v82;
            *(_DWORD *)(a2 + 16) = v14;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v100, **a3, v15, v16);
            v17 = xxxMNFindWindowFromPoint(v100, &v81, (unsigned int)v82);
            LODWORD(v83) = IsMFMWFPWindow(v17);
            if ( (_DWORD)v83 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
              v89 = *(_QWORD *)(ThreadWin32Thread + 392);
              *(_QWORD *)(ThreadWin32Thread + 392) = &v89;
              v90 = v17;
              if ( v17 )
                _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
            }
            v22 = v81;
            if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
            {
              *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
              *(_DWORD *)(a2 + 72) = v22;
              LockMFMWFPWindow(a2 + 64, v17);
            }
            if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
              *(_DWORD *)(a2 + 76) = ((v9 & 2) != 0) + 1;
            if ( v17 || v22 )
            {
              if ( (*(_DWORD *)**a3 & 2) != 0 && v17 == 4294967291LL )
              {
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v101, **a3, v19, v20);
                xxxMNSwitchToAlternateMenu(v101, a2);
                v17 = 0xFFFFFFFFLL;
              }
              if ( v17 == 0xFFFFFFFFLL )
              {
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v102, **a3, v19, v20);
                xxxMNButtonDown(v102, a2, v81, 1LL);
                goto LABEL_136;
              }
              if ( (unsigned int)IsMFMWFPWindow(v17) )
              {
                xxxSendMessage(v75);
LABEL_136:
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                  xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
                goto LABEL_138;
              }
            }
LABEL_134:
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
            goto LABEL_138;
          }
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
                goto LABEL_11;
LABEL_132:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a3, a2, (__int64)a3, v7);
              return 0LL;
            }
            goto LABEL_76;
          }
LABEL_96:
          v53 = *(_DWORD *)(a2 + 8);
          if ( (v53 & 8) == 0 )
            goto LABEL_142;
          if ( (v53 & 0x400) != 0 )
          {
            UnlockMFMWFPWindow(a2 + 64);
            v54 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
            *(_DWORD *)(a2 + 8) = v54;
            if ( (v54 & 0x2000) != 0 )
            {
              *(_DWORD *)(a2 + 8) = v54 & 0xFFFFDFF7;
              goto LABEL_142;
            }
          }
          AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v82, (__int64)a3, v7);
          v55 = WORD1(v82);
          *(_DWORD *)(a2 + 12) = (__int16)v82;
          *(_DWORD *)(a2 + 16) = v55;
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v98, **a3, v56, v57);
          v58 = xxxMNFindWindowFromPoint(v98, &v81, (unsigned int)v82);
          LODWORD(v83) = IsMFMWFPWindow(v58);
          v59 = v83;
          if ( (_DWORD)v83 )
          {
            v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, v7);
            v89 = *(_QWORD *)(v60 + 392);
            *(_QWORD *)(v60 + 392) = &v89;
            v90 = v58;
            if ( v58 )
              _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
          }
          v23 = (_DWORD *)**a3;
          if ( (*v23 & 2) != 0 )
          {
            if ( !v58 && !v81 )
              goto LABEL_134;
            if ( v58 == 0xFFFFFFFF )
            {
              if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
                goto LABEL_134;
LABEL_117:
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v99, **a3, (__int64)a3, v7);
              xxxMNButtonUp(v99, a2, v81, 0LL);
              goto LABEL_138;
            }
          }
          else
          {
            if ( !v58 && !v81 && (*(_DWORD *)**a3 & 0x200) == 0 )
            {
              v61 = *(_QWORD *)(**a3 + 16);
              v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, v7);
              v87 = *(_QWORD *)(v62 + 392);
              *(_QWORD *)(v62 + 392) = &v87;
              v88 = v61;
              if ( v61 )
                _InterlockedIncrement((volatile signed __int32 *)(v61 + 8));
              xxxSendMessage(*(_QWORD *)(**a3 + 16));
              ThreadUnlock1(v64, v63);
LABEL_138:
              if ( !(_DWORD)v83 )
                goto LABEL_142;
              goto LABEL_48;
            }
            v23 = (_DWORD *)**a3;
            *v23 &= ~0x200u;
            if ( v58 == 0xFFFFFFFF )
              goto LABEL_117;
          }
          if ( v59 )
            xxxSendMessage(v58);
          else
            *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
          goto LABEL_138;
        }
        goto LABEL_65;
      }
LABEL_95:
      if ( (*(_DWORD *)**a3 & 0x40) == 0 )
      {
        v65 = *(_DWORD *)(a2 + 8);
        if ( (v65 & 8) != 0 )
        {
          if ( (v65 & 0x100) == 0 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          goto LABEL_142;
        }
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v86, 0LL, (__int64)a3, v7);
          v66 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v66 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v86, *(_QWORD *)(v66 + 8));
            if ( *(_QWORD *)v86[0] )
            {
              if ( *(int *)(*(_QWORD *)v86[0] + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v86[0] + 8LL) )
              {
                v70 = *(_QWORD *)(*(_QWORD *)v86[0] + 8LL);
                v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69);
                v104[0] = *(_QWORD *)(v71 + 392);
                *(_QWORD *)(v71 + 392) = v104;
                v104[1] = v70;
                _InterlockedIncrement((volatile signed __int32 *)(v70 + 8));
                xxxSendMessage(*(_QWORD *)(*(_QWORD *)v86[0] + 8LL));
                ThreadUnlock1(v73, v72);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v86, v67, v68, v69);
        }
        goto LABEL_132;
      }
      goto LABEL_96;
    }
    v24 = v8 - 166;
    if ( !v24 )
      goto LABEL_140;
    v25 = v24 - 90;
    if ( !v25 )
    {
LABEL_31:
      v28 = *(_DWORD *)(a2 + 8);
      if ( (v28 & 8) != 0 && v9 != 112 )
      {
        if ( (v28 & 0x80u) != 0 && v9 == 27 )
          *(_DWORD *)(a2 + 8) = v28 | 0x2000;
        goto LABEL_142;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v9 == 3 )
      {
LABEL_45:
        if ( !*(_QWORD *)(**a3 + 56) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v91, **a3, (__int64)a3, v7);
          xxxMNKeyDown(v91, a2, v9);
          goto LABEL_142;
        }
        goto LABEL_46;
      }
      if ( v9 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_141;
      }
      else if ( v9 == 13 || v9 == 18 || v9 == 27 || v9 > 0x24 && (v9 <= 0x28 || v9 == 112 || v9 == 121) )
      {
        goto LABEL_45;
      }
LABEL_55:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0);
      goto LABEL_142;
    }
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_55;
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 != 2 )
        goto LABEL_132;
      goto LABEL_31;
    }
LABEL_74:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v93, **a3, (__int64)a3, v7);
      xxxMNChar(v93, a2, v9);
      goto LABEL_142;
    }
LABEL_46:
    v29 = *(_QWORD *)(**a3 + 56);
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, v7);
    v87 = *(_QWORD *)(v30 + 392);
    *(_QWORD *)(v30 + 392) = &v87;
    v88 = v29;
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v31 = *(_QWORD *)(**a3 + 56);
    goto LABEL_47;
  }
  if ( v8 <= 0x203 )
  {
    if ( v8 == 515 )
    {
LABEL_76:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v82, (__int64)a3, v7);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v94, **a3, v40, v41);
      v44 = xxxMNFindWindowFromPoint(v94, &v81, (unsigned int)v82);
      if ( !v44 && !v81 )
        goto LABEL_141;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v44 == 4294967291LL )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v95, **a3, v42, v43);
        xxxMNSwitchToAlternateMenu(v95, a2);
        v44 = 0xFFFFFFFFLL;
      }
      if ( v44 == 0xFFFFFFFFLL )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v96, **a3, v42, v43);
        xxxMNDoubleClick(a2, v96, v81);
        goto LABEL_142;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v44) )
      {
LABEL_141:
        xxxMNCancel(a2, 0LL, 0LL, 0LL);
        goto LABEL_142;
      }
      v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47);
      v89 = *(_QWORD *)(v48 + 392);
      *(_QWORD *)(v48 + 392) = &v89;
      v90 = v44;
      if ( v44 )
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
      v31 = v44;
LABEL_47:
      xxxSendMessage(v31);
LABEL_48:
      ThreadUnlock1(v23, a2);
LABEL_142:
      v3 = 1;
LABEL_143:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a3, a2, (__int64)a3, v7);
      return v3;
    }
    v32 = v8 - 262;
    if ( v32 )
    {
      v33 = v32 - 18;
      if ( !v33 )
        goto LABEL_142;
      v34 = v33 - 232;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_12;
        if ( v35 != 1 )
          goto LABEL_132;
        goto LABEL_96;
      }
LABEL_65:
      v36 = *(unsigned int *)(a2 + 8);
      if ( (v36 & 0x400) != 0 && (v36 & 8) != 0 && (v36 & 0x80u) == 0LL && (v36 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v84 = *(_QWORD *)(a2 + 56);
          v85 = v84;
          v37 = *(_DWORD *)(gpsi + 2152LL);
          v38 = *(_DWORD *)(gpsi + 2156LL);
          LODWORD(v84) = v84 - v37;
          LODWORD(v85) = v37 + v85;
          HIDWORD(v84) -= v38;
          HIDWORD(v85) += v38;
          LODWORD(v83) = (__int16)v7;
          HIDWORD(v83) = SWORD1(v7);
          if ( !PtInRect(&v84, v83) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v36 | 0x80;
              PostMessage(MenuStateWindow, 500LL, 0LL, 0LL);
            }
          }
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v92, **a3, v36, v7);
      xxxMNMouseMove(v92, a2, (unsigned int)v82);
      goto LABEL_142;
    }
    goto LABEL_74;
  }
  v49 = v8 - 516;
  if ( v49 )
  {
    v50 = v49 - 1;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( !v51 )
        goto LABEL_140;
      v52 = v51 - 60;
      if ( !v52 || v52 == 4 )
      {
        if ( IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16)) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v97, **a3, (__int64)a3, v7);
          if ( !xxxMNFindWindowFromPoint(v97, &v81, (unsigned int)v82) )
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
        }
      }
      goto LABEL_132;
    }
    goto LABEL_95;
  }
LABEL_11:
  if ( (*(_DWORD *)**a3 & 0x40) != 0 )
    goto LABEL_12;
LABEL_140:
  *(_DWORD *)(a2 + 20) = -1;
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v82, (__int64)a3, v7);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v103, **a3, v76, v77);
  if ( !xxxMNFindWindowFromPoint(v103, &v81, (unsigned int)v82) )
    goto LABEL_141;
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a3, v78, v79, v80);
  return 1LL;
}
