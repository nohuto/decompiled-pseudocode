/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0057CAC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C0057E40 (PWInsertAfter.c)
 *     UnlinkWindow @ 0x1C0062338 (UnlinkWindow.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068128 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0068964 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x1C0072A88 (GreClientRgnUpdated.c)
 *     zzzCalcStartCursorHide @ 0x1C0089210 (zzzCalcStartCursorHide.c)
 *     DecomposeWindowIfNeeded @ 0x1C008A3AC (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E6868 (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00E7558 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     OffsetChildren @ 0x1C00FDC68 (OffsetChildren.c)
 *     IsSmallerThanScreen @ 0x1C0115C10 (IsSmallerThanScreen.c)
 *     SetOldRedirectionBitmap @ 0x1C011C068 (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     InvalidateGDIWindows @ 0x1C01C5894 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  __int64 v2; // rbx
  struct tagWND *v3; // r14
  unsigned int v4; // r13d
  struct tagSMWP *v5; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 *v14; // rsi
  int v15; // r12d
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r12d
  int v25; // r15d
  int v26; // ecx
  int v27; // edx
  int v28; // r10d
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  unsigned int v32; // r13d
  int v33; // edx
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r9
  __int128 v37; // xmm0
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  BOOL v41; // r14d
  int v42; // eax
  char v43; // bl
  char v44; // bl
  int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rbx
  int v48; // eax
  int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  bool v52; // zf
  unsigned int v53; // r14d
  int v54; // ebx
  int v55; // eax
  __int64 v56; // rdx
  int v57; // ecx
  int v58; // r13d
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // ecx
  __int64 v66; // rbx
  BOOL v67; // eax
  struct tagRECT *v68; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *v70; // r14
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 *v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  int v77; // edx
  int v78; // ebx
  int v79; // eax
  __int64 i; // rbx
  __int64 v81; // rdx
  int v83; // eax
  int v84; // ecx
  int updated; // [rsp+60h] [rbp-A0h]
  int v86; // [rsp+64h] [rbp-9Ch]
  unsigned int v87; // [rsp+68h] [rbp-98h]
  unsigned int v88; // [rsp+6Ch] [rbp-94h]
  int v89; // [rsp+70h] [rbp-90h]
  int v90; // [rsp+74h] [rbp-8Ch]
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  __int64 v94; // [rsp+98h] [rbp-68h]
  struct tagSIZE v95; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v96; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-50h] BYREF
  int v98; // [rsp+B8h] [rbp-48h]
  int v99; // [rsp+BCh] [rbp-44h]
  char v100[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v101[8]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v102[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v103[3]; // [rsp+E8h] [rbp-18h] BYREF
  char v104[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v105; // [rsp+110h] [rbp+10h] BYREF
  __int64 v106; // [rsp+118h] [rbp+18h]
  struct tagRECT v107; // [rsp+120h] [rbp+20h] BYREF
  __int128 v108; // [rsp+130h] [rbp+30h] BYREF
  __int128 v109; // [rsp+140h] [rbp+40h]

  v2 = 0LL;
  v3 = a1;
  updated = 0;
  v90 = 0;
  v4 = 0;
  v5 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v101);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v102[0] = *(_QWORD *)(v2 + 392);
  *(_QWORD *)(v2 + 392) = v102;
  v102[1] = v3;
  _InterlockedAdd((volatile signed __int32 *)v3 + 2, 1u);
  v14 = (__int64 *)*((_QWORD *)v5 + 5);
  v15 = *((_DWORD *)v5 + 7) - 1;
  v86 = v15;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      v12 = *v14;
      v88 = 0;
      v16 = 0;
      v89 = 0;
      if ( *v14 )
      {
        LOBYTE(v11) = 1;
        v17 = HMValidateHandleNoSecure(v12, v11);
        v19 = 0LL;
        v20 = v17;
        if ( !v17 || (v21 = IsStillWindowC((HWND)v14[1]), v19 = 0LL, !v21) )
        {
          *((_DWORD *)v14 + 8) = 6159;
          *v14 = 0LL;
        }
        v12 = v14[4] & 0x18E7;
        if ( (_DWORD)v12 == 6151 )
        {
          *((_DWORD *)v14 + 8) |= 8u;
        }
        else
        {
          if ( (_DWORD)v12 != 6147
            || (*(_BYTE *)(v20 + 59) & 4) != 0
            || (v22 = ValidateZorder((struct tagCVR *)v14), v19 = 0LL, !v22) )
          {
            v23 = 6147LL;
            if ( (v14[4] & 0x1803) != 0x1803 )
            {
              if ( ((*(_BYTE *)(v20 + 67) & 0x20) != 0 || (*(_BYTE *)(v20 + 66) & 8) != 0)
                && (v24 = *(_DWORD *)(v20 + 136) - *(_DWORD *)(v20 + 128),
                    v25 = *(_DWORD *)(v20 + 140) - *(_DWORD *)(v20 + 132),
                    __PAIR64__(v25, v24) != v14[3]) )
              {
                v16 = 1;
                v89 = 1;
              }
              else
              {
                v25 = 0;
                v24 = 0;
              }
              v26 = *((_DWORD *)v14 + 4);
              if ( *(_DWORD *)(v20 + 128) != v26 || *(_DWORD *)(v20 + 132) != *((_DWORD *)v14 + 5) )
                v88 = 1;
              *(_DWORD *)(v20 + 128) = v26;
              *(_DWORD *)(v20 + 132) = *((_DWORD *)v14 + 5);
              if ( v3 != (struct tagWND *)GetDesktopWindow(v20) )
              {
                *(_DWORD *)(v20 + 128) += *((_DWORD *)v3 + 36);
                *(_DWORD *)(v20 + 132) += *((_DWORD *)v3 + 37);
              }
              v29 = *(_DWORD *)(v20 + 132);
              v30 = *(_DWORD *)(v20 + 128);
              v31 = v30 + *((_DWORD *)v14 + 6);
              v87 = v29 - v28;
              *(_DWORD *)(v20 + 136) = v31;
              v32 = v30 - v27;
              v33 = v29 + *((_DWORD *)v14 + 7);
              if ( v31 < v30 )
                v31 = v30;
              *(_DWORD *)(v20 + 136) = v31;
              if ( v33 < v29 )
                v33 = v29;
              *(_DWORD *)(v20 + 140) = v33;
              if ( v20 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 288LL) )
              {
                if ( v3 != (struct tagWND *)GetDesktopWindow(v20) )
                {
                  v34 -= *((_DWORD *)v3 + 36);
                  v35 -= *((_DWORD *)v3 + 37);
                }
                if ( v34 | v35 )
                {
                  *(_DWORD *)(v36 + 308) += v34;
                  *(_DWORD *)(v36 + 312) += v35;
                }
              }
              v37 = *(_OWORD *)(v20 + 144);
              *(_DWORD *)(v20 + 144) = *((_DWORD *)v14 + 10);
              v38 = *((_DWORD *)v14 + 11);
              v109 = v37;
              *(_DWORD *)(v20 + 148) = v38;
              if ( v3 != (struct tagWND *)GetDesktopWindow(v20) )
              {
                *(_DWORD *)(v20 + 144) += *((_DWORD *)v3 + 36);
                *(_DWORD *)(v20 + 148) += *((_DWORD *)v3 + 37);
              }
              v39 = v109;
              *(_DWORD *)(v20 + 152) = *(_DWORD *)(v20 + 144) + *((_DWORD *)v14 + 12);
              *(_DWORD *)(v20 + 156) = *(_DWORD *)(v20 + 148) + *((_DWORD *)v14 + 13);
              v40 = v39 - *(_QWORD *)(v20 + 144);
              if ( !v40 )
                v40 = *((_QWORD *)&v109 + 1) - *(_QWORD *)(v20 + 152);
              v19 = 0LL;
              v94 = 0LL;
              v41 = v40 == 0;
              if ( (*(_BYTE *)(v20 + 61) & 8) != 0 )
              {
                v42 = IsSmallerThanScreen((struct tagWND *)v20);
                v19 = 0LL;
                if ( v42 || *(_QWORD *)(v20 + 216) != v94 )
                {
                  SelectWindowRgn((struct tagWND *)v20);
                  v19 = 0LL;
                }
              }
              if ( v16 )
              {
                *((_DWORD *)v14 + 39) |= 1u;
                if ( (*(_BYTE *)(v20 + 67) & 0x20) == 0 || (v43 = *(_BYTE *)(v20 + 66), (v43 & 0x20) != 0) )
                {
                  v49 = IsWindowDesktopComposed(v20);
                  v19 = 0LL;
                  if ( v49 )
                  {
                    v95.cx = *(_DWORD *)(v20 + 136) - *(_DWORD *)(v20 + 128);
                    v95.cy = *(_DWORD *)(v20 + 140) - *(_DWORD *)(v20 + 132);
                    updated = UpdateSprite(
                                *(HDEV *)(gpDispInfo + 32LL),
                                (struct tagWND *)v20,
                                0LL,
                                &v95,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL);
LABEL_58:
                    v19 = 0LL;
                  }
                }
                else
                {
                  v44 = v43 & 8;
                  v93 = 0LL;
                  v45 = RecreateRedirectionBitmap(
                          (struct tagWND *)v20,
                          0,
                          (unsigned __int64)&v93 & -(__int64)(v44 != 0));
                  v19 = 0LL;
                  updated = v45;
                  if ( v44 && v45 >= 0 )
                  {
                    v47 = v93;
                    if ( v93 )
                    {
                      v48 = SetOldRedirectionBitmap(v20, v93, v46, 0LL);
                      v19 = 0LL;
                      if ( v48 )
                      {
                        v47 = 0LL;
                        v93 = 0LL;
                      }
                    }
                    else
                    {
                      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v100);
                      xxxInternalInvalidate((struct tagWND *)v20, (HRGN)1, 0x401u);
                      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v100);
                      v19 = 0LL;
                    }
                  }
                  else
                  {
                    v47 = v93;
                  }
                  if ( v47 )
                  {
                    DeleteOrSetRedirectionBitmap(v20, v47, 1LL);
                    goto LABEL_58;
                  }
                }
              }
              v18 = v87;
              if ( v32 || v87 )
              {
                v50 = *(_QWORD *)(v20 + 216);
                if ( v50 > 1 && (*(_BYTE *)(v20 + 61) & 8) == 0 )
                {
                  GreOffsetRgn(v50, v32, v87);
                  v19 = 0LL;
                }
              }
              v11 = *((unsigned int *)v14 + 18);
              if ( v14[9] )
              {
                v51 = *(_QWORD *)(v20 + 176);
                if ( v51 > 1 )
                  GreOffsetRgn(v51, v11, *((unsigned int *)v14 + 19));
                OffsetChildren(v20, *((_DWORD *)v14 + 18), *((_DWORD *)v14 + 19), 0, 0);
                v19 = 0LL;
              }
              v23 = v88;
              if ( v88 )
              {
                v53 = v87;
                goto LABEL_74;
              }
              v52 = !v41;
              v53 = v87;
              if ( !v52 && !v32 && !v87 )
                goto LABEL_88;
LABEL_74:
              v54 = 0;
              v96 = *(struct tagPOINT *)(v20 + 128);
              v105 = 0LL;
              v106 = 0LL;
              if ( !v88 )
                goto LABEL_85;
              v55 = *(_DWORD *)(v20 + 304);
              if ( (v55 & 0x8000) != 0 )
              {
                v56 = *(_QWORD *)v20;
                *(_DWORD *)(v20 + 304) = v55 & 0xFFFF7FFF;
                PostShellHookMessagesEx(0x36u, v56, 0LL);
                v19 = 0LL;
              }
              if ( (*(_BYTE *)(v20 + 66) & 8) != 0 )
              {
                if ( v89 )
                {
                  v57 = *(_DWORD *)(v20 + 136) - *(_DWORD *)(v20 + 128);
                  v97 = 0LL;
                  v58 = -v32;
                  v98 = v57;
                  v99 = *(_DWORD *)(v20 + 140) - *(_DWORD *)(v20 + 132);
                  LODWORD(v106) = v24 + v58;
                  LODWORD(v105) = v58;
                  HIDWORD(v105) = -v53;
                  HIDWORD(v106) = v25 - v53;
                  IntersectRect(&v105, &v105, &v97);
                  v19 = 0LL;
                }
                if ( gcountPWO )
                {
                  InvalidateGDIWindows(v20, v11, v18);
                  GreClientRgnUpdated(1LL);
                  v19 = 0LL;
                }
                if ( !v89 || (v59 = IsWindowDesktopComposed(v20), v19 = 0LL, v54 = 1, v59) )
                  v54 = 0;
LABEL_85:
                if ( (*(_BYTE *)(v20 + 66) & 8) != 0 )
                {
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 32LL),
                              (struct tagWND *)v20,
                              &v96,
                              0LL,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              (struct tagRECT *)((unsigned __int64)&v105 & -(__int64)(v54 != 0)));
                  v19 = 0LL;
                }
              }
              if ( v88 )
              {
LABEL_89:
                v23 = gptiCurrent;
                if ( (*(_BYTE *)(v20 + 67) & 0x20) != 0 && (*(_BYTE *)(v20 + 66) & 0x20) == 0 )
                {
                  v60 = *(_QWORD *)(gptiCurrent + 648LL);
                  if ( !v60 || (*(_DWORD *)(v60 + 196) & 0x100000) == 0 )
                  {
                    v61 = WindowRedirectionBitmapMatchesMonitorAdapter(v20, v11, v18);
                    v19 = 0LL;
                    if ( !v61 )
                    {
                      *(_DWORD *)(v20 + 304) &= ~0x80000u;
                      RecreateRedirectionBitmap((struct tagWND *)v20, 0, 0LL);
                    }
                  }
                }
              }
              else
              {
LABEL_88:
                if ( v89 )
                  goto LABEL_89;
              }
              v4 = updated;
              v15 = v86;
              v5 = a2;
              v3 = a1;
            }
            if ( (v14[4] & 4) == 0 )
            {
              v62 = v14[1];
              if ( v62 >= 2 && (v62 == 0xFFFF || v62 >= 0xFFFFFFFFFFFFFFFDuLL)
                || !(unsigned int)ValidateWindowPos((struct tagCVR *)v14, v3) )
              {
                *((_DWORD *)v14 + 8) |= 4u;
                SetOrClrWF(0LL, v20, 772LL, 1LL);
              }
              else
              {
                UnlinkWindow((__int64 *)v20, (__int64 *)v3);
                PWInsertAfter(v14[1], v63);
                LinkWindow((struct tagWND *)v20);
                v23 = 1LL;
                ++v90;
                if ( (*(_BYTE *)(v20 + 59) & 4) != 0 )
                {
                  SetOrClrWF(0LL, v20, 772LL, 1LL);
                  *(_BYTE *)(v20 + 64) ^= 8u;
                }
              }
            }
            if ( (*((_DWORD *)v14 + 39) & 0x20) != 0 )
            {
              v64 = ValidateHmonitor(v14[16]);
              v65 = *((_DWORD *)v14 + 39);
              v66 = v64;
              *(_QWORD *)&v107.left = 0LL;
              *(_QWORD *)&v107.right = 0LL;
              if ( (v65 & 0x80u) != 0 )
                v107 = *(struct tagRECT *)(v14 + 17);
              v67 = IsRectEmptyInl(&v107);
              v68 = &v107;
              if ( v67 )
                v68 = 0LL;
              NewMonitor = GetNewMonitor((struct tagWND *)v20, v68);
              if ( NewMonitor && v66 != NewMonitor )
                *((_DWORD *)v14 + 39) ^= (*((_DWORD *)v14 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                                   v20,
                                                                                   NewMonitor,
                                                                                   v14 + 20,
                                                                                   0LL) << 6)) & 0x40;
            }
            v70 = KeGetCurrentThread();
            v71 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v11, v18, v19) )
            {
              v73 = (__int64 *)PsGetThreadWin32Thread(v70);
              if ( v73 )
                v71 = *v73;
            }
            v103[0] = *(_QWORD *)(v71 + 392);
            *(_QWORD *)(v71 + 392) = v103;
            v103[1] = v20;
            _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
            v74 = *((_DWORD *)v14 + 8);
            if ( (v74 & 0x40) != 0 )
            {
              v75 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 400LL);
              if ( (*(_DWORD *)(v75 + 12) & 0x40) != 0 )
                zzzCalcStartCursorHide(v75, 5000LL);
              v76 = SetVisible((struct tagWND *)v20);
              v77 = 3;
              v78 = v76;
              if ( !gdwDeferWinEvent )
                v77 = 1;
              xxxWindowEvent(32770, v20, 0, 0, v77);
              if ( v78 )
              {
                *((_DWORD *)v14 + 39) |= 2u;
                if ( (*(_BYTE *)(v20 + 66) & 8) == 0 )
                {
                  v4 = ComposeWindowIfNeeded((struct tagWND *)v20);
                  updated = v4;
                }
              }
              v79 = IsTrayWindow(v20);
              v72 = *(_WORD *)(v20 + 82) & 0x3FFF;
              if ( (_DWORD)v72 == 682 )
              {
                if ( (*(_BYTE *)(v20 + 56) & 0x40) != 0 )
                {
                  *((_DWORD *)v5 + 6) |= 1u;
                  *((_DWORD *)v14 + 8) |= 0x40000000u;
                }
LABEL_132:
                if ( !v79 )
                {
                  if ( !*(_QWORD *)(v20 + 120) )
                    goto LABEL_134;
LABEL_136:
                  if ( (*(_BYTE *)(v20 + 60) & 0x40) != 0 )
                  {
                    *((_DWORD *)v5 + 6) |= 1u;
                    *((_DWORD *)v14 + 8) |= 0x80000000;
                  }
                }
              }
              else
              {
                if ( (*(_BYTE *)(v20 + 56) & 0x40) != 0 )
                {
                  *((_DWORD *)v5 + 6) |= 1u;
                  *((_DWORD *)v14 + 8) |= 0x40000000u;
                }
                if ( !v79 && !*(_QWORD *)(v20 + 120) )
                {
LABEL_134:
                  if ( (v14[4] & 0x40000000) != 0 )
                    *((_DWORD *)v14 + 39) |= 0x10u;
                  goto LABEL_136;
                }
                *((_DWORD *)v5 + 6) |= 1u;
                *((_DWORD *)v14 + 8) |= 0x10000000u;
                if ( !v79 )
                {
                  *((_DWORD *)v14 + 39) |= 8u;
                  goto LABEL_132;
                }
              }
              if ( (v14[4] & 0x4008) != 8 && (*(_BYTE *)(*(_QWORD *)(v20 + 168) + 101LL) & 8) != 0 )
              {
                v72 = grpdeskRitInput;
                if ( *(_QWORD *)(v20 + 24) == grpdeskRitInput )
                {
                  for ( i = *(_QWORD *)(*(_QWORD *)(v20 + 104) + 112LL); i; i = *(_QWORD *)(i + 88) )
                  {
                    if ( i == v20 )
                    {
                      CreateSpb((struct tagWND *)v20);
                      break;
                    }
                    if ( (*(_BYTE *)(i + 71) & 0x10) != 0 )
                    {
                      v108 = *(_OWORD *)(i + 128);
                      TransformRectBetweenCoordinateSpaces(&v108, &v108, v20, i);
                      if ( (unsigned int)IntersectRect(v104, v20 + 128, &v108) )
                        break;
                    }
                  }
                }
              }
            }
            else if ( (v74 & 0x80u) != 0 )
            {
              v83 = IsTrayWindow(v20);
              if ( (v14[4] & 0x1F) != 0x1F && v83 && (*(_WORD *)(v20 + 82) & 0x3FFF) != 0x2AA )
              {
                *((_DWORD *)v5 + 6) |= 1u;
                *((_DWORD *)v14 + 8) |= 0x20000000u;
              }
              if ( (unsigned int)SetVisible((struct tagWND *)v20) )
                DecomposeWindowIfNeeded((struct tagWND *)v20);
              v84 = 3;
              if ( !gdwDeferWinEvent )
                v84 = 1;
              xxxWindowEvent(32771, v20, 0, 0, v84);
            }
            if ( (*(_BYTE *)(v20 + 71) & 0x10) != 0 )
            {
              v72 = *((unsigned int *)v14 + 8);
              if ( (v72 & 0x8000) != 0 || (*(_BYTE *)(v20 + 61) & 1) == 0 && (v72 & 8) != 0 )
                SetOrClrWF(1LL, v20, 264LL, 1LL);
            }
            v81 = v14[14];
            if ( v81 )
              SelectWindowRgn((struct tagWND *)v20);
            ThreadUnlock1(v72, v81);
            v3 = a1;
            goto LABEL_155;
          }
          *((_DWORD *)v14 + 8) |= 0xCu;
          v12 = v14[12];
          if ( v12 )
          {
            GreDeleteObject(v12);
            v14[12] = 0LL;
          }
        }
      }
LABEL_155:
      v14 += 21;
      v86 = --v15;
      if ( v15 < 0 )
      {
        if ( v90 )
          xxxWindowEvent(32772, (_DWORD)v3, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
        break;
      }
    }
  }
  ThreadUnlock1(v12, v11);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v101);
  return v4;
}
