/*
 * XREFs of xxxMinMaximizeEx @ 0x1C00E8144
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C01112BC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserMinMaximize @ 0x1C01DDCA0 (NtUserMinMaximize.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F43E4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018CFC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     ClrFTrueVis @ 0x1C001EBD4 (ClrFTrueVis.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     InternalBeginDeferWindowPos @ 0x1C006323C (InternalBeginDeferWindowPos.c)
 *     _DeferWindowPos @ 0x1C00632C8 (_DeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C00CCDD0 (IsThreadDesktopComposed.c)
 *     SetMinimize @ 0x1C00E8A70 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00E8AD0 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00E8E14 (DwmAsyncNotifyAnimationChange.c)
 *     DwmSyncNotifyMinimizing @ 0x1C00E8EA4 (DwmSyncNotifyMinimizing.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxFlushPalette @ 0x1C02029D0 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C020CA90 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, struct tagRECT *a5)
{
  __int64 v6; // r12
  __int64 v8; // r15
  int v9; // r13d
  int v10; // edx
  int v11; // edi
  _OWORD *Prop; // rax
  _OWORD *v13; // rsi
  struct tagRECT v14; // xmm7
  struct tagRECT v15; // xmm6
  unsigned __int64 *v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // r14
  int v28; // eax
  int v29; // r13d
  __int64 i; // rcx
  char v31; // cl
  int v32; // r14d
  char v33; // cl
  unsigned int v34; // r15d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v37; // esi
  int v38; // r10d
  void *v39; // rsi
  __int64 *v40; // r8
  __int64 v41; // r8
  unsigned __int16 v42; // di
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  void *v53; // rax
  unsigned __int8 v54; // dl
  char v55; // r14
  int v56; // ecx
  int v57; // edi
  __int64 v58; // rax
  __int64 v59; // r9
  __m128i *v60; // rax
  __int64 v61; // r10
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // xmm0_8
  int v64; // eax
  char v65; // r8
  int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // rdx
  struct tagWND *v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ecx
  __int64 v73; // rcx
  int v74; // eax
  char v75; // al
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // eax
  bool v83; // zf
  int v84; // ecx
  int v85; // ecx
  int v86; // esi
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rcx
  int v90; // r14d
  struct tagRECT v91; // xmm6
  LONG v92; // ecx
  struct tagWND *v93; // rcx
  __int64 v94; // rsi
  __int64 v95; // r8
  __int64 v96; // rdx
  BOOL v97; // [rsp+58h] [rbp-B0h]
  char v98; // [rsp+60h] [rbp-A8h]
  struct tagRECT v99; // [rsp+68h] [rbp-A0h]
  int v100; // [rsp+7Ch] [rbp-8Ch]
  BOOL v101; // [rsp+84h] [rbp-84h]
  int v102; // [rsp+88h] [rbp-80h] BYREF
  int v103; // [rsp+8Ch] [rbp-7Ch]
  int v104; // [rsp+90h] [rbp-78h]
  int v105; // [rsp+94h] [rbp-74h]
  int v106; // [rsp+98h] [rbp-70h]
  int v107; // [rsp+9Ch] [rbp-6Ch]
  unsigned __int64 v108; // [rsp+A0h] [rbp-68h]
  _QWORD v109[3]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v110[3]; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v111; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v112; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v113[5]; // [rsp+F8h] [rbp-10h] BYREF

  v98 = a3;
  v6 = a2;
  *(_QWORD *)&v111.left = a4;
  v99 = (struct tagRECT)0LL;
  v105 = 0;
  v104 = 0;
  v101 = 0;
  v100 = 0;
  v106 = 0;
  v108 = 0LL;
  v97 = 0;
  memset(v113, 0, sizeof(v113));
  v8 = *((_QWORD *)a1 + 13);
  v9 = a3 & 0x20;
  v103 = 0;
  v107 = 1;
  v102 = 0;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      0x17u,
      (__int64)a1,
      0,
      v6,
      a3 & 0xFFFDFFFF,
      0LL);
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
    v98 = a3;
    v107 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v48 = (void *)ReferenceDwmApiPort(v45, v44, v46, v47);
        DwmAsyncNotifyAnimationChange(v48);
      }
    }
  }
  GetRect((__int64)a1, (int *)&v112, 66);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp((__int64)a1, atomCheckpointProp, 1);
  else
    Prop = CkptRestore((__int64)a1, &v112);
  v13 = Prop;
  if ( Prop )
  {
    if ( a5 && (v98 & 8) != 0 )
      *Prop = *a5;
    if ( (*(_BYTE *)(v8 + 66) & 0x40) != 0 && (*((_BYTE *)a1 + 71) & 0x40) == 0 )
    {
      v74 = *(_DWORD *)(v8 + 136) - DWORD2(v112);
      DWORD2(v112) = *(_DWORD *)(v8 + 136) - v112;
      LODWORD(v112) = v74;
      v103 = 1;
    }
    v14 = (struct tagRECT)*v13;
    if ( v9 )
      v15 = *a5;
    else
      v15 = *(struct tagRECT *)((char *)v13 + 36);
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 600LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(1, *(_QWORD *)a1, v6, 5u) )
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
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) )
            v11 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v6 <= 5 )
            goto LABEL_155;
          if ( (unsigned int)v6 <= 7 )
          {
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) )
              v11 |= 0x10u;
            v16 = 0LL;
            v17 = *((_QWORD *)a1 + 11);
            if ( !v17 )
              goto LABEL_133;
            do
            {
              if ( (*(_BYTE *)(v17 + 60) & 0x20) != 0 || (*(_BYTE *)(v17 + 64) & 8) != (*((_BYTE *)a1 + 64) & 8) )
                break;
              if ( *(_QWORD *)(v17 + 120) == *((_QWORD *)a1 + 15) )
                v16 = (unsigned __int64 *)v17;
              v17 = *(_QWORD *)(v17 + 88);
            }
            while ( v17 );
            if ( v16 )
              v108 = *v16;
            else
LABEL_133:
              v11 |= 4u;
LABEL_35:
            v18 = *((_BYTE *)a1 + 71);
            v19 = 1;
            if ( (v18 & 0x20) != 0 )
            {
              if ( (v18 & 0x10) != 0 )
                goto LABEL_84;
              v29 = 0;
              v11 |= 0x17u;
              v37 = 0;
              v34 = 0;
LABEL_60:
              v38 = 1;
              if ( (v98 & 1) != 0 )
                goto LABEL_63;
              if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
              {
                v11 |= 0x40u;
LABEL_63:
                if ( (*((_BYTE *)a1 + 61) & 2) == 0 && v37 && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
                {
                  v94 = *(_QWORD *)a1;
                  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0 )
                    xxxCallHook(v38, *(_QWORD *)a1, 0LL, 0xAu);
                  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
                    PostShellHookMessagesEx(1u, v94, 0LL);
                }
                v39 = InternalBeginDeferWindowPos(1u);
                if ( v39 )
                {
                  v40 = v108 ? (__int64 *)HMValidateHandleNoSecure(v108, 1) : 0LL;
                  v41 = DeferWindowPos(
                          (__int64)v39,
                          (__int64)a1,
                          v40,
                          v99.left,
                          v99.top,
                          v99.right - v99.left,
                          v99.bottom - v99.top,
                          v11,
                          0);
                  if ( v41 )
                  {
                    if ( v100 && *(_DWORD *)*gpDispInfo > 1u )
                    {
                      if ( (*((_BYTE *)a1 + 71) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v41 + 40) + 112LL) = 2LL;
                      }
                      else if ( (*((_BYTE *)a1 + 61) & 8) != 0 )
                      {
                        *(_QWORD *)(*(_QWORD *)(v41 + 40) + 112LL) = 1LL;
                      }
                    }
                    xxxEndDeferWindowPosEx((struct tagSMWP *)v41, 0);
                    if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
                    {
                      v42 = *((_WORD *)a1 + 187);
                      if ( v42 )
                      {
                        SetDeferredDpiStateForWindowAndChildren((__int64)a1, 0);
                        if ( v42 == *((_WORD *)a1 + 186) )
                          *((_DWORD *)a1 + 76) &= ~0x8000000u;
                        else
                          xxxNotifyMonitorChanged(a1, 0LL, 0LL, v42);
                      }
                    }
                  }
                }
                if ( v34 )
                  xxxWindowEvent(v34, (__int64 *)a1, 0, 0, 1);
                *((_DWORD *)a1 + 76) &= ~0x80000000;
                if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
                {
                  v58 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
                  v59 = v58;
                  if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
                    && (v73 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
                    && (*(_DWORD *)(**(_QWORD **)(v73 + 8) + 52LL) & 1) != 0 )
                  {
                    v60 = (__m128i *)(*(_QWORD *)(v58 + 40) + 92LL);
                  }
                  else if ( (*((_DWORD *)a1 + 92) & 0xF) == 1
                         && (v67 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
                         && (*(_DWORD *)(**(_QWORD **)(v67 + 8) + 52LL) & 1) != 0 )
                  {
                    v60 = (__m128i *)(*(_QWORD *)(v59 + 40) + 108LL);
                  }
                  else
                  {
                    v60 = (__m128i *)(*(_QWORD *)(v59 + 40) + 76LL);
                  }
                  v61 = *((_QWORD *)a1 + 16);
                  v62 = _mm_srli_si128(*v60, 8).m128i_u64[0];
                  v63 = _mm_srli_si128(*((__m128i *)a1 + 8), 8).m128i_u64[0];
                  if ( (int)v63 - (int)v61 < (int)(v62 - v60->m128i_i64[0])
                    && HIDWORD(v63) - HIDWORD(v61) < (int)(HIDWORD(v62) - HIDWORD(v60->m128i_i64[0])) )
                  {
                    *((_DWORD *)a1 + 76) |= 0x80000000;
                  }
                }
                if ( (_DWORD)v6 == 2
                  && ((*((_BYTE *)a1 + 71) >> 4) & (unsigned __int8)~(*((_BYTE *)a1 + 61) >> 1) & 1) != 0
                  && (*((_BYTE *)a1 + 70) & 0x40) != 0 )
                {
                  if ( *(_QWORD *)(*((_QWORD *)a1 + 21) + 120LL) )
                  {
                    v95 = 1LL;
                    v96 = 38LL;
                  }
                  else
                  {
                    v95 = 0LL;
                    v96 = 15LL;
                  }
                  PostMessage((__int64)a1, v96, v95, 0LL);
                }
                if ( v104 )
                  xxxShowOwnedWindows(a1, 3LL, 0LL);
                if ( (_DWORD)v6 == 6
                  && *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1)
                  && !(unsigned int)xxxActivateOnMinimize(v69, v68, v70, v71) )
                {
                  xxxActivateWindow(a1, 3LL);
                }
                if ( v105 )
                  xxxSetFocus(a1, 0LL);
                if ( v101 )
                  xxxSendMessage((int)a1, 6, 1, 0);
                if ( v106 )
                  xxxFlushPalette(a1);
                goto LABEL_84;
              }
              v64 = v11 | 0x40;
              if ( !v19 )
                v64 = v11;
              v11 = v64;
              if ( !(unsigned int)IsVisible((__int64)a1)
                || (v66 & 0x10000) == 0
                || !v29
                || (v65 & 0x40) != 0 && (*((_BYTE *)a1 + 63) & 0x10) != 0 )
              {
                goto LABEL_63;
              }
              v90 = v103;
              *(_QWORD *)&v111.left = 0LL;
              *(_QWORD *)&v111.right = 0LL;
              if ( v103 )
              {
                v91 = v99;
                v92 = *(_DWORD *)(*((_QWORD *)a1 + 13) + 136LL) - v99.left;
                v99.left = *(_DWORD *)(*((_QWORD *)a1 + 13) + 136LL) - v99.right;
                v99.right = v92;
              }
              else
              {
                v91 = v111;
              }
              if ( v29 == 3 || !(unsigned int)IsTrayWindow((__int64)a1) )
              {
                v93 = a1;
              }
              else
              {
                *(_QWORD *)&v111.left = 0LL;
                *(_QWORD *)&v111.right = 0LL;
                xxxSendMinRectMessages(a1, &v111);
                if ( IsRectEmptyInl(&v111) )
                  goto LABEL_231;
                v93 = a1;
              }
              xxxDrawAnimatedRects(v93);
LABEL_231:
              v38 = 1;
              if ( v90 )
                v99 = v91;
              goto LABEL_63;
            }
            if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
            {
              v27 = (void *)ReferenceDwmApiPort(v21, v20, v22, v23);
              if ( v27 )
              {
                if ( gdwInAtomicOperation )
                {
                  v24 = gdwExtraInstrumentations;
                  if ( (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                }
                UserSessionSwitchLeaveCrit(v24, gdwInAtomicOperation, v25, v26);
                DwmSyncNotifyMinimizing(v27);
                EnterCrit(0LL, 1LL);
              }
            }
            v28 = *((_DWORD *)v13 + 8);
            v29 = 2;
            if ( (v28 & 1) == 0 )
              *((_DWORD *)v13 + 8) = v28 & 0xFFFFFFF7;
            if ( (v13[2] & 8) == 0 )
            {
              ParkIcon(a1, v13 + 1);
              *((_DWORD *)v13 + 8) |= 8u;
            }
            *(_QWORD *)&v99.left = *((_QWORD *)v13 + 2);
            v99.right = *(_DWORD *)(gpsi + 2108LL) + v99.left;
            v99.bottom = v99.top + *(_DWORD *)(gpsi + 2112LL);
            xxxShowOwnedWindows(a1, 1LL, 0LL);
            for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL); i; i = *(_QWORD *)(i + 104) )
            {
              if ( (struct tagWND *)i == a1 )
              {
                v109[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v109;
                v109[1] = i;
                ++*(_DWORD *)(i + 8);
                if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
                {
                  v77 = *((_QWORD *)a1 + 13);
                  v110[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v110;
                  v110[1] = v77;
                  if ( v77 )
                    ++*(_DWORD *)(v77 + 8);
                  xxxSetFocus(*((struct tagWND **)a1 + 13), 0LL);
                  ThreadUnlock1(v79, v78);
                }
                else
                {
                  xxxSetFocus(0LL, 0LL);
                }
                ThreadUnlock1(v81, v80);
                break;
              }
            }
            if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
            {
              v100 = 1;
              *((_DWORD *)v13 + 8) = v13[2] & 0xFFFFFF9D | 2;
            }
            else
            {
              v31 = *((_BYTE *)a1 + 305);
              if ( (v31 & 3) == 3 )
              {
                v82 = v13[2] & 0xFFFFFF9D | 0x60;
              }
              else if ( (v31 & 1) != 0 )
              {
                v82 = v13[2] & 0xFFFFFF9D | 0x20;
              }
              else
              {
                if ( (v31 & 2) == 0 )
                {
                  *((_DWORD *)v13 + 8) &= 0xFFFFFF9D;
                  goto LABEL_51;
                }
                v82 = v13[2] & 0xFFFFFF9D | 0x40;
              }
              *((_DWORD *)v13 + 8) = v82;
            }
LABEL_51:
            if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
            {
              v32 = 0;
            }
            else
            {
              v32 = IsTrayWindow((__int64)a1);
              v97 = v32;
            }
            v33 = *((_BYTE *)a1 + 71);
            if ( (v33 & 0x20) != 0 )
            {
              if ( (v33 & 0x10) != 0 )
                goto LABEL_84;
              v37 = v97;
              v11 |= 0x17u;
              v19 = 1;
              v99 = (struct tagRECT)0LL;
              v34 = 0;
            }
            else
            {
              SetMinimize(a1, 1LL);
              SetOrClrWF(0, a1, 0xF01u, 1);
              v34 = 22;
              if ( (*((_BYTE *)a1 + 61) & 2) == 0 )
                v97 = v32 != IsTrayWindow((__int64)a1);
              for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                ClrFTrueVis(j);
              v11 |= 0x8120u;
              DesktopWindow = GetDesktopWindow((__int64)a1);
              v37 = v97;
              v19 = 1;
              if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                v106 = *((_BYTE *)a1 + 58) & 0x20;
            }
            goto LABEL_60;
          }
          if ( (_DWORD)v6 != 9 )
          {
LABEL_155:
            v29 = 0;
            v19 = 0;
            v34 = 0;
            v37 = 0;
            goto LABEL_60;
          }
        }
        v75 = *((_BYTE *)a1 + 71);
        if ( (v75 & 0x20) != 0 || (v75 & 1) != 0 && v9 )
        {
          v76 = *((_DWORD *)v13 + 8);
          if ( (v76 & 2) != 0 )
          {
            LODWORD(v6) = 3;
            goto LABEL_91;
          }
          if ( (v76 & 0x60) == 0x60 )
          {
            LODWORD(v6) = 12;
          }
          else if ( (v76 & 0x20) != 0 )
          {
            LODWORD(v6) = 14;
          }
          else if ( (v76 & 0x40) != 0 )
          {
            LODWORD(v6) = 13;
          }
          else
          {
            LODWORD(v6) = 1;
            SetOrClrWF(0, a1, 0xF901u, 1);
            SetOrClrWF(0, a1, 0xF902u, 1);
          }
LABEL_135:
          v55 = v98;
          v72 = v11 | 0x8000;
          if ( (*((_BYTE *)a1 + 71) & 0x21) == 0 )
            v72 = v11;
          v57 = v72;
          if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
            v100 = 1;
          goto LABEL_98;
        }
        LODWORD(v6) = 1;
        SetOrClrWF(0, a1, 0xF901u, 1);
        SetOrClrWF(0, a1, 0xF902u, 1);
        SetOrClrWF(0, a1, 0xFB01u, 1);
      }
      if ( (_DWORD)v6 == 3 )
      {
LABEL_91:
        v54 = *((_BYTE *)a1 + 71);
        v55 = v98;
        if ( (v54 & 1) != 0 )
        {
          if ( (((v98 & 2) == 0) & (v54 >> 4)) != 0 )
            goto LABEL_84;
        }
        else
        {
          v11 |= 0x8000u;
        }
        v100 = 1;
        v56 = v11 | 0x10;
        if ( (v98 & 1) == 0 )
          v56 = v11;
        v57 = v56;
        if ( (v54 & 0x20) != 0 )
          *((_DWORD *)v13 + 8) |= 4u;
        xxxInitSendValidateMinMaxInfoEx((__int64)a1, (__int64)v113, *(__int64 *)&v111.left, 0);
LABEL_98:
        if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
        {
          if ( !xxxSendMessage((int)a1, 19, 0, 0) )
            goto LABEL_84;
          v104 = 1;
          v29 = 1;
          if ( (v57 & 0x10) == 0 )
          {
            v83 = (*((_BYTE *)a1 + 71) & 0x40) == 0;
            v105 = 1;
            v101 = v83;
          }
          v57 |= 0x100u;
        }
        else
        {
          v29 = 3;
        }
        switch ( (_DWORD)v6 )
        {
          case 3:
            *(_QWORD *)&v99.left = v113[2];
            v99.right = LODWORD(v113[1]) + LODWORD(v113[2]);
            v99.bottom = HIDWORD(v113[2]) + HIDWORD(v113[1]);
            SetOrClrWF(1, a1, 0xF01u, 1);
            SetOrClrWF(0, a1, 0xF901u, 1);
            SetOrClrWF(0, a1, 0xF902u, 1);
            SetOrClrWF(0, a1, 0xFB01u, 1);
            if ( (v55 & 0x10) == 0 && gSqmIsOptedIn )
              WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
            goto LABEL_104;
          case 0xC:
            v99 = v15;
            SetOrClrWF(0, a1, 0xF01u, 1);
            v84 = 1;
            break;
          case 0xE:
            v99 = v15;
            SetOrClrWF(0, a1, 0xF01u, 1);
            SetOrClrWF(1, a1, 0xF901u, 1);
            v85 = 0;
LABEL_199:
            SetOrClrWF(v85, a1, 0xF902u, 1);
            v57 |= 0x100000u;
            goto LABEL_104;
          case 0xD:
            v99 = v15;
            SetOrClrWF(0, a1, 0xF01u, 1);
            v84 = 0;
            break;
          default:
            v99 = v14;
            SetOrClrWF(0, a1, 0xF01u, 1);
LABEL_104:
            if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
            {
              if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
                v86 = 0;
              else
                v86 = IsTrayWindow((__int64)a1);
              SetMinimize(a1, 0LL);
              v34 = 23;
              if ( (*((_BYTE *)a1 + 61) & 2) == 0
                && v86 != (unsigned int)IsTrayWindow((__int64)a1)
                && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
              {
                v87 = *(_QWORD *)a1;
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(2, *(_QWORD *)a1, 0LL, 0xAu);
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
                  PostShellHookMessagesEx(2u, v87, 0LL);
              }
              if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 && (*((_BYTE *)a1 + 71) & 0x10) != 0 )
              {
                v88 = *((_QWORD *)a1 + 2);
                if ( *(_DWORD *)(v88 + 784) == 1 )
                {
                  v89 = *(_QWORD *)(v88 + 384);
                  if ( v89 != gpqForeground
                    && ((v57 & 0x10) == 0 || *(struct tagWND **)(v89 + 88) == a1)
                    && ((unsigned int)CheckForegroundRight(a1, &v102) || !v102) )
                  {
                    xxxSetForegroundWindow2((LARGE_INTEGER *)a1, *((_QWORD *)a1 + 2), 1u, 0);
                  }
                }
              }
            }
            else
            {
              v34 = 0;
            }
            v11 = v57 | 0x20;
            v37 = 0;
            v19 = 0;
            goto LABEL_60;
        }
        SetOrClrWF(v84, a1, 0xF901u, 1);
        v85 = 1;
        goto LABEL_199;
      }
      goto LABEL_135;
    }
  }
LABEL_84:
  if ( !v107 && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v53 = (void *)ReferenceDwmApiPort(v50, v49, v51, v52);
    DwmAsyncNotifyAnimationChange(v53);
  }
  return 0LL;
}
