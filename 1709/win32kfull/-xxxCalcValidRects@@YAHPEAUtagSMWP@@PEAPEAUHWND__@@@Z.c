/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0054300 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00575BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0057CAC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0066B60 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068128 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006B618 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0073430 (GetAppCompatFlags.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     _FChildVisible @ 0x1C009339C (_FChildVisible.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01AAB10 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C444C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v3; // r13
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 *v15; // rbx
  int v16; // r14d
  __int64 v17; // r15
  struct _KTHREAD *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r14
  ULONG_PTR v21; // rdi
  struct _KTHREAD *v22; // r12
  __int64 v23; // r14
  __int64 *v24; // rax
  int v25; // r14d
  __int64 v26; // r13
  int v27; // r12d
  int v28; // r14d
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r13d
  __int64 v35; // rdx
  int v36; // r8d
  int v37; // r14d
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // ecx
  int v41; // r12d
  int v42; // eax
  LONG *v43; // r15
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // r11d
  int v48; // r14d
  __int64 Prop; // rax
  __int16 v50; // r12
  int v51; // eax
  int v52; // eax
  char v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r14
  LONG v57; // edx
  int v58; // ecx
  __int64 NewMonitor; // rax
  __int64 v60; // rcx
  __int128 v61; // xmm1
  __int64 v62; // xmm0_8
  unsigned int v63; // r13d
  unsigned int v64; // r14d
  unsigned int v65; // r12d
  __int64 v66; // rdx
  int v67; // eax
  int v68; // eax
  int v69; // r10d
  __int64 v70; // rcx
  int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // eax
  int v75; // eax
  int v76; // edx
  int v77; // r11d
  int v78; // r9d
  int v79; // r8d
  int v80; // r10d
  int v81; // r14d
  int v82; // eax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // [rsp+50h] [rbp-B0h]
  int v87; // [rsp+50h] [rbp-B0h]
  int v88; // [rsp+54h] [rbp-ACh]
  int v89; // [rsp+58h] [rbp-A8h]
  int v90; // [rsp+5Ch] [rbp-A4h]
  int v91; // [rsp+60h] [rbp-A0h]
  int v92; // [rsp+64h] [rbp-9Ch]
  int v93; // [rsp+68h] [rbp-98h]
  int v94; // [rsp+6Ch] [rbp-94h]
  int v95; // [rsp+70h] [rbp-90h]
  HWND v96; // [rsp+78h] [rbp-88h]
  struct tagRECT v97; // [rsp+80h] [rbp-80h] BYREF
  HWND *v98; // [rsp+90h] [rbp-70h]
  char BugCheckParameter3[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v100[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v101[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v102[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v103; // [rsp+F0h] [rbp-10h]
  _BYTE v104[56]; // [rsp+F8h] [rbp-8h] BYREF

  v98 = a2;
  v96 = 0LL;
  v3 = 0LL;
  memset(v104, 0, sizeof(v104));
  v92 = 0;
  v89 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) + 104LL);
  if ( !(unsigned int)IsThreadCrossSessionAttached(
                        gpKernelHandleTable,
                        3LL * (unsigned __int16)*(_DWORD *)ValidWindowPos,
                        v5,
                        v6) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  v100[0] = *(_QWORD *)(v8 + 392);
  *(_QWORD *)(v8 + 392) = v100;
  v100[1] = v10;
  if ( v10 )
    _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
  v15 = (__int64 *)*((_QWORD *)a1 + 5);
  v16 = *((_DWORD *)a1 + 7) - 1;
  v88 = v16;
  v91 = 1;
  if ( v16 >= 0 )
  {
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 )
        break;
LABEL_180:
      v15 += 21;
      v88 = --v16;
      if ( v16 < 0 )
        goto LABEL_181;
    }
    v18 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13, 0LL) )
      PsGetThreadWin32Thread(v18);
    v13 = (unsigned __int16)v17;
    v12 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_179;
    v11 = gSharedInfo[1];
    v19 = v11 + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]);
    v20 = 3 * ((__int64)((unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2])) >> 5);
    if ( WORD1(v17) != *(_WORD *)(v19 + 26)
      && (v12 = 0xFFFFLL, WORD1(v17) != 0xFFFF)
      && (WORD1(v17) || !PsGetCurrentProcessWow64Process(0xFFFFLL))
      || (v12 = 1LL, (*(_BYTE *)(v19 + 25) & 1) != 0)
      || *(_BYTE *)(v19 + 24) != 1
      || (v21 = *(_QWORD *)(gpKernelHandleTable + 8 * v20)) == 0
      || (v12 = v15[1], (unsigned __int64)(v12 - 2) <= 0xFFFFFFFFFFFFFFFBuLL)
      && (LOBYTE(v11) = 1, !HMValidateHandleNoSecure(v12, v11)) )
    {
      v16 = v88;
LABEL_179:
      *v15 = 0LL;
      *((_DWORD *)v15 + 8) = 6159;
      goto LABEL_180;
    }
    v22 = KeGetCurrentThread();
    v23 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13, 0LL) )
    {
      v24 = (__int64 *)PsGetThreadWin32Thread(v22);
      if ( v24 )
        v23 = *v24;
    }
    v101[0] = *(_QWORD *)(v23 + 392);
    *(_QWORD *)(v23 + 392) = v101;
    v101[1] = v21;
    _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u);
    v86 = 0;
    if ( !v3 && (v15[4] & 0x10) == 0 )
      v96 = *(HWND *)v21;
    v25 = *((_DWORD *)v15 + 8);
    if ( (v25 & 0x400) == 0 )
    {
      v26 = v15[1];
      v27 = v15[4] & 4;
      v28 = v25 & 0x750000;
      if ( gfShellFrameHangResilient
        && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v21 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 384LL) != 1 )
          xxxSendTransformableMessageTimeout(v21, 2, 50, (ULONG_PTR)BugCheckParameter3, 1, 0);
      }
      else
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v21, 0, 0, 0LL, 1, 0);
      }
      *((_DWORD *)v15 + 8) |= v28;
      v29 = *((_DWORD *)v15 + 39);
      v30 = *((unsigned int *)v15 + 8);
      if ( (v29 & 0x20) == 0 && (v30 & 3) != 3 )
      {
        v15[16] = *(_QWORD *)(v21 + 360);
        *((_DWORD *)v15 + 39) = v29 | 0x20;
      }
      *v15 = v17;
      if ( (v30 & 4) == 0 && (v27 || *((_WORD *)v15 + 4) != (_WORD)v26) )
      {
        if ( !IsStillWindowC(v15[1], v30) )
          goto LABEL_182;
        if ( *((_WORD *)v15 + 4) != (_WORD)v26 || (unsigned __int64)v15[1] >= 0xFFFFFFFFFFFFFFFEuLL )
        {
          v33 = CheckTopmost((struct tagWINDOWPOS *)v15);
          if ( v33 )
          {
            if ( *(_DWORD *)(v21 + 320) == 1 )
              SetTopmostEnum((struct tagWND *)v21, v33 == 1, (*((_DWORD *)v15 + 8) >> 9) & 1);
          }
        }
      }
    }
    v34 = *(_DWORD *)(v21 + 128);
    v35 = 0LL;
    v36 = *(_DWORD *)(v21 + 132);
    v37 = v34;
    *((_DWORD *)v15 + 20) = v34;
    *((_DWORD *)v15 + 21) = v36;
    v38 = *(_QWORD *)(v21 + 24);
    v94 = v34;
    v90 = v36;
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 8);
      if ( v39 )
        v35 = *(_QWORD *)(v39 + 16);
    }
    if ( v10 != v35 )
    {
      v34 -= *(_DWORD *)(v10 + 144);
      v36 -= *(_DWORD *)(v10 + 148);
      v94 = v34;
      v90 = v36;
      if ( (*(_BYTE *)(v10 + 66) & 0x40) != 0 && (*(_BYTE *)(v21 + 71) & 0xC0) == 0x40 )
      {
        v37 = *(_DWORD *)(v10 + 152) - *(_DWORD *)(v21 + 136);
        v89 = 1;
      }
      else
      {
        v89 = 0;
        v37 = v34;
      }
    }
    v40 = *(_DWORD *)(v21 + 136) - *(_DWORD *)(v21 + 128);
    v41 = *(_DWORD *)(v21 + 140) - *(_DWORD *)(v21 + 132);
    *((_DWORD *)v15 + 8) |= 0x1800u;
    v93 = v40;
    if ( (*(_BYTE *)(v21 + 305) & 3) != 0 && (v15[4] & 0x100000) != 0 )
    {
      ExtendArrangedRectangleByFrameMargin((struct tagWND *)v21, (struct tagSIZERECT *)(v15 + 2));
      v36 = v90;
    }
    v42 = *((_DWORD *)v15 + 8);
    v43 = (LONG *)(v15 + 2);
    if ( (v42 & 2) != 0 )
    {
      *v43 = v37;
      *((_DWORD *)v15 + 5) = v36;
    }
    else
    {
      if ( *v43 == v37 && *((_DWORD *)v15 + 5) == v36 )
      {
        *((_DWORD *)v15 + 8) = v42 | 2;
        v44 = v92;
        if ( v89 )
          v44 = 1;
        v92 = v44;
      }
      if ( (*(_BYTE *)(v21 + 71) & 0x20) != 0 )
      {
        v45 = IsTrayWindow(v21);
        v46 = 0;
        if ( v45 )
        {
          *v43 = -32000;
          *((_DWORD *)v15 + 5) = -32000;
        }
LABEL_70:
        v47 = *((_DWORD *)v15 + 8);
        v48 = 1;
        if ( (v47 & 1) != 0 )
        {
          *((_DWORD *)v15 + 6) = v93;
          *((_DWORD *)v15 + 7) = v41;
          goto LABEL_83;
        }
        if ( (*(_BYTE *)(v21 + 71) & 0x20) != 0
          && (Prop = GetProp(v21, (unsigned __int16)atomCheckpointProp, 1LL), v46 = 0, Prop) )
        {
          *((_DWORD *)v15 + 6) = *(_DWORD *)(gpsi + 2108LL);
          v46 = *(_DWORD *)(gpsi + 2112LL);
        }
        else
        {
          if ( *((int *)v15 + 6) < 0 )
            *((_DWORD *)v15 + 6) = 0;
          if ( *((int *)v15 + 7) >= 0 )
          {
LABEL_78:
            if ( *((_DWORD *)v15 + 6) == v93 && *((_DWORD *)v15 + 7) == v41 )
            {
              *((_DWORD *)v15 + 8) = v47 | 1;
              if ( (*(_BYTE *)(v21 + 61) & 1) == 0 )
              {
                v86 = 1;
                goto LABEL_84;
              }
            }
LABEL_83:
            v48 = 0;
LABEL_84:
            v50 = 0;
            if ( v89 )
              *v43 = *(_DWORD *)(v10 + 152) - *(_DWORD *)(v10 + 144) - *((_DWORD *)v15 + 6) - *v43;
            if ( (*(_BYTE *)(v21 + 71) & 0x10) != 0 )
            {
              *((_DWORD *)v15 + 8) &= ~0x40u;
            }
            else
            {
              *((_DWORD *)v15 + 8) &= ~0x80u;
              v51 = *((_DWORD *)v15 + 8);
              if ( (v51 & 0x40) == 0 )
                *((_DWORD *)v15 + 8) = v51 | 8;
            }
            if ( (*(_BYTE *)(v21 + 67) & 2) == 0 && GetStyleWindow(v21, 2818LL) )
              *((_DWORD *)v15 + 8) |= 0x100u;
            if ( (*(_BYTE *)(v21 + 60) & 0x20) != 0 )
            {
              *((_DWORD *)v15 + 8) &= ~4u;
              v15[1] = 1LL;
            }
            if ( !v91 || (v15[4] & 4) != 0 || (v91 = 0, (*(_BYTE *)(v21 + 59) & 4) != 0) )
            {
              v53 = 1;
            }
            else
            {
              v52 = ValidateZorder((struct tagCVR *)v15);
              v53 = 1;
              if ( v52 )
              {
                *((_DWORD *)v15 + 8) |= 4u;
                v91 = 1;
              }
            }
            v54 = *((unsigned int *)v15 + 8);
            if ( (v54 & 8) == 0 && ((v15[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v21, v54, 1LL)) )
            {
              v54 = (unsigned int)v54 | 8;
              *((_DWORD *)v15 + 8) = v54;
            }
            if ( (v15[4] & 2) == 0 && ((unsigned __int8)v53 & *(_BYTE *)(v21 + 61)) == 0 )
            {
              if ( (GetAppCompatFlags(0LL) & 0x20000) != 0 )
                v48 = 1;
              v86 = v48;
            }
            if ( (*((_DWORD *)v15 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v21) )
            {
              v55 = ValidateHmonitor(v15[16]);
              v56 = v55;
              if ( v55 )
                v50 = *(_WORD *)(*(_QWORD *)(v55 + 40) + 64LL);
              v57 = *((_DWORD *)v15 + 5);
              v97.left = *v43;
              v97.right = *((_DWORD *)v15 + 6) + v97.left;
              v58 = *((_DWORD *)v15 + 7);
              v97.top = v57;
              v97.bottom = v57 + v58;
              NewMonitor = GetNewMonitor((__m128i *)v21, &v97, 0LL);
              if ( NewMonitor )
              {
                if ( v56 != NewMonitor )
                {
                  v54 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
                  if ( v50 != (_WORD)v54 )
                    *((_DWORD *)v15 + 39) ^= (*((_DWORD *)v15 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                                       v21,
                                                                                       v54,
                                                                                       &v97,
                                                                                       v15 + 17) << 7)) & 0x80;
                }
              }
            }
            LODWORD(v60) = *((_DWORD *)v15 + 8);
            if ( (v60 & 0x21) != 1 || v86 )
            {
              *((_DWORD *)v15 + 39) |= 4u;
              if ( (*(_BYTE *)(v21 + 71) & 0x40) == 0 && *(char *)(v21 + 64) >= 0 )
                xxxCheckFullScreen((struct tagWND *)v21, (struct tagSIZERECT *)(v15 + 2));
              v61 = *((_OWORD *)v15 + 1);
              v102[0] = *(_OWORD *)v15;
              v62 = v15[4];
              *(_QWORD *)&v104[48] = v102;
              *(_DWORD *)v104 = *v43;
              *(_DWORD *)&v104[8] = *((_DWORD *)v15 + 6) + *(_DWORD *)v104;
              *(_DWORD *)&v104[4] = *((_DWORD *)v15 + 5);
              *(_DWORD *)&v104[12] = *((_DWORD *)v15 + 7) + *(_DWORD *)&v104[4];
              v102[1] = v61;
              v103 = v62;
              GetRect(v21, (int *)&v104[16], 66);
              GetRect(v21, (int *)&v104[32], 65);
              v63 = *(_DWORD *)&v104[32];
              v64 = *(_DWORD *)&v104[36];
              v95 = *(_DWORD *)&v104[40] - *(_DWORD *)&v104[32];
              v87 = *(_DWORD *)&v104[44] - *(_DWORD *)&v104[36];
              _InterlockedAdd(&glSendMessage, 1u);
              v65 = xxxSendTransformableMessageTimeout(v21, 0, 0, 0LL, 1, 0);
              if ( !IsStillWindowC(v15[1], v66) )
              {
LABEL_182:
                ThreadUnlock1(v32, v31);
                ThreadUnlock1(v85, v84);
                return 0LL;
              }
              if ( v65 - 16 > 0x3F0 )
              {
                v65 = 48;
                *(_OWORD *)&v104[16] = *(_OWORD *)v104;
              }
              if ( (*(_BYTE *)(v21 + 66) & 0x40) != 0 )
                v67 = *(_DWORD *)&v104[24] - *(_DWORD *)&v104[40];
              else
                v67 = *(_DWORD *)&v104[16] - *(_DWORD *)&v104[32];
              *((_DWORD *)v15 + 18) = v67;
              *((_DWORD *)v15 + 19) = *(_DWORD *)&v104[20] - *(_DWORD *)&v104[36];
              v15[5] = *(_QWORD *)v104;
              *((_DWORD *)v15 + 12) = *(_DWORD *)&v104[8] - *(_DWORD *)v104;
              v68 = *(_DWORD *)&v104[12] - *(_DWORD *)&v104[4];
              *((_DWORD *)v15 + 13) = *(_DWORD *)&v104[12] - *(_DWORD *)&v104[4];
              if ( __PAIR64__(v64, v63) != *(_QWORD *)v104 )
                *((_DWORD *)v15 + 8) &= ~0x1000u;
              v54 = *((unsigned int *)v15 + 12);
              if ( v95 != (_DWORD)v54 || v87 != v68 )
                *((_DWORD *)v15 + 8) &= ~0x800u;
              v60 = *((unsigned int *)v15 + 8);
              if ( (v60 & 0x100) == 0 && !v92 && (*(_BYTE *)(v21 + 64) & 0x20) == 0 )
              {
                if ( (v15[4] & 0x821) == 0x801 )
                {
                  v34 = v94;
                  if ( *((_DWORD *)v15 + 18) == *v43 - v94 )
                  {
                    v69 = v90;
                    if ( *((_DWORD *)v15 + 19) == *((_DWORD *)v15 + 5) - v90 )
                      goto LABEL_140;
                  }
                }
                if ( v95 == (_DWORD)v54 || (v65 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(v21 + 168) + 100LL) & 2) == 0 )
                {
                  if ( v87 == *((_DWORD *)v15 + 13)
                    || (v65 & 0x200) == 0 && (LOBYTE(v60) = *(_BYTE *)(*(_QWORD *)(v21 + 168) + 100LL), (v60 & 1) == 0) )
                  {
                    v76 = *(_DWORD *)&v104[40] - *(_DWORD *)&v104[32];
                    v77 = *(_DWORD *)&v104[44] - *(_DWORD *)&v104[36];
                    v78 = *(_DWORD *)&v104[16];
                    v79 = *(_DWORD *)&v104[24] - *(_DWORD *)&v104[16];
                    v80 = *(_DWORD *)&v104[20];
                    v81 = *(_DWORD *)&v104[28] - *(_DWORD *)&v104[20];
                    if ( ((*(_BYTE *)(v21 + 66) & 0x40) != 0) != ((v65 >> 7) & 1) )
                    {
                      if ( (*(_BYTE *)(v21 + 66) & 0x40) != 0 && v76 > v79 )
                        v82 = v76 - v79;
                      else
                        v82 = v79 - v76;
                      v78 = v82 + *(_DWORD *)&v104[16];
                      *(_DWORD *)&v104[16] += v82;
                    }
                    if ( (v65 & 0x40) != 0 )
                    {
                      v80 = *(_DWORD *)&v104[28] - v77;
                      *(_DWORD *)&v104[20] = *(_DWORD *)&v104[28] - v77;
                    }
                    if ( v76 < v79 )
                      *(_DWORD *)&v104[24] = v78 + v76;
                    if ( v77 < v81 )
                      *(_DWORD *)&v104[28] = v80 + v77;
                    *(_OWORD *)(v15 + 7) = *(_OWORD *)&v104[16];
                    if ( v10 != GetDesktopWindow(v21) )
                    {
                      v60 = *(unsigned int *)(v10 + 148);
                      v83 = *(_DWORD *)(v10 + 144);
                      *((_DWORD *)v15 + 14) += v83;
                      *((_DWORD *)v15 + 16) += v83;
                      *((_DWORD *)v15 + 17) += v60;
                      *((_DWORD *)v15 + 15) += v60;
                    }
                    goto LABEL_177;
                  }
                }
              }
              v15[7] = 0LL;
              v15[8] = 0LL;
LABEL_177:
              ThreadUnlock1(v60, v54);
              v16 = v88;
              v3 = v96;
              goto LABEL_180;
            }
            v69 = v90;
LABEL_140:
            if ( (v60 & 0x100) != 0 )
            {
              v15[7] = 0LL;
              v15[8] = 0LL;
            }
            else
            {
              v54 = (unsigned int)*v43;
              v70 = 0LL;
              v71 = *((_DWORD *)v15 + 5);
              *((_DWORD *)v15 + 14) = v54;
              *((_DWORD *)v15 + 15) = v71;
              v72 = *(_QWORD *)(v21 + 24);
              if ( v72 )
              {
                v73 = *(_QWORD *)(v72 + 8);
                if ( v73 )
                  v70 = *(_QWORD *)(v73 + 16);
              }
              if ( v10 != v70 )
              {
                *((_DWORD *)v15 + 14) = v54 + *(_DWORD *)(v10 + 144);
                *((_DWORD *)v15 + 15) = v71 + *(_DWORD *)(v10 + 148);
              }
              *((_DWORD *)v15 + 16) = *((_DWORD *)v15 + 14) + *((_DWORD *)v15 + 6);
              *((_DWORD *)v15 + 17) = *((_DWORD *)v15 + 7) + *((_DWORD *)v15 + 15);
            }
            if ( (*(_BYTE *)(v21 + 66) & 0x40) != 0 )
              v74 = *v43 + *((_DWORD *)v15 + 6) - v93 - v34;
            else
              v74 = *v43 - v34;
            v60 = (unsigned int)(*((_DWORD *)v15 + 5) - v69);
            *((_DWORD *)v15 + 18) = v74;
            v75 = *((_DWORD *)v15 + 8);
            *((_DWORD *)v15 + 19) = v60;
            if ( (v75 & 2) == 0 )
            {
              *((_DWORD *)v15 + 8) = v75 & 0xFFFFEFFF;
              *((_DWORD *)v15 + 10) = *((_DWORD *)v15 + 18) + *(_DWORD *)(v21 + 144);
              *((_DWORD *)v15 + 11) = *(_DWORD *)(v21 + 148) + v60;
              if ( v10 != GetDesktopWindow(v21) )
              {
                *((_DWORD *)v15 + 10) -= *(_DWORD *)(v10 + 144);
                *((_DWORD *)v15 + 11) -= *(_DWORD *)(v10 + 148);
              }
              *((_DWORD *)v15 + 12) = *(_DWORD *)(v21 + 152) - *(_DWORD *)(v21 + 144);
              v60 = (unsigned int)(*(_DWORD *)(v21 + 156) - *(_DWORD *)(v21 + 148));
              *((_DWORD *)v15 + 13) = v60;
            }
            goto LABEL_177;
          }
        }
        *((_DWORD *)v15 + 7) = v46;
        goto LABEL_78;
      }
    }
    v46 = 0;
    goto LABEL_70;
  }
LABEL_181:
  ThreadUnlock1(v12, v11);
  result = 1LL;
  *v98 = v3;
  return result;
}
