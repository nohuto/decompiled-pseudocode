/*
 * XREFs of xxxMinMaximizeEx @ 0x1C004AB9C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C011A590 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DB798 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C01E9D90 (NtUserMinMaximize.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     SetMinimize @ 0x1C004BB24 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C004BCA4 (ParkIcon.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C004BEA8 (DwmAsyncNotifyAnimationChange.c)
 *     DwmSyncNotifyMinimizing @ 0x1C004BF38 (DwmSyncNotifyMinimizing.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     InternalBeginDeferWindowPos @ 0x1C0066D34 (InternalBeginDeferWindowPos.c)
 *     _DeferWindowPos @ 0x1C0066DC0 (_DeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ClrFTrueVis @ 0x1C0080CAC (ClrFTrueVis.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C8A5C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxFlushPalette @ 0x1C02044E0 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C020E920 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5)
{
  __int64 v6; // r13
  __int64 v8; // r15
  int v9; // r12d
  int v10; // edx
  int v11; // esi
  _OWORD *Prop; // rax
  _OWORD *v13; // rdi
  __int128 v14; // xmm7
  __int128 v15; // xmm6
  __int64 *v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  int v19; // ecx
  __int64 v20; // rcx
  void *v21; // r14
  int v22; // eax
  int v23; // r12d
  __int64 i; // rcx
  char v25; // cl
  int v26; // r14d
  char v27; // cl
  int v28; // r15d
  __int64 j; // rdi
  __int64 DesktopWindow; // rax
  BOOL v31; // edi
  unsigned int v32; // r10d
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // r8
  int v36; // r8d
  __int16 v37; // di
  void *v39; // rax
  void *v40; // rax
  unsigned __int8 v41; // dl
  char v42; // r14
  int v43; // ecx
  int v44; // esi
  __int64 v45; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v47; // r10
  unsigned __int64 v48; // xmm0_8
  int v49; // eax
  char v50; // r8
  int v51; // r9d
  int v52; // ecx
  int v53; // eax
  char v54; // al
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // edi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int128 v68; // xmm6
  int v69; // ecx
  struct tagWND *v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // r8
  __int64 v73; // rdx
  BOOL v74; // [rsp+50h] [rbp-B0h]
  char v75; // [rsp+54h] [rbp-ACh]
  char v76; // [rsp+5Ch] [rbp-A4h]
  __int128 v77; // [rsp+60h] [rbp-A0h]
  int v78; // [rsp+74h] [rbp-8Ch]
  BOOL v79; // [rsp+7Ch] [rbp-84h]
  int v80; // [rsp+84h] [rbp-7Ch]
  int v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h]
  int v83; // [rsp+90h] [rbp-70h]
  int v84; // [rsp+94h] [rbp-6Ch]
  int v85; // [rsp+98h] [rbp-68h]
  __int64 v86; // [rsp+A0h] [rbp-60h]
  _QWORD v87[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v88[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v89[16]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v90; // [rsp+100h] [rbp+0h] BYREF
  int v91; // [rsp+110h] [rbp+10h] BYREF
  int v92; // [rsp+118h] [rbp+18h]
  _QWORD v93[5]; // [rsp+120h] [rbp+20h] BYREF

  v76 = a3;
  v6 = a2;
  *(_QWORD *)&v90.left = a4;
  v77 = 0uLL;
  v82 = 0;
  v81 = 0;
  v79 = 0;
  v78 = 0;
  v83 = 0;
  v86 = 0LL;
  v74 = 0;
  memset(v93, 0, sizeof(v93));
  v8 = *((_QWORD *)a1 + 13);
  v75 = *((_BYTE *)a1 + 71) & 1;
  v9 = a3 & 0x20;
  v80 = 0;
  v84 = 1;
  v85 = (*((unsigned __int8 *)a1 + 71) >> 5) & 1;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(*((struct tagTHREADINFO **)a1 + 2), 0, v6, a3 & 0xFFFDFFFF, 0LL);
    return 0LL;
  }
  v10 = ((a3 & 0x80) << 14) | 0x10;
  if ( (a3 & 0x40) == 0 )
    v10 = (a3 & 0x80) << 14;
  v11 = v10 | 4;
  if ( (a3 & 0x100) == 0 )
    v11 = v10;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v76 = a3;
    v84 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v39 = (void *)ReferenceDwmApiPort();
        DwmAsyncNotifyAnimationChange(v39);
      }
    }
  }
  GetRect(a1, &v91, 66LL);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  else
    Prop = (_OWORD *)CkptRestore(a1, &v91);
  v13 = Prop;
  if ( Prop )
  {
    if ( a5 && (v76 & 8) != 0 )
      *Prop = *a5;
    if ( (*(_BYTE *)(v8 + 66) & 0x40) != 0 && (*((_BYTE *)a1 + 71) & 0x40) == 0 )
    {
      v53 = *(_DWORD *)(v8 + 136) - v92;
      v92 = *(_DWORD *)(v8 + 136) - v91;
      v91 = v53;
      v80 = 1;
    }
    v14 = *v13;
    v15 = v9 ? *a5 : *(_OWORD *)((char *)v13 + 36);
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(1LL, *(_QWORD *)a1, v6, 5LL) )
    {
      if ( (_DWORD)v6 == 204 )
      {
        v11 |= 0x14u;
        LODWORD(v6) = ((v13[2] & 4) != 0) + 1;
      }
      if ( (_DWORD)v6 != 3 && (_DWORD)v6 != 1 )
      {
        if ( (_DWORD)v6 == 2 )
          goto LABEL_35;
        if ( (_DWORD)v6 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
            v11 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v6 <= 5 )
            goto LABEL_149;
          if ( (unsigned int)v6 <= 7 )
          {
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
              v11 |= 0x10u;
            v16 = 0LL;
            v17 = *((_QWORD *)a1 + 11);
            if ( !v17 )
              goto LABEL_131;
            do
            {
              if ( (*(_BYTE *)(v17 + 60) & 0x20) != 0 || (*(_BYTE *)(v17 + 64) & 8) != (*((_BYTE *)a1 + 64) & 8) )
                break;
              if ( *(_QWORD *)(v17 + 120) == *((_QWORD *)a1 + 15) )
                v16 = (__int64 *)v17;
              v17 = *(_QWORD *)(v17 + 88);
            }
            while ( v17 );
            if ( v16 )
              v86 = *v16;
            else
LABEL_131:
              v11 |= 4u;
LABEL_35:
            v18 = *((_BYTE *)a1 + 71);
            v19 = 1;
            if ( (v18 & 0x20) != 0 )
            {
              if ( (v18 & 0x10) != 0 )
                goto LABEL_88;
              v23 = 0;
              v11 |= 0x17u;
              v31 = 0;
              v28 = 0;
LABEL_61:
              v32 = 1;
              if ( (v76 & 1) != 0 )
                goto LABEL_64;
              if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
              {
                v11 |= 0x40u;
LABEL_64:
                if ( (*((_BYTE *)a1 + 61) & 2) == 0 && v31 && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
                {
                  v71 = *(_QWORD *)a1;
                  if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0 )
                    xxxCallHook(v32, *(_QWORD *)a1, 0LL, 10LL);
                  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
                    PostShellHookMessagesEx(1uLL, v71, 0LL);
                }
                v34 = InternalBeginDeferWindowPos(1LL);
                if ( v34 )
                {
                  if ( v86 )
                  {
                    LOBYTE(v33) = 1;
                    v36 = HMValidateHandleNoSecure(v86, v33);
                  }
                  else
                  {
                    v36 = 0;
                  }
                  v35 = DeferWindowPos(
                          v34,
                          (_DWORD)a1,
                          v36,
                          v77,
                          DWORD1(v77),
                          DWORD2(v77) - (int)v77,
                          HIDWORD(v77) - DWORD1(v77),
                          v11,
                          0);
                  if ( v35 )
                  {
                    if ( v78 && *(_DWORD *)*gpDispInfo > 1u )
                    {
                      if ( (*((_BYTE *)a1 + 71) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v35 + 40) + 112LL) = 2LL;
                      }
                      else if ( (*((_BYTE *)a1 + 61) & 8) != 0 )
                      {
                        *(_QWORD *)(*(_QWORD *)(v35 + 40) + 112LL) = 1LL;
                      }
                    }
                    xxxEndDeferWindowPosEx((struct tagSMWP *)v35);
                    if ( (unsigned int)IsTopLevelWindow(a1) )
                    {
                      v37 = *((_WORD *)a1 + 187);
                      if ( v37 )
                      {
                        SetDeferredDpiStateForWindowAndChildren(a1, 0LL);
                        if ( v37 == *((_WORD *)a1 + 186) )
                          *((_DWORD *)a1 + 76) &= ~0x8000000u;
                        else
                          xxxNotifyMonitorChanged(a1);
                      }
                    }
                  }
                }
                if ( v28 )
                  xxxWindowEvent(v28, (_DWORD)a1, 0, 0, 1);
                *((_DWORD *)a1 + 76) &= ~0x80000000;
                if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
                {
                  v45 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
                  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(v89, v45, a1);
                  v47 = *((_QWORD *)a1 + 16);
                  v33 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
                  v48 = _mm_srli_si128(*((__m128i *)a1 + 8), 8).m128i_u64[0];
                  v35 = v48;
                  if ( (int)v48 - (int)v47 < (int)(v33 - MonitorWorkRectForWindow->m128i_i64[0]) )
                  {
                    v35 = (unsigned int)(HIDWORD(v48) - HIDWORD(v47));
                    v33 = (unsigned int)(HIDWORD(v33) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                    if ( (int)v35 < (int)v33 )
                      *((_DWORD *)a1 + 76) |= 0x80000000;
                  }
                }
                if ( (_DWORD)v6 == 2
                  && ((*((_BYTE *)a1 + 71) >> 4) & (unsigned __int8)~(*((_BYTE *)a1 + 61) >> 1) & 1) != 0
                  && (*((_BYTE *)a1 + 70) & 0x40) != 0 )
                {
                  if ( *(_QWORD *)(*((_QWORD *)a1 + 21) + 128LL) )
                  {
                    v72 = 1LL;
                    v73 = 38LL;
                  }
                  else
                  {
                    v72 = 0LL;
                    v73 = 15LL;
                  }
                  PostMessage(a1, v73, v72, 0LL);
                }
                if ( v81 )
                  xxxShowOwnedWindows(a1, 3LL, 0LL);
                if ( (_DWORD)v6 == 6
                  && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1)
                  && !(unsigned int)xxxActivateOnMinimize(a1) )
                {
                  xxxActivateWindow(a1);
                }
                if ( v82 )
                  xxxSetFocus(a1);
                if ( v79 )
                  xxxSendMessage(a1, 6LL, 1LL, 0LL);
                if ( v83 )
                  xxxFlushPalette(a1, v33, v35);
                if ( v75 != (*((_BYTE *)a1 + 71) & 1) || v85 != ((*((unsigned __int8 *)a1 + 71) >> 5) & 1) )
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 40LL, *(_QWORD *)a1);
                goto LABEL_88;
              }
              v49 = v11 | 0x40;
              if ( !v19 )
                v49 = v11;
              v11 = v49;
              if ( !(unsigned int)IsVisible(a1)
                || (v51 & 0x10000) == 0
                || !v23
                || (v50 & 0x40) != 0 && (*((_BYTE *)a1 + 63) & 0x10) != 0 )
              {
                goto LABEL_64;
              }
              if ( v80 )
              {
                v68 = v77;
                v69 = *(_DWORD *)(*((_QWORD *)a1 + 13) + 136LL) - v77;
                LODWORD(v77) = *(_DWORD *)(*((_QWORD *)a1 + 13) + 136LL) - DWORD2(v77);
                DWORD2(v77) = v69;
              }
              else
              {
                v68 = 0uLL;
              }
              if ( v23 == 3 || !(unsigned int)IsTrayWindow(a1) )
              {
                v70 = a1;
              }
              else
              {
                *(_QWORD *)&v90.left = 0LL;
                *(_QWORD *)&v90.right = 0LL;
                xxxSendMinRectMessages(a1, &v90);
                if ( IsRectEmptyInl(&v90) )
                  goto LABEL_223;
                v70 = a1;
              }
              xxxDrawAnimatedRects(v70);
LABEL_223:
              v32 = 1;
              if ( v80 )
                v77 = v68;
              goto LABEL_64;
            }
            if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
            {
              v21 = (void *)ReferenceDwmApiPort();
              if ( v21 )
              {
                if ( gdwInAtomicOperation )
                {
                  v20 = gdwExtraInstrumentations;
                  if ( (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                }
                UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
                DwmSyncNotifyMinimizing(v21);
                EnterCrit(0LL, 1LL);
              }
            }
            v22 = *((_DWORD *)v13 + 8);
            v23 = 2;
            if ( (v22 & 1) == 0 )
              *((_DWORD *)v13 + 8) = v22 & 0xFFFFFFF7;
            if ( (v13[2] & 8) == 0 )
            {
              ParkIcon(a1, v13 + 1);
              *((_DWORD *)v13 + 8) |= 8u;
            }
            *(_QWORD *)&v77 = *((_QWORD *)v13 + 2);
            DWORD2(v77) = *(_DWORD *)(gpsi + 2108LL) + v77;
            HIDWORD(v77) = DWORD1(v77) + *(_DWORD *)(gpsi + 2112LL);
            xxxShowOwnedWindows(a1, 1LL, 0LL);
            for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL); i; i = *(_QWORD *)(i + 104) )
            {
              if ( (struct tagWND *)i == a1 )
              {
                v87[0] = *(_QWORD *)(gptiCurrent + 392LL);
                *(_QWORD *)(gptiCurrent + 392LL) = v87;
                v87[1] = i;
                _InterlockedAdd((volatile signed __int32 *)(i + 8), 1u);
                if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
                {
                  v56 = *((_QWORD *)a1 + 13);
                  v88[0] = *(_QWORD *)(gptiCurrent + 392LL);
                  *(_QWORD *)(gptiCurrent + 392LL) = v88;
                  v88[1] = v56;
                  if ( v56 )
                    _InterlockedAdd((volatile signed __int32 *)(v56 + 8), 1u);
                  xxxSetFocus(*((struct tagWND **)a1 + 13));
                  ThreadUnlock1(v58, v57);
                }
                else
                {
                  xxxSetFocus(0LL);
                }
                ThreadUnlock1(v60, v59);
                break;
              }
            }
            if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
            {
              v78 = 1;
              *((_DWORD *)v13 + 8) = v13[2] & 0xFFFFFF9D | 2;
            }
            else
            {
              v25 = *((_BYTE *)a1 + 305);
              if ( (v25 & 3) == 3 )
              {
                v61 = v13[2] & 0xFFFFFF9D | 0x60;
              }
              else if ( (v25 & 1) != 0 )
              {
                v61 = v13[2] & 0xFFFFFF9D | 0x20;
              }
              else
              {
                if ( (v25 & 2) == 0 )
                {
                  *((_DWORD *)v13 + 8) &= 0xFFFFFF9D;
                  goto LABEL_51;
                }
                v61 = v13[2] & 0xFFFFFF9D | 0x40;
              }
              *((_DWORD *)v13 + 8) = v61;
            }
LABEL_51:
            if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
            {
              v26 = 0;
            }
            else
            {
              v26 = IsTrayWindow(a1);
              v74 = v26;
            }
            v27 = *((_BYTE *)a1 + 71);
            if ( (v27 & 0x20) != 0 )
            {
              if ( (v27 & 0x10) != 0 )
                goto LABEL_88;
              v31 = v74;
              v11 |= 0x17u;
              v19 = 1;
              v77 = 0uLL;
              v28 = 0;
            }
            else
            {
              SetMinimize(a1, 1LL);
              SetOrClrWF(0LL, a1, 3841LL, 1LL);
              v28 = 22;
              if ( (*((_BYTE *)a1 + 61) & 2) == 0 )
                v74 = v26 != IsTrayWindow(a1);
              for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                ClrFTrueVis(j);
              v11 |= 0x8120u;
              DesktopWindow = GetDesktopWindow(a1);
              v31 = v74;
              v19 = 1;
              if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                v83 = *((_BYTE *)a1 + 58) & 0x20;
            }
            goto LABEL_61;
          }
          if ( (_DWORD)v6 != 9 )
          {
LABEL_149:
            v23 = 0;
            v19 = 0;
            v28 = 0;
            v31 = 0;
            goto LABEL_61;
          }
        }
        v54 = *((_BYTE *)a1 + 71);
        if ( (v54 & 0x20) != 0 || (v54 & 1) != 0 && v9 )
        {
          v55 = *((_DWORD *)v13 + 8);
          if ( (v55 & 2) != 0 )
          {
            LODWORD(v6) = 3;
            goto LABEL_95;
          }
          if ( (v55 & 0x60) == 0x60 )
          {
            LODWORD(v6) = 12;
          }
          else if ( (v55 & 0x20) != 0 )
          {
            LODWORD(v6) = 14;
          }
          else if ( (v55 & 0x40) != 0 )
          {
            LODWORD(v6) = 13;
          }
          else
          {
            LODWORD(v6) = 1;
            SetOrClrWF(0LL, a1, 63745LL, 1LL);
            SetOrClrWF(0LL, a1, 63746LL, 1LL);
          }
LABEL_132:
          v42 = v76;
          v52 = v11 | 0x8000;
          if ( (*((_BYTE *)a1 + 71) & 0x21) == 0 )
            v52 = v11;
          v44 = v52;
          if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
            v78 = 1;
          goto LABEL_102;
        }
        LODWORD(v6) = 1;
        SetOrClrWF(0LL, a1, 63745LL, 1LL);
        SetOrClrWF(0LL, a1, 63746LL, 1LL);
        SetOrClrWF(0LL, a1, 64257LL, 1LL);
      }
      if ( (_DWORD)v6 == 3 )
      {
LABEL_95:
        v41 = *((_BYTE *)a1 + 71);
        v42 = v76;
        if ( (v41 & 1) != 0 )
        {
          if ( (((v76 & 2) == 0) & (v41 >> 4)) != 0 )
            goto LABEL_88;
        }
        else
        {
          v11 |= 0x8000u;
        }
        v78 = 1;
        v43 = v11 | 0x10;
        if ( (v76 & 1) == 0 )
          v43 = v11;
        v44 = v43;
        if ( (v41 & 0x20) != 0 )
          *((_DWORD *)v13 + 8) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
LABEL_102:
        if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
        {
          if ( !xxxSendMessage(a1, 19LL, 0LL, 0LL) )
            goto LABEL_88;
          v81 = 1;
          v23 = 1;
          if ( (v44 & 0x10) == 0 )
          {
            v82 = 1;
            v79 = (*((_BYTE *)a1 + 71) & 0x40) == 0;
          }
          v44 |= 0x100u;
        }
        else
        {
          v23 = 3;
        }
        switch ( (_DWORD)v6 )
        {
          case 3:
            *(_QWORD *)&v77 = v93[2];
            DWORD2(v77) = LODWORD(v93[1]) + LODWORD(v93[2]);
            HIDWORD(v77) = HIDWORD(v93[2]) + HIDWORD(v93[1]);
            SetOrClrWF(1LL, a1, 3841LL, 1LL);
            SetOrClrWF(0LL, a1, 63745LL, 1LL);
            SetOrClrWF(0LL, a1, 63746LL, 1LL);
            SetOrClrWF(0LL, a1, 64257LL, 1LL);
            if ( (v42 & 0x10) == 0 && gSqmIsOptedIn )
              WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
            goto LABEL_108;
          case 0xC:
            v77 = v15;
            SetOrClrWF(0LL, a1, 3841LL, 1LL);
            v62 = 1LL;
            break;
          case 0xE:
            v77 = v15;
            SetOrClrWF(0LL, a1, 3841LL, 1LL);
            SetOrClrWF(1LL, a1, 63745LL, 1LL);
            v63 = 0LL;
LABEL_193:
            SetOrClrWF(v63, a1, 63746LL, 1LL);
            v44 |= 0x100000u;
            goto LABEL_108;
          case 0xD:
            v77 = v15;
            SetOrClrWF(0LL, a1, 3841LL, 1LL);
            v62 = 0LL;
            break;
          default:
            v77 = v14;
            SetOrClrWF(0LL, a1, 3841LL, 1LL);
LABEL_108:
            if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
            {
              if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
                v64 = 0;
              else
                v64 = IsTrayWindow(a1);
              SetMinimize(a1, 0LL);
              v28 = 23;
              if ( (*((_BYTE *)a1 + 61) & 2) == 0
                && v64 != (unsigned int)IsTrayWindow(a1)
                && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
              {
                v65 = *(_QWORD *)a1;
                if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(2LL, *(_QWORD *)a1, 0LL, 10LL);
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
                  PostShellHookMessagesEx(2uLL, v65, 0LL);
              }
              if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 && (*((_BYTE *)a1 + 71) & 0x10) != 0 )
              {
                v66 = *((_QWORD *)a1 + 2);
                if ( *(_DWORD *)(v66 + 872) == 1 )
                {
                  v67 = *(_QWORD *)(v66 + 408);
                  if ( v67 != gpqForeground && ((v44 & 0x10) == 0 || *(struct tagWND **)(v67 + 120) == a1) )
                  {
                    CheckForegroundRight(a1);
                    xxxSetForegroundWindow2(a1);
                  }
                }
              }
            }
            else
            {
              v28 = 0;
            }
            v11 = v44 | 0x20;
            v31 = 0;
            v19 = 0;
            goto LABEL_61;
        }
        SetOrClrWF(v62, a1, 63745LL, 1LL);
        v63 = 1LL;
        goto LABEL_193;
      }
      goto LABEL_132;
    }
  }
LABEL_88:
  if ( !v84 && (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v40 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v40);
  }
  return 0LL;
}
