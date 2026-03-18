/*
 * XREFs of ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C019EE08 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxMouseKeyButton @ 0x1C01A1D50 (xxxMouseKeyButton.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     RawInputRequestedForMouse @ 0x1C00BD9C8 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C00BD9F0 (FixupPromotedMouseExtraInfoForHook.c)
 *     GetActiveHKL @ 0x1C00C9A9C (GetActiveHKL.c)
 *     PostMove @ 0x1C00CC9B8 (PostMove.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C019C3C4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C019CB40 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C019DB68 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     IsPointerPromotedMouseMessage @ 0x1C01A0894 (IsPointerPromotedMouseMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxButtonEvent(
        __int64 a1,
        struct tagPOINT a2,
        const struct _SUBPIXELS *a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        void *a8,
        struct _MOUSE_INPUT_DATA *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        struct tagUIPI_INFO_INT *a15,
        struct tagUIPI_INFO_INT *a16,
        struct tagINPUT_MESSAGE_SOURCE *a17)
{
  unsigned __int8 v17; // di
  unsigned int v18; // r15d
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  int v22; // eax
  int *v23; // rcx
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // r11d
  int v30; // r9d
  unsigned __int8 v31; // r10
  char v32; // cl
  unsigned __int64 v33; // rax
  int v34; // r10d
  unsigned __int16 v35; // di
  unsigned int v36; // r13d
  int v37; // ebx
  unsigned int v38; // ebx
  unsigned __int64 v39; // rdi
  __int64 v40; // r15
  int v41; // r9d
  __int64 v42; // r10
  int v43; // r11d
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rbx
  __int64 v51; // rdi
  _QWORD *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  struct _MOUSE_INPUT_DATA *v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  int v68; // r11d
  __int64 v69; // r10
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  int v72; // r14d
  struct tagWND **v73; // r8
  __int64 v74; // r14
  __int64 v75; // r12
  unsigned int MonitorFlagsFromWindow; // eax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  struct tagMLIST *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  int v82; // ebx
  int v83; // r15d
  int v84; // r9d
  int v85; // esi
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  struct tagTHREADINFO *v92; // rdx
  __int64 v93; // rbx
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // r8
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  int v99; // r14d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // rsi
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rsi
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 *v114; // rax
  __int64 v115; // rdx
  unsigned __int64 v116; // rcx
  unsigned int *v117; // rax
  int v118; // [rsp+60h] [rbp-A0h]
  int v119; // [rsp+64h] [rbp-9Ch]
  int v120; // [rsp+6Ch] [rbp-94h] BYREF
  int v121; // [rsp+70h] [rbp-90h]
  int v122; // [rsp+74h] [rbp-8Ch]
  struct tagPOINT v123; // [rsp+78h] [rbp-88h] BYREF
  __int64 v124; // [rsp+80h] [rbp-80h] BYREF
  struct tagINPUT_MESSAGE_SOURCE *v125; // [rsp+88h] [rbp-78h]
  struct _SUBPIXELS *v126; // [rsp+90h] [rbp-70h] BYREF
  __int64 v127; // [rsp+98h] [rbp-68h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v129[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagPOINT v130; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-38h]
  __int64 v132; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v133; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v134; // [rsp+E8h] [rbp-18h]
  _QWORD v135[3]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagPOINT v136; // [rsp+108h] [rbp+8h] BYREF
  int v137; // [rsp+110h] [rbp+10h]
  BOOL v138; // [rsp+114h] [rbp+14h]
  int v139; // [rsp+118h] [rbp+18h]
  __int64 v140; // [rsp+120h] [rbp+20h]

  v17 = 0;
  v18 = 0;
  v131 = a6;
  v128 = (__int64)a8;
  v125 = a17;
  v123 = a2;
  v119 = a4;
  v126 = a3;
  v19 = gptiCurrent;
  v122 = a1;
  v124 = (__int64)a9;
  v129[0] = gptiCurrent;
  v20 = *(_QWORD *)(gptiCurrent + 376LL);
  v21 = *(_QWORD *)(v20 + 824);
  v118 = *(_DWORD *)(v20 + 12) >> 31;
  v127 = v21;
  v22 = IsDwmInputThread(a1, a2, a3, a4);
  v23 = (int *)gdwMitConfig;
  if ( v22 )
  {
    if ( (gdwMitConfig & 1) == 0 && a14 )
    {
      v21 = *(_QWORD *)a15;
      v24 = *((_DWORD *)a15 + 2);
      v127 = *(_QWORD *)a15;
      v118 = v24;
    }
    v25 = gptiRit;
  }
  else
  {
    v25 = gptiCurrent;
    a14 = 0;
  }
  if ( gspwndAltTab )
  {
    xxxCancelCoolSwitch();
    if ( !a11 )
    {
      if ( a10 )
      {
        v26 = gpqForeground;
        if ( gpqForeground )
        {
          v27 = *(_QWORD *)(gpqForeground + 380LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v21 <= (unsigned int)v27 )
            {
              if ( (_DWORD)v21 != (_DWORD)v27
                || (v28 = HIDWORD(v27), HIDWORD(v21) != (_DWORD)v28) && HIDWORD(v21) != -1 && (_DWORD)v28 != -1 )
              {
                if ( !v118 )
                  goto LABEL_18;
              }
            }
          }
        }
      }
    }
    v23 = (int *)gdwMitConfig;
  }
  v29 = v122;
  v30 = *v23;
  v121 = v122;
  if ( (v122 & 3) == 0 || (v30 & 1) != 0 )
    goto LABEL_37;
  if ( *(_DWORD *)(gpsi + 1972LL) && (!a9 || SLOBYTE(a9->Flags) >= 0) )
  {
    v29 = v122 ^ 3;
    v122 ^= 3u;
  }
  if ( v29 == 2 )
  {
    v31 = 2;
    v17 = 1;
  }
  else if ( v29 == 1 )
  {
    v31 = 1;
    v17 = 2;
  }
  else
  {
    v31 = 0;
  }
  if ( gbMouseButtonsRecentlySwapped && (!a9 || SLOBYTE(a9->Flags) >= 0) )
  {
    v32 = 2 * (v31 & 3);
    v33 = v31;
    v34 = v119;
    if ( (v119 == 0) == (((unsigned __int8)(1 << v32) & gafAsyncKeyState[v33 >> 2]) != 0)
      && v119 == (((unsigned __int8)(1 << (2 * (v17 & 3))) & gafAsyncKeyState[(unsigned __int64)v17 >> 2]) != 0) )
    {
      v29 ^= 3u;
      v122 = v29;
    }
    gbMouseButtonsRecentlySwapped = 0;
  }
  else
  {
LABEL_37:
    v34 = v119;
  }
  v35 = 0;
  switch ( v29 )
  {
    case 1:
      if ( v34 )
      {
        v36 = 514;
      }
      else if ( a13 )
      {
        v36 = 515;
      }
      else
      {
        v36 = 513;
        v18 = 2;
      }
      break;
    case 2:
      if ( v34 )
        v36 = 517;
      else
        v36 = a13 != 0 ? 518 : 516;
      break;
    case 4:
      if ( v34 )
        v36 = 520;
      else
        v36 = a13 != 0 ? 521 : 519;
      break;
    case 8:
    case 16:
      if ( v34 )
        v36 = 524;
      else
        v36 = a13 != 0 ? 525 : 523;
      if ( v29 == 8 )
        v35 = 1;
      else
        v35 = 2;
      break;
    default:
      return;
  }
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
  {
LABEL_69:
    v37 = a5;
    goto LABEL_70;
  }
  if ( v36 != 513 )
  {
    if ( v36 == 514 )
    {
      v37 = a5;
      if ( !gfStartClickLock )
        goto LABEL_70;
      v38 = a5 - gdwStartClickLockTick;
      if ( v38 > *(_DWORD *)UPDWORDPointer(8200LL) )
        return;
      gfStartClickLock = 0;
    }
    goto LABEL_69;
  }
  if ( gfStartClickLock )
  {
    gfStartClickLock = 0;
    return;
  }
  v37 = a5;
  gdwStartClickLockTick = a5;
  gfStartClickLock = 1;
LABEL_70:
  v39 = (unsigned __int64)v35 << 16;
  v134 = v39;
  v130 = v123;
  v40 = DetermineMouseInputTarget(&v123, v126, v131, v18, 0, 1);
  if ( PhkFirstValid(v25, 14) )
  {
    v136 = v123;
    v137 = v39;
    v138 = a10 != 0;
    v139 = v37;
    v140 = FixupPromotedMouseExtraInfoForHook(v124, a7);
    if ( !v40
      || v40 == *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
      || (v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 376LL) + 824LL),
          v45 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 376LL),
          v46 = *(_QWORD *)(v45 + 824),
          gbEnforceUIPI == v43)
      || (unsigned int)v46 > (unsigned int)v44
      || (_DWORD)v46 == (_DWORD)v44
      && ((v47 = HIDWORD(v46), v48 = HIDWORD(v44), (_DWORD)v47 == (_DWORD)v48) || (_DWORD)v47 == -1 || (_DWORD)v48 == -1)
      || *(_DWORD *)(v45 + 12) < v43 )
    {
      v49 = *(_QWORD *)(gptiCurrent + 1248LL);
      v50 = *(_QWORD *)(gptiCurrent + 1232LL);
      v51 = *(_QWORD *)(gptiCurrent + 1240LL);
      *(_QWORD *)(gptiCurrent + 1248LL) = &v136;
      if ( v40 )
      {
        v52 = *(_QWORD **)(*(_QWORD *)(v40 + 16) + 376LL);
        if ( *v52 == gpepCSRSS )
          *(_QWORD *)(gptiCurrent + 1240LL) = 0x2000LL;
        else
          *(_QWORD *)(gptiCurrent + 1240LL) = v52[103];
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 1240LL) = -1;
        *(_DWORD *)(gptiCurrent + 1244LL) = -1;
      }
      if ( v41 && v118 == v43 )
      {
        *(_QWORD *)(gptiCurrent + 1232LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 1232LL) = -1;
        *(_DWORD *)(gptiCurrent + 1236LL) = -1;
      }
      v132 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v132;
      v133 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      if ( xxxCallHook2(v42, 0, v36, (int *)&v136, &v120) )
      {
        ThreadUnlock1(v54, v53);
        *(_QWORD *)(gptiCurrent + 1232LL) = v50;
        *(_QWORD *)(gptiCurrent + 1240LL) = v51;
        *(_QWORD *)(gptiCurrent + 1248LL) = v49;
        return;
      }
      v55 = ThreadUnlock1(v54, v53);
      v41 = a10;
      v43 = 0;
      *(_QWORD *)(gptiCurrent + 1232LL) = v50;
      v40 = v55;
      v37 = a5;
      *(_QWORD *)(gptiCurrent + 1240LL) = v51;
      *(_QWORD *)(gptiCurrent + 1248LL) = v49;
    }
    if ( a11 == v43 )
    {
      if ( v41 )
      {
        v26 = gpqForeground;
        if ( gpqForeground )
        {
          v56 = *(_QWORD *)(gpqForeground + 380LL);
          if ( gbEnforceUIPI != v43 && (unsigned int)v21 <= (unsigned int)v56 )
          {
            if ( (_DWORD)v21 != (_DWORD)v56
              || (v57 = HIDWORD(v56), HIDWORD(v21) != (_DWORD)v57) && HIDWORD(v21) != -1 && (_DWORD)v57 != -1 )
            {
              if ( v118 == v43 )
              {
LABEL_18:
                EtwTraceUIPIInputError(v19, 0LL, v26, *(_QWORD *)(v26 + 380), 1);
                return;
              }
            }
          }
        }
      }
    }
  }
  if ( v128 && v124 && (unsigned int)RawInputRequestedForMouse() )
    PostRawMouseInput(gpqForeground, v37, v59, v58);
  if ( gpqForeground )
  {
    v60 = *(_QWORD *)(gpqForeground + 72LL);
    v61 = v60 ? *(_QWORD *)(v60 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( (unsigned int)HasHidTable(v61) )
    {
      v62 = *(_QWORD *)(gpqForeground + 72LL);
      v63 = v62 ? *(_QWORD *)(v62 + 16) : *(_QWORD *)(gpqForeground + 56LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 376) + 776LL) + 100LL) & 0x100) != 0 )
      {
        v64 = *(_QWORD *)(gpqForeground + 72LL);
        v65 = v64 ? *(_QWORD *)(v64 + 16) : *(_QWORD *)(gpqForeground + 56LL);
        v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 376) + 776LL) + 64LL);
        if ( v66 )
        {
          UpdateAsyncKeyState(*(_QWORD *)(*(_QWORD *)(v66 + 16) + 384LL));
          return;
        }
      }
    }
  }
  CompositionInputWindowUIOwner = (struct tagWND *)v40;
  if ( v40 )
  {
    v120 = IsPointerPromotedMouseMessage(v36, v125);
    v68 = v120;
    if ( v120 )
    {
      v69 = *(_QWORD *)(v40 + 16);
      v70 = *(_QWORD *)(*(_QWORD *)(v69 + 376) + 824LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v21 <= (unsigned int)v70 )
        {
          if ( (_DWORD)v21 != (_DWORD)v70
            || (v71 = HIDWORD(v70), HIDWORD(v21) != (_DWORD)v71) && HIDWORD(v21) != -1 && (_DWORD)v71 != -1 )
          {
            EtwTraceUIPIInputError(
              gptiCurrent,
              v69,
              *(_QWORD *)(v69 + 384),
              *(_QWORD *)(*(_QWORD *)(v69 + 384) + 380LL),
              1);
            return;
          }
        }
      }
    }
    v72 = v119;
    v124 = (LOWORD(v123.y) << 16) | LOWORD(v123.x);
    if ( (*gpsi & 4) != 0 && !v119 )
    {
      if ( (GetActiveHKL() & 0x3FF) == 0x12 && (*(_BYTE *)(*(_QWORD *)(v40 + 168) + 94LL) & 1) == 0 && gpqForeground )
      {
        FinalizeKoreanImeCompStrOnMouseClick((struct tagWND *)v40);
        v68 = v120;
      }
      else
      {
        v68 = v120;
      }
    }
    v73 = (struct tagWND **)gspwndMouseOwner;
    if ( gspwndMouseOwner )
    {
      if ( v68 )
      {
        v89 = *(_QWORD *)(gspwndMouseOwner + 16LL);
        v90 = *(_QWORD *)(*(_QWORD *)(v89 + 376) + 824LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v21 <= (unsigned int)v90 )
          {
            if ( (_DWORD)v21 != (_DWORD)v90
              || (v91 = HIDWORD(v90), HIDWORD(v21) != (_DWORD)v91) && HIDWORD(v21) != -1 && (_DWORD)v91 != -1 )
            {
              EtwTraceUIPIInputError(
                gptiCurrent,
                v89,
                *(_QWORD *)(v89 + 384),
                *(_QWORD *)(*(_QWORD *)(v89 + 384) + 380LL),
                1);
              return;
            }
          }
        }
      }
      if ( v119 )
      {
        v92 = *(struct tagTHREADINFO **)(v40 + 16);
        if ( v92 != *(struct tagTHREADINFO **)(gspwndMouseOwner + 16LL) )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, v92, 0);
          v73 = (struct tagWND **)gspwndMouseOwner;
        }
      }
      CompositionInputWindowUIOwner = *v73;
      UpdateMouseButtonTarget(*v73, (struct tagWND *)v40, v130, &v123, &v124);
      if ( v119 )
      {
        v83 = 2;
        if ( a12 )
          PostEventMessageEx(
            *((_QWORD *)CompositionInputWindowUIOwner + 2),
            *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
            2u,
            0LL,
            0,
            0LL,
            0LL,
            0LL);
        v82 = v121;
        gwMouseOwnerButton &= ~v121;
        if ( !gwMouseOwnerButton )
          HMAssignmentUnlock(gspwndMouseOwner);
LABEL_165:
        UpdateAsyncKeyState(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL));
        v84 = 0;
        if ( v72 || *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL) == gpqForeground )
        {
          v95 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          v96 = *(_QWORD *)(v95 + 384);
          if ( v96 == gpqForeground )
            goto LABEL_172;
          if ( !a10 )
            goto LABEL_172;
          v107 = *(_QWORD *)(v96 + 380);
          if ( !gbEnforceUIPI )
            goto LABEL_172;
          if ( (unsigned int)v21 > (unsigned int)v107 )
            goto LABEL_172;
          if ( (_DWORD)v21 == (_DWORD)v107 )
          {
            v108 = HIDWORD(v21);
            v109 = HIDWORD(v107);
            if ( (_DWORD)v108 == (_DWORD)v109 || (_DWORD)v108 == -1 || (_DWORD)v109 == -1 )
              goto LABEL_172;
          }
          v85 = v118;
          if ( v118 )
          {
LABEL_173:
            if ( CompositionInputWindowUIOwner
              && (v120 == v84 || (*(_DWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 440LL) & 1) == 0) )
            {
              v86 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL);
              v87 = *(_QWORD *)(v86 + 72);
              v88 = v87 ? *(_QWORD *)(v87 + 16) : *(_QWORD *)(v86 + 56);
              if ( !(unsigned int)HasHidTable(v88)
                || ((v110 = *(_QWORD *)(v86 + 72)) == 0
                  ? (v111 = *(_QWORD *)(v86 + 56))
                  : (v111 = *(_QWORD *)(v110 + 16)),
                    (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 376) + 776LL) + 100LL) & 2) == 0) )
              {
                if ( (*(_DWORD *)(v86 + 340) & 0x20) != 0 )
                  PostMove((struct tagQ *)v86, 0);
                v112 = *((_QWORD *)CompositionInputWindowUIOwner + 41);
                if ( v112 )
                {
                  v113 = *(_QWORD *)(v112 + 384);
                  if ( (*(_DWORD *)(v113 + 340) & 0x20) != 0 )
                    PostMove((struct tagQ *)v113, 0);
                }
                if ( !a14 || (v114 = &v127, v85) )
                  v114 = 0LL;
                if ( !a14 || v85 )
                  v83 = 0;
                PostInputMessage(
                  *(struct tagMLIST **)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
                  CompositionInputWindowUIOwner,
                  v36,
                  v134,
                  v124,
                  a5,
                  v131,
                  a7,
                  v83,
                  v125,
                  0LL,
                  (__int64)v114);
                v116 = gptiCurrent;
                v132 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v132;
                v133 = (__int64)CompositionInputWindowUIOwner;
                ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
                if ( !v72 )
                  goto LABEL_278;
                v117 = (unsigned int *)gStickyKeys;
                v115 = (__int64)gMouseKeys;
                if ( (HIDWORD(gStickyKeys) & 1) == 0 )
                {
                  v116 = HIDWORD(gMouseKeys);
                  if ( (v116 & 1) == 0 )
                    goto LABEL_278;
                }
                if ( (HIDWORD(gMouseKeys) & 1) != 0 )
                {
                  gwMKButtonState &= ~(_WORD)v122;
                  v117 = (unsigned int *)gStickyKeys;
                }
                v116 = v117[1];
                if ( (v116 & 1) != 0 )
                  xxxUnlatchStickyKeys();
                if ( a10
                  && gpqForeground
                  && (v116 = *(_QWORD *)(gpqForeground + 380LL), gbEnforceUIPI)
                  && (unsigned int)v127 <= (unsigned int)v116
                  && ((_DWORD)v127 != (_DWORD)v116
                   || (v116 >>= 32, HIDWORD(v127) != (_DWORD)v116)
                   && (v115 = 0xFFFFFFFFLL, HIDWORD(v127) != -1)
                   && (_DWORD)v116 != -1)
                  && !v85 )
                {
                  EtwTraceUIPIInputError(v19, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                }
                else
                {
LABEL_278:
                  if ( v36 == 513 )
                  {
                    v116 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 408LL);
                    if ( v116 )
                    {
                      if ( *(_QWORD *)(v116 + 40) )
                      {
                        if ( (unsigned int)IsHungWindow((__int64)CompositionInputWindowUIOwner) )
                          ProcessHungWindow((__int64)CompositionInputWindowUIOwner);
                      }
                    }
                  }
                }
                ThreadUnlock1(v116, v115);
              }
            }
            return;
          }
        }
        else
        {
          if ( gpqForeground
            && CompositionInputWindowUIOwner == *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
            && ((gwMouseOwnerButton & v82) != 0 || !gwMouseOwnerButton) )
          {
            PostEventMessageEx(*(_QWORD *)(gpqForeground + 56LL), gpqForeground, 2u, 0LL, 0, 0LL, 0LL, 0LL);
            v84 = 0;
LABEL_172:
            v85 = v118;
            goto LABEL_173;
          }
          if ( (gwMouseOwnerButton & v82) == 0 && gwMouseOwnerButton )
            goto LABEL_172;
          v93 = (__int64)CompositionInputWindowUIOwner;
          if ( IsCompositionInputWindow(CompositionInputWindowUIOwner) )
          {
            LOBYTE(v94) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
            if ( v94 )
              CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
          }
          if ( !a10
            || (v95 = *(_QWORD *)(v93 + 16), v96 = *(_QWORD *)(v95 + 384), v97 = *(_QWORD *)(v96 + 380), !gbEnforceUIPI)
            || (unsigned int)v21 > (unsigned int)v97
            || (_DWORD)v21 == (_DWORD)v97
            && ((v98 = HIDWORD(v97), HIDWORD(v21) == (_DWORD)v98) || HIDWORD(v21) == -1 || (_DWORD)v98 == -1)
            || v118 )
          {
            if ( (*(_BYTE *)(GetNonChildAncestor((__int64)CompositionInputWindowUIOwner) + 67) & 8) == 0
              && (*((_BYTE *)CompositionInputWindowUIOwner + 305) & 0x10) == 0 )
            {
              v99 = v84;
              if ( CompositionInputWindowUIOwner != (struct tagWND *)v93 )
              {
                v135[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v135;
                v135[1] = v93;
                v99 = 1;
                ++*(_DWORD *)(v93 + 8);
              }
              v132 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v132;
              v133 = (__int64)CompositionInputWindowUIOwner;
              ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
              xxxSetForegroundWindow2((LARGE_INTEGER *)CompositionInputWindowUIOwner, 0LL, 0, 0);
              ThreadUnlock1(v101, v100);
              if ( v99 == 1 )
                v93 = ThreadUnlock1(v103, v102);
              v84 = 0;
              if ( a10 )
              {
                v26 = gpqForeground;
                if ( gpqForeground )
                {
                  v104 = *(_QWORD *)(gpqForeground + 380LL);
                  if ( gbEnforceUIPI )
                  {
                    if ( (unsigned int)v21 <= (unsigned int)v104 )
                    {
                      if ( (_DWORD)v21 != (_DWORD)v104
                        || (v105 = HIDWORD(v21), v106 = HIDWORD(v104), (_DWORD)v105 != (_DWORD)v106)
                        && (_DWORD)v105 != -1
                        && (_DWORD)v106 != -1 )
                      {
                        if ( !v118 )
                          goto LABEL_18;
                      }
                    }
                  }
                }
              }
              v72 = v119;
            }
            CompositionInputWindowUIOwner = (struct tagWND *)v93;
            goto LABEL_172;
          }
        }
        EtwTraceUIPIInputError(v19, v95, v96, *(_QWORD *)(v96 + 380), 1);
        return;
      }
      goto LABEL_163;
    }
    if ( v119 )
    {
      v82 = v121;
      gwMouseOwnerButton &= ~v121;
      goto LABEL_164;
    }
    if ( gpqForeground )
      v74 = *(_QWORD *)(gpqForeground + 72LL);
    else
      v74 = 0LL;
    if ( !v74 || *(_QWORD *)(*(_QWORD *)(v40 + 16) + 384LL) == *(_QWORD *)(*(_QWORD *)(v74 + 16) + 384LL) )
    {
LABEL_162:
      v129[0] = v73;
      v129[1] = v40;
      HMAssignmentLock(v129);
      v72 = v119;
LABEL_163:
      v82 = v121;
      gwMouseOwnerButton |= v121;
LABEL_164:
      v83 = 2;
      goto LABEL_165;
    }
    v75 = v124;
    if ( (unsigned int)IsWindowDesktopComposed(v74) && ((*(_BYTE *)(v40 + 368) ^ *(_BYTE *)(v74 + 368)) & 0xF) != 0 )
    {
      v128 = ValidateHmonitorNoRip(*(_QWORD *)(v74 + 360));
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v74);
      PhysicalToLogicalDPIPoint(&v126, &v130, MonitorFlagsFromWindow, &v128);
      v75 = (unsigned __int16)v126 | (WORD2(v126) << 16);
    }
    if ( !a10
      || (v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74 + 16) + 384LL) + 380LL), !gbEnforceUIPI)
      || (unsigned int)v21 > (unsigned int)v77
      || (_DWORD)v21 == (_DWORD)v77
      && ((v78 = HIDWORD(v77), HIDWORD(v21) == (_DWORD)v78) || HIDWORD(v21) == -1 || (_DWORD)v78 == -1)
      || v118 )
    {
      v79 = *(struct tagMLIST **)(*(_QWORD *)(v74 + 16) + 384LL);
      PostInputMessage(v79, (InputTransform *)v74, v36, 0LL, v75, 0, 0LL, 0LL, 0, v125, 0LL, 0LL);
      PostInputMessage(v79, (InputTransform *)v74, v36 + 1, 0LL, v75, 0, 0LL, 0LL, 0, v125, 0LL, 0LL);
    }
    v80 = *(_QWORD *)(v74 + 16);
    if ( !*(_QWORD *)(v80 + 592) || (v81 = *(_QWORD *)(v80 + 528)) != 0 && (*(_DWORD *)(v81 + 8) & 1) != 0 )
    {
      v73 = (struct tagWND **)gspwndMouseOwner;
      v19 = v129[0];
      goto LABEL_162;
    }
  }
}
