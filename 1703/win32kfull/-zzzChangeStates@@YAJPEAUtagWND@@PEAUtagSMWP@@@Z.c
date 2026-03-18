/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C001C558 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001FDE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C001FF60 (PWInsertAfter.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     zzzCalcStartCursorHide @ 0x1C0049970 (zzzCalcStartCursorHide.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0064844 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068410 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C009C968 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     SelectWindowRgn @ 0x1C009D0B0 (SelectWindowRgn.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     OffsetChildren @ 0x1C009E97C (OffsetChildren.c)
 *     IsSmallerThanScreen @ 0x1C00C3BE0 (IsSmallerThanScreen.c)
 *     SetOldRedirectionBitmap @ 0x1C0112BF8 (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  unsigned int v2; // r15d
  int v3; // r13d
  struct tagWND *v4; // rbx
  struct tagSMWP *v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // eax
  int v16; // r13d
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r10d
  int v20; // r9d
  int v21; // r8d
  unsigned int v22; // r12d
  int v23; // ecx
  unsigned int v24; // r15d
  __int64 v25; // rdx
  __int128 v26; // xmm0
  int v27; // eax
  int v28; // r11d
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v31; // al
  int v32; // r14d
  unsigned __int64 v33; // rcx
  int v34; // ebx
  int v35; // eax
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rbx
  BOOL v39; // eax
  struct tagRECT *v40; // rdx
  __int64 NewMonitor; // rax
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rdx
  int v46; // eax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  int v50; // eax
  int v51; // ecx
  int v52; // r15d
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // edx
  int v58; // ebx
  int v59; // eax
  __int64 v60; // rbx
  int v61; // eax
  int v62; // ecx
  __int64 v63; // rax
  int v64; // eax
  unsigned __int8 v65; // al
  int v66; // eax
  int v67; // ebx
  int v68; // eax
  HSURF v69; // rbx
  int v70; // eax
  __int64 v71; // rdx
  int v72; // r8d
  __int64 v73; // r9
  int v74; // eax
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v76; // [rsp+64h] [rbp-9Ch]
  int v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+6Ch] [rbp-94h]
  int v79; // [rsp+70h] [rbp-90h]
  int v82; // [rsp+88h] [rbp-78h]
  _BYTE v83[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v84[8]; // [rsp+98h] [rbp-68h] BYREF
  struct tagSIZE v85; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v86; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-50h] BYREF
  int v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+BCh] [rbp-44h]
  _QWORD v90[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v91[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v92[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v93; // [rsp+100h] [rbp+0h] BYREF
  __int64 v94; // [rsp+110h] [rbp+10h] BYREF
  __int64 v95; // [rsp+118h] [rbp+18h]
  struct tagRECT v96; // [rsp+120h] [rbp+20h] BYREF
  __int128 v97; // [rsp+130h] [rbp+30h] BYREF

  v2 = 0;
  updated = 0;
  v3 = 0;
  v76 = 0;
  v83[0] = 0;
  v4 = a1;
  v5 = a2;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v83);
  v6 = 1LL;
  v7 = gptiCurrent;
  v90[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v90;
  ++*((_DWORD *)v4 + 2);
  v8 = *((_QWORD *)v5 + 5);
  v9 = *((_DWORD *)v5 + 7) - 1;
  v77 = v9;
  v90[1] = v4;
  if ( v9 < 0 )
    goto LABEL_58;
  do
  {
    v7 = *(_QWORD *)v8;
    v78 = 0;
    v79 = 0;
    *(_QWORD *)&v93 = 0LL;
    if ( !v7 )
      goto LABEL_55;
    v10 = HMValidateHandleNoSecure(v7, 1);
    v13 = 0LL;
    v14 = v10;
    if ( !v10 || (v15 = IsStillWindowC(*(HWND *)(v8 + 8)), v13 = 0LL, !v15) )
    {
      *(_DWORD *)(v8 + 32) = 6159;
      *(_QWORD *)v8 = 0LL;
    }
    v7 = *(_DWORD *)(v8 + 32) & 0x18E7;
    if ( (_DWORD)v7 == 6151 )
    {
      *(_DWORD *)(v8 + 32) |= 8u;
      goto LABEL_55;
    }
    if ( (_DWORD)v7 == 6147 && (*(_BYTE *)(v14 + 59) & 4) == 0 )
    {
      v50 = ValidateZorder((struct tagCVR *)v8);
      v13 = 0LL;
      if ( v50 )
      {
        *(_DWORD *)(v8 + 32) |= 0xCu;
        v7 = *(_QWORD *)(v8 + 96);
        if ( v7 )
        {
          GreDeleteObject(v7);
          *(_QWORD *)(v8 + 96) = 0LL;
        }
        goto LABEL_55;
      }
    }
    if ( (*(_DWORD *)(v8 + 32) & 0x1803) != 0x1803 )
    {
      if ( (*(_BYTE *)(v14 + 67) & 0x20) == 0 && (*(_BYTE *)(v14 + 66) & 8) == 0
        || (v16 = *(_DWORD *)(v14 + 140) - *(_DWORD *)(v14 + 132),
            v82 = *(_DWORD *)(v14 + 136) - *(_DWORD *)(v14 + 128),
            v82 == *(_DWORD *)(v8 + 24))
        && v16 == *(_DWORD *)(v8 + 28) )
      {
        v16 = DWORD1(v93);
        v82 = v93;
      }
      else
      {
        v78 = 1;
      }
      v17 = *(unsigned int *)(v14 + 128);
      if ( *(_QWORD *)(v14 + 128) != *(_QWORD *)(v8 + 16) )
        v79 = 1;
      *(_DWORD *)(v14 + 128) = *(_DWORD *)(v8 + 16);
      *(_DWORD *)(v14 + 132) = *(_DWORD *)(v8 + 20);
      if ( v4 != (struct tagWND *)GetDesktopWindow(v14, v17) )
      {
        *(_DWORD *)(v14 + 128) += *((_DWORD *)v4 + 36);
        *(_DWORD *)(v14 + 132) += *((_DWORD *)v4 + 37);
      }
      v20 = *(_DWORD *)(v14 + 132);
      v21 = *(_DWORD *)(v14 + 128);
      v22 = v20 - v19;
      v23 = v21 + *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v14 + 136) = v23;
      v24 = v21 - v18;
      v25 = (unsigned int)(v20 + *(_DWORD *)(v8 + 28));
      if ( v23 < v21 )
        v23 = v21;
      *(_DWORD *)(v14 + 136) = v23;
      if ( (int)v25 < v20 )
        v25 = (unsigned int)v20;
      *(_DWORD *)(v14 + 140) = v25;
      if ( v14 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 256LL) )
      {
        if ( v4 != (struct tagWND *)GetDesktopWindow(
                                      v14,
                                      (unsigned int)(*(_DWORD *)(v8 + 72) + *(_DWORD *)(v14 + 144)
                                                                          - *(_DWORD *)(v8 + 40))) )
        {
          v25 = (unsigned int)(v25 - *((_DWORD *)v4 + 36));
          v72 -= *((_DWORD *)v4 + 37);
        }
        if ( (unsigned int)v25 | v72 )
        {
          *(_DWORD *)(v73 + 272) += v25;
          *(_DWORD *)(v73 + 276) += v72;
        }
      }
      v26 = *(_OWORD *)(v14 + 144);
      *(_DWORD *)(v14 + 144) = *(_DWORD *)(v8 + 40);
      v27 = *(_DWORD *)(v8 + 44);
      v93 = v26;
      *(_DWORD *)(v14 + 148) = v27;
      if ( v4 != (struct tagWND *)GetDesktopWindow(v14, v25) )
      {
        *(_DWORD *)(v14 + 144) += *((_DWORD *)v4 + 36);
        *(_DWORD *)(v14 + 148) += *((_DWORD *)v4 + 37);
      }
      v29 = v93;
      *(_DWORD *)(v14 + 152) = *(_DWORD *)(v14 + 144) + *(_DWORD *)(v8 + 48);
      *(_DWORD *)(v14 + 156) = *(_DWORD *)(v14 + 148) + *(_DWORD *)(v8 + 52);
      v30 = v29 - *(_QWORD *)(v14 + 144);
      if ( !v30 )
        v30 = *((_QWORD *)&v93 + 1) - *(_QWORD *)(v14 + 152);
      v31 = *(_BYTE *)(v14 + 61);
      v13 = 0LL;
      *(_QWORD *)&v93 = 0LL;
      v32 = v28 ^ (v30 == 0);
      if ( (v31 & 8) != 0 )
      {
        v74 = IsSmallerThanScreen(v14, &v93);
        v13 = 0LL;
        if ( v74 || *(_QWORD *)(v14 + 216) != (_QWORD)v93 )
        {
          SelectWindowRgn(v14, 0LL, (*(_DWORD *)(v8 + 32) & 8) == 0, 0LL);
          v13 = 0LL;
        }
        v28 = 1;
      }
      if ( !v78 )
      {
LABEL_26:
        if ( v24 || v22 )
        {
          v49 = *(_QWORD *)(v14 + 216);
          if ( v49 > 1 && (*(_BYTE *)(v14 + 61) & 8) == 0 )
          {
            GreOffsetRgn(v49, v24, v22);
            v13 = 0LL;
          }
        }
        v11 = *(unsigned int *)(v8 + 72);
        if ( *(_QWORD *)(v8 + 72) )
        {
          v33 = *(_QWORD *)(v14 + 176);
          if ( v33 > 1 )
            GreOffsetRgn(v33, v11, *(unsigned int *)(v8 + 76));
          OffsetChildren(v14, *(_DWORD *)(v8 + 72), *(_DWORD *)(v8 + 76), 0, 0);
          v13 = 0LL;
        }
        if ( !v79 && !v32 && !v24 && !v22 )
        {
LABEL_88:
          if ( !v78 )
          {
LABEL_39:
            v3 = v76;
            v9 = v77;
            v2 = updated;
            v5 = a2;
            v4 = a1;
            goto LABEL_40;
          }
LABEL_38:
          if ( (*(_BYTE *)(v14 + 67) & 0x20) != 0 && (*(_BYTE *)(v14 + 66) & 0x20) == 0 )
          {
            v63 = *(_QWORD *)(gptiCurrent + 592LL);
            if ( !v63 || (*(_DWORD *)(v63 + 180) & 0x100000) == 0 )
            {
              v64 = WindowRedirectionBitmapMatchesMonitorAdapter(v14);
              v13 = 0LL;
              if ( !v64 )
              {
                *(_DWORD *)(v14 + 304) &= ~0x80000u;
                RecreateRedirectionBitmap((struct tagWND *)v14, 0, 0LL);
              }
            }
          }
          goto LABEL_39;
        }
        v34 = 0;
        v86 = *(struct tagPOINT *)(v14 + 128);
        v94 = 0LL;
        v95 = 0LL;
        if ( v79 )
        {
          v35 = *(_DWORD *)(v14 + 304);
          if ( (v35 & 0x8000) != 0 )
          {
            v71 = *(_QWORD *)v14;
            *(_DWORD *)(v14 + 304) = v35 & 0xFFFF7FFF;
            PostShellHookMessagesEx(0x36u, v71, 0LL);
            v13 = 0LL;
          }
          if ( (*(_BYTE *)(v14 + 66) & 8) == 0 )
          {
LABEL_37:
            if ( v79 )
              goto LABEL_38;
            goto LABEL_88;
          }
          if ( v78 )
          {
            v51 = *(_DWORD *)(v14 + 136) - *(_DWORD *)(v14 + 128);
            v52 = -v24;
            v87 = 0LL;
            v88 = v51;
            v53 = *(_DWORD *)(v14 + 140) - *(_DWORD *)(v14 + 132);
            LODWORD(v95) = v52 + v82;
            v89 = v53;
            LODWORD(v94) = v52;
            HIDWORD(v94) = -v22;
            HIDWORD(v95) = v16 - v22;
            IntersectRect(&v94, &v94, &v87);
            v13 = 0LL;
          }
          if ( gcountPWO )
          {
            InvalidateGDIWindows(v14);
            GreClientRgnUpdated(1LL);
            v13 = 0LL;
          }
          if ( !v78 || (v54 = IsWindowDesktopComposed(v14), v13 = 0LL, v34 = 1, v54) )
            v34 = 0;
        }
        if ( (*(_BYTE *)(v14 + 66) & 8) != 0 )
        {
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 32LL),
                      (struct tagWND *)v14,
                      v12,
                      0LL,
                      &v86,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v94 & -(__int64)(v34 != 0)));
          v13 = 0LL;
        }
        goto LABEL_37;
      }
      *(_DWORD *)(v8 + 156) |= v28;
      if ( (*(_BYTE *)(v14 + 67) & 0x20) != 0 && (v65 = *(_BYTE *)(v14 + 66), (v65 & 0x20) == 0) )
      {
        v67 = v28 & (v65 >> 3);
        *(_QWORD *)&v93 = 0LL;
        v68 = RecreateRedirectionBitmap((struct tagWND *)v14, 0, (unsigned __int64)&v93 & -(__int64)(v67 != 0));
        v13 = 0LL;
        updated = v68;
        if ( v67 && v68 >= 0 )
        {
          v69 = (HSURF)v93;
          if ( (_QWORD)v93 )
          {
            v70 = SetOldRedirectionBitmap(v14, v93);
            v13 = 0LL;
            if ( v70 )
              v69 = 0LL;
          }
          else
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v84);
            xxxInternalInvalidate((struct tagWND *)v14, (HRGN)1, 0x401u);
            v13 = 0LL;
            if ( v84[0] )
              goto LABEL_26;
            --gdwInAtomicOperation;
            UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v84);
            v13 = 0LL;
          }
        }
        else
        {
          v69 = (HSURF)v93;
        }
        if ( !v69 )
          goto LABEL_26;
        DeleteOrSetRedirectionBitmap(v14, v69, 1);
      }
      else
      {
        v66 = IsWindowDesktopComposed(v14);
        v13 = 0LL;
        if ( !v66 )
          goto LABEL_26;
        v85.cx = *(_DWORD *)(v14 + 136) - *(_DWORD *)(v14 + 128);
        v85.cy = *(_DWORD *)(v14 + 140) - *(_DWORD *)(v14 + 132);
        updated = UpdateSprite(
                    *(HDEV *)(gpDispInfo + 32LL),
                    (struct tagWND *)v14,
                    v12,
                    0LL,
                    0LL,
                    &v85,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    0LL);
      }
      v13 = 0LL;
      goto LABEL_26;
    }
LABEL_40:
    if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
    {
      v47 = *(_QWORD *)(v8 + 8);
      if ( v47 >= 2 && (v47 == 0xFFFF || v47 >= 0xFFFFFFFFFFFFFFFDuLL)
        || !(unsigned int)ValidateWindowPos((struct tagCVR *)v8, v4) )
      {
        *(_DWORD *)(v8 + 32) |= 4u;
        SetOrClrWF(0, (_DWORD *)v14, 0x304u, 1);
      }
      else
      {
        UnlinkWindow(v14, (__int64)v4);
        PWInsertAfter(*(_QWORD *)(v8 + 8), v48);
        LinkWindow((struct tagWND *)v14);
        v76 = ++v3;
        if ( (*(_BYTE *)(v14 + 59) & 4) != 0 )
        {
          SetOrClrWF(0, (_DWORD *)v14, 0x304u, 1);
          *(_BYTE *)(v14 + 64) ^= 8u;
        }
      }
    }
    if ( (*(_DWORD *)(v8 + 156) & 0x20) != 0 )
    {
      v36 = ValidateHmonitor(*(_QWORD *)(v8 + 128), v11, v12, v13);
      v37 = *(_DWORD *)(v8 + 156);
      v38 = v36;
      *(_QWORD *)&v96.left = 0LL;
      *(_QWORD *)&v96.right = 0LL;
      if ( (v37 & 0x80u) != 0 )
        v96 = *(struct tagRECT *)(v8 + 136);
      v39 = IsRectEmptyInl(&v96);
      v40 = &v96;
      if ( v39 )
        v40 = 0LL;
      NewMonitor = GetNewMonitor((struct tagWND *)v14, v40, (struct tagRECT *)(v8 + 136));
      if ( NewMonitor && v38 != NewMonitor )
        *(_DWORD *)(v8 + 156) ^= (*(_DWORD *)(v8 + 156) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                           v14,
                                                                           NewMonitor,
                                                                           v8 + 160,
                                                                           0LL) << 6)) & 0x40;
    }
    v42 = gptiCurrent;
    v91[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v91;
    v91[1] = v14;
    ++*(_DWORD *)(v14 + 8);
    v43 = *(_DWORD *)(v8 + 32);
    if ( (v43 & 0x40) != 0 )
    {
      v55 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 376LL);
      if ( (*(_DWORD *)(v55 + 12) & 0x40) != 0 )
        zzzCalcStartCursorHide(v55, 5000);
      v56 = SetVisible((_QWORD *)v14, 9);
      v57 = 3;
      v58 = v56;
      if ( !gdwDeferWinEvent )
        v57 = 1;
      xxxWindowEvent(0x8002u, (__int64 *)v14, 0, 0, v57);
      if ( v58 )
      {
        *(_DWORD *)(v8 + 156) |= 2u;
        if ( (*(_BYTE *)(v14 + 66) & 8) == 0 )
        {
          v2 = ComposeWindowIfNeeded(v14, 0);
          updated = v2;
        }
      }
      v59 = IsTrayWindow(v14);
      v42 = *(_WORD *)(v14 + 82) & 0x3FFF;
      if ( (_DWORD)v42 == 682 )
      {
        if ( (*(_BYTE *)(v14 + 56) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *(_DWORD *)(v8 + 32) |= 0x40000000u;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v14 + 56) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *(_DWORD *)(v8 + 32) |= 0x40000000u;
        }
        if ( !v59 && !*(_QWORD *)(v14 + 120) )
        {
LABEL_105:
          if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
            *(_DWORD *)(v8 + 156) |= 0x10u;
LABEL_107:
          if ( (*(_BYTE *)(v14 + 60) & 0x40) != 0 )
          {
            *((_DWORD *)v5 + 6) |= 1u;
            *(_DWORD *)(v8 + 32) |= 0x80000000;
          }
LABEL_109:
          if ( (*(_DWORD *)(v8 + 32) & 0x4008) != 8 && (*(_BYTE *)(*(_QWORD *)(v14 + 168) + 93LL) & 8) != 0 )
          {
            v42 = grpdeskRitInput;
            if ( *(_QWORD *)(v14 + 24) == grpdeskRitInput )
            {
              v60 = *(_QWORD *)(*(_QWORD *)(v14 + 104) + 112LL);
              if ( v60 )
              {
                while ( v60 != v14 )
                {
                  if ( (*(_BYTE *)(v60 + 71) & 0x10) == 0
                    || (v97 = *(_OWORD *)(v60 + 128),
                        TransformRectBetweenCoordinateSpaces(&v97, &v97, v14, v60),
                        !(unsigned int)IntersectRect(v92, v14 + 128, &v97)) )
                  {
                    v60 = *(_QWORD *)(v60 + 88);
                    if ( v60 )
                      continue;
                  }
                  goto LABEL_51;
                }
                CreateSpb((struct tagWND *)v14);
              }
            }
          }
          goto LABEL_51;
        }
        *((_DWORD *)v5 + 6) |= 1u;
        *(_DWORD *)(v8 + 32) |= 0x10000000u;
        if ( v59 )
          goto LABEL_109;
        *(_DWORD *)(v8 + 156) |= 8u;
      }
      if ( v59 )
        goto LABEL_109;
      if ( *(_QWORD *)(v14 + 120) )
        goto LABEL_107;
      goto LABEL_105;
    }
    if ( (v43 & 0x80u) != 0 )
    {
      v61 = IsTrayWindow(v14);
      if ( (v43 & 0x1F) != 0x1F && v61 && (*(_WORD *)(v14 + 82) & 0x3FFF) != 0x2AA )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *(_DWORD *)(v8 + 32) |= 0x20000000u;
      }
      if ( (unsigned int)SetVisible((_QWORD *)v14, 10) )
        DecomposeWindowIfNeeded((struct tagWND *)v14);
      v62 = 3;
      if ( !gdwDeferWinEvent )
        v62 = 1;
      xxxWindowEvent(0x8003u, (__int64 *)v14, 0, 0, v62);
    }
LABEL_51:
    if ( (*(_BYTE *)(v14 + 71) & 0x10) != 0 )
    {
      v46 = *(_DWORD *)(v8 + 32);
      if ( (v46 & 0x8000) != 0 || (LOBYTE(v42) = ((v46 & 8) != 0) & ~*(_BYTE *)(v14 + 61), (_BYTE)v42) )
        SetOrClrWF(1, (_DWORD *)v14, 0x108u, 1);
    }
    v44 = *(_QWORD *)(v8 + 112);
    if ( v44 )
      SelectWindowRgn(v14, v44, (*(_DWORD *)(v8 + 32) & 8) == 0, v13);
    ThreadUnlock1(v42, v44);
    v4 = a1;
LABEL_55:
    v8 += 168LL;
    v6 = 1LL;
    v77 = --v9;
  }
  while ( v9 >= 0 );
  if ( v3 )
    xxxWindowEvent(0x8004u, (__int64 *)v4, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_58:
  ThreadUnlock1(v7, v6);
  if ( !v83[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v83);
  }
  return v2;
}
