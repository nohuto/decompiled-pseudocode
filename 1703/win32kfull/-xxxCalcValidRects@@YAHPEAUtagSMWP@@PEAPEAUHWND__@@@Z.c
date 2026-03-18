/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C001F65C (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001FDE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     _FChildVisible @ 0x1C0021D80 (_FChildVisible.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0063098 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006474C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068410 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetAppCompatFlags @ 0x1C00F8ED0 (GetAppCompatFlags.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0105978 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01A3358 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v2; // r12
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  LONG v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // r15
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // r13
  int v27; // r12d
  int v28; // r14d
  int v29; // r8d
  int v30; // edx
  int v31; // r13d
  __int64 v32; // rdx
  int v33; // r8d
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // r12d
  int v39; // eax
  LONG *v40; // r15
  int v41; // r10d
  int v42; // r14d
  int v43; // eax
  __int64 result; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int128 v49; // xmm1
  __int64 v50; // xmm0_8
  int v51; // r13d
  int v52; // r14d
  unsigned int v53; // r12d
  int v54; // eax
  int v55; // eax
  int v56; // edx
  int v57; // r11d
  int v58; // r9d
  int v59; // r8d
  int v60; // r10d
  int v61; // r14d
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r14
  __int16 v65; // r12
  LONG v66; // edx
  int v67; // ecx
  __int64 NewMonitor; // rax
  __int64 AppCompatFlags; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // [rsp+50h] [rbp-B0h]
  int v74; // [rsp+50h] [rbp-B0h]
  int v75; // [rsp+54h] [rbp-ACh]
  int v76; // [rsp+58h] [rbp-A8h]
  int v77; // [rsp+5Ch] [rbp-A4h]
  int v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+6Ch] [rbp-94h]
  int v82; // [rsp+70h] [rbp-90h]
  HWND v83; // [rsp+78h] [rbp-88h]
  struct tagRECT v84; // [rsp+80h] [rbp-80h] BYREF
  HWND *v85; // [rsp+90h] [rbp-70h]
  __int64 v86; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v87[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v88[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v89[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-10h]
  int v91[14]; // [rsp+F8h] [rbp-8h] BYREF

  v2 = 0LL;
  v85 = a2;
  v83 = 0LL;
  memset(v91, 0, sizeof(v91));
  v78 = 0;
  v75 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = 2LL * (unsigned __int16)*(_DWORD *)ValidWindowPos;
  v6 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) + 104LL);
  v7 = gptiCurrent;
  v87[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v87;
  v87[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *((_QWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 7);
  v77 = 1;
  while ( 1 )
  {
    v80 = --v9;
    if ( v9 < 0 )
    {
      ThreadUnlock1(v7, v5);
      result = 1LL;
      *v85 = v2;
      return result;
    }
    v22 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 )
      break;
LABEL_23:
    v8 += 168LL;
  }
  v23 = HMValidateHandleNoSecure(*(_QWORD *)v8, 1);
  if ( !v23 || (v24 = *(_QWORD *)(v8 + 8), v24 > 1) && v24 <= 0xFFFFFFFFFFFFFFFDuLL && !HMValidateHandleNoSecure(v24, 1) )
  {
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 32) = 6159;
    goto LABEL_23;
  }
  v88[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v88;
  v88[1] = v23;
  ++*(_DWORD *)(v23 + 8);
  v73 = 0;
  if ( !v2 && (*(_DWORD *)(v8 + 32) & 0x10) == 0 )
    v83 = *(HWND *)v23;
  v25 = *(_DWORD *)(v8 + 32);
  if ( (v25 & 0x400) == 0 )
  {
    v26 = *(_QWORD *)(v8 + 8);
    v27 = *(_DWORD *)(v8 + 32) & 4;
    v28 = v25 & 0x750000;
    if ( gfShellFrameHangResilient
      && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
      && gptiCurrent != *(_QWORD *)(v23 + 16) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) != 1 )
        xxxSendTransformableMessageTimeout(v23, 0x46u, 0LL, (struct _LARGE_STRING *)v8, 2, 50, &v86, 1, 0);
    }
    else
    {
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v23, 0x46u, 0LL, (struct _LARGE_STRING *)v8, 0, 0, 0LL, 1, 0);
    }
    *(_DWORD *)(v8 + 32) |= v28;
    v29 = *(_DWORD *)(v8 + 32);
    v30 = *(_DWORD *)(v8 + 156);
    if ( (*(_BYTE *)(v8 + 32) & 3) != 3 && (v30 & 0x20) == 0 )
    {
      *(_QWORD *)(v8 + 128) = *(_QWORD *)(v23 + 360);
      *(_DWORD *)(v8 + 156) = v30 | 0x20;
    }
    *(_QWORD *)v8 = v22;
    if ( (v29 & 4) == 0 && (v27 || *(_WORD *)(v8 + 8) != (_WORD)v26) )
    {
      if ( !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
        goto LABEL_174;
      if ( *(_WORD *)(v8 + 8) != (_WORD)v26 || *(_QWORD *)(v8 + 8) >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v48 = CheckTopmost((struct tagWINDOWPOS *)v8);
        if ( v48 )
        {
          if ( *(_DWORD *)(v23 + 320) == 1 )
            SetTopmostEnum((struct tagWND *)v23, v48 == 1, (*(_DWORD *)(v8 + 32) >> 9) & 1);
        }
      }
    }
  }
  v31 = *(_DWORD *)(v23 + 128);
  v32 = 0LL;
  v33 = *(_DWORD *)(v23 + 132);
  v34 = v31;
  *(_DWORD *)(v8 + 80) = v31;
  *(_DWORD *)(v8 + 84) = v33;
  v35 = *(_QWORD *)(v23 + 24);
  v81 = v31;
  v76 = v33;
  if ( v35 )
  {
    v36 = *(_QWORD *)(v35 + 8);
    if ( v36 )
      v32 = *(_QWORD *)(v36 + 16);
  }
  if ( v6 != v32 )
  {
    v31 -= *(_DWORD *)(v6 + 144);
    v33 -= *(_DWORD *)(v6 + 148);
    v81 = v31;
    v76 = v33;
    if ( (*(_BYTE *)(v6 + 66) & 0x40) != 0 && (*(_BYTE *)(v23 + 71) & 0xC0) == 0x40 )
    {
      v34 = *(_DWORD *)(v6 + 152) - *(_DWORD *)(v23 + 136);
      v75 = 1;
    }
    else
    {
      v75 = 0;
      v34 = v31;
    }
  }
  v37 = *(_DWORD *)(v23 + 136) - *(_DWORD *)(v23 + 128);
  v38 = *(_DWORD *)(v23 + 140) - *(_DWORD *)(v23 + 132);
  *(_DWORD *)(v8 + 32) |= 0x1800u;
  v79 = v37;
  if ( (*(_BYTE *)(v23 + 305) & 3) != 0 && (*(_DWORD *)(v8 + 32) & 0x100000) != 0 )
  {
    ExtendArrangedRectangleByFrameMargin((struct tagWND *)v23, (struct tagSIZERECT *)(v8 + 16));
    v33 = v76;
  }
  v39 = *(_DWORD *)(v8 + 32);
  v40 = (LONG *)(v8 + 16);
  if ( (v39 & 2) != 0 )
  {
    *v40 = v34;
    *(_DWORD *)(v8 + 20) = v33;
  }
  else
  {
    if ( *v40 == v34 && *(_DWORD *)(v8 + 20) == v33 )
    {
      *(_DWORD *)(v8 + 32) = v39 | 2;
      v45 = v78;
      if ( v75 )
        v45 = 1;
      v78 = v45;
    }
    if ( (*(_BYTE *)(v23 + 71) & 0x20) != 0 && (unsigned int)IsTrayWindow(v23) )
    {
      *v40 = -32000;
      *(_DWORD *)(v8 + 20) = -32000;
    }
  }
  v41 = *(_DWORD *)(v8 + 32);
  if ( (v41 & 1) != 0 )
  {
    *(_DWORD *)(v8 + 28) = v38;
    *(_DWORD *)(v8 + 24) = v79;
    goto LABEL_49;
  }
  if ( (*(_BYTE *)(v23 + 71) & 0x20) != 0 && GetProp(v23, atomCheckpointProp, 1) )
  {
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(gpsi + 2108LL);
    *(_DWORD *)(v8 + 28) = *(_DWORD *)(gpsi + 2112LL);
  }
  else
  {
    if ( *(int *)(v8 + 24) < 0 )
      *(_DWORD *)(v8 + 24) = 0;
    if ( *(int *)(v8 + 28) < 0 )
      *(_DWORD *)(v8 + 28) = 0;
  }
  if ( *(_DWORD *)(v8 + 24) == v79
    && *(_DWORD *)(v8 + 28) == v38
    && (*(_DWORD *)(v8 + 32) = v41 | 1, (*(_BYTE *)(v23 + 61) & 1) == 0) )
  {
    v42 = 1;
    v73 = 1;
  }
  else
  {
LABEL_49:
    v42 = 0;
  }
  if ( v75 )
    *v40 = *(_DWORD *)(v6 + 152) - *(_DWORD *)(v6 + 144) - *v40 - *(_DWORD *)(v8 + 24);
  if ( (*(_BYTE *)(v23 + 71) & 0x10) != 0 )
  {
    *(_DWORD *)(v8 + 32) &= ~0x40u;
  }
  else
  {
    *(_DWORD *)(v8 + 32) &= ~0x80u;
    v43 = *(_DWORD *)(v8 + 32);
    if ( (v43 & 0x40) == 0 )
      *(_DWORD *)(v8 + 32) = v43 | 8;
  }
  if ( (*(_BYTE *)(v23 + 67) & 2) == 0 && GetStyleWindow(v23, 2818LL) )
    *(_DWORD *)(v8 + 32) |= 0x100u;
  if ( (*(_BYTE *)(v23 + 60) & 0x20) != 0 )
  {
    *(_DWORD *)(v8 + 32) &= ~4u;
    *(_QWORD *)(v8 + 8) = 1LL;
  }
  if ( v77 )
  {
    if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
    {
      v77 = 0;
      if ( (*(_BYTE *)(v23 + 59) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v8) )
        {
          *(_DWORD *)(v8 + 32) |= 4u;
          v77 = 1;
        }
      }
    }
  }
  v10 = *(unsigned int *)(v8 + 32);
  if ( (v10 & 8) == 0 && ((*(_DWORD *)(v8 + 32) & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v23)) )
  {
    v10 = (unsigned int)v10 | 8;
    *(_DWORD *)(v8 + 32) = v10;
  }
  if ( (*(_DWORD *)(v8 + 32) & 2) == 0 && (*(_BYTE *)(v23 + 61) & 1) == 0 )
  {
    AppCompatFlags = GetAppCompatFlags(0LL);
    if ( (AppCompatFlags & 0x20000) != 0 )
      v42 = 1;
    v73 = v42;
  }
  if ( (*(_DWORD *)(v8 + 156) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v23) )
  {
    v63 = ValidateHmonitor(*(_QWORD *)(v8 + 128), v10, v11, v12);
    v64 = v63;
    v65 = v63 ? *(_WORD *)(*(_QWORD *)(v63 + 40) + 128LL) : 0;
    v66 = *(_DWORD *)(v8 + 20);
    v84.left = *v40;
    v84.right = *(_DWORD *)(v8 + 24) + v84.left;
    v67 = *(_DWORD *)(v8 + 28);
    v84.top = v66;
    v84.bottom = v66 + v67;
    NewMonitor = GetNewMonitor((__m128i *)v23, &v84, 0LL);
    if ( NewMonitor )
    {
      if ( v64 != NewMonitor )
      {
        v10 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 128LL);
        if ( v65 != (_WORD)v10 )
          *(_DWORD *)(v8 + 156) ^= (*(_DWORD *)(v8 + 156) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                             v23,
                                                                             v10,
                                                                             &v84,
                                                                             v8 + 136) << 7)) & 0x80;
      }
    }
  }
  LODWORD(v13) = *(_DWORD *)(v8 + 32);
  if ( (v13 & 0x21) == 1 && !v73 )
  {
    v14 = v76;
    goto LABEL_12;
  }
  *(_DWORD *)(v8 + 156) |= 4u;
  if ( (*(_BYTE *)(v23 + 71) & 0x40) == 0 && *(char *)(v23 + 64) >= 0 )
    xxxCheckFullScreen(v23, v8 + 16);
  v49 = *(_OWORD *)(v8 + 16);
  v89[0] = *(_OWORD *)v8;
  v50 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)&v91[12] = v89;
  v91[0] = *v40;
  v91[2] = *(_DWORD *)(v8 + 24) + v91[0];
  v91[1] = *(_DWORD *)(v8 + 20);
  v91[3] = *(_DWORD *)(v8 + 28) + v91[1];
  v89[1] = v49;
  v90 = v50;
  GetRect(v23, &v91[4], 66);
  GetRect(v23, &v91[8], 65);
  v51 = v91[8];
  v52 = v91[9];
  v82 = v91[10] - v91[8];
  v74 = v91[11] - v91[9];
  _InterlockedAdd(&glSendMessage, 1u);
  v53 = xxxSendTransformableMessageTimeout(v23, 0x83u, 1uLL, (struct _LARGE_STRING *)v91, 0, 0, 0LL, 1, 0);
  if ( (unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
  {
    if ( v53 - 16 > 0x3F0 )
    {
      v53 = 48;
      *(_OWORD *)&v91[4] = *(_OWORD *)v91;
    }
    if ( (*(_BYTE *)(v23 + 66) & 0x40) != 0 )
      v54 = v91[6] - v91[10];
    else
      v54 = v91[4] - v91[8];
    *(_DWORD *)(v8 + 72) = v54;
    *(_DWORD *)(v8 + 76) = v91[5] - v91[9];
    *(_DWORD *)(v8 + 40) = v91[0];
    *(_DWORD *)(v8 + 44) = v91[1];
    *(_DWORD *)(v8 + 48) = v91[2] - v91[0];
    v55 = v91[3] - v91[1];
    *(_DWORD *)(v8 + 52) = v91[3] - v91[1];
    if ( v51 != v91[0] || v52 != v91[1] )
      *(_DWORD *)(v8 + 32) &= ~0x1000u;
    v10 = *(unsigned int *)(v8 + 48);
    if ( v82 != (_DWORD)v10 || v74 != v55 )
      *(_DWORD *)(v8 + 32) &= ~0x800u;
    v13 = *(unsigned int *)(v8 + 32);
    if ( (v13 & 0x100) == 0 && !v78 && (*(_BYTE *)(v23 + 64) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 0x821) == 0x801 )
      {
        v31 = v81;
        if ( *(_DWORD *)(v8 + 72) == *v40 - v81 )
        {
          v14 = v76;
          if ( *(_DWORD *)(v8 + 76) == *(_DWORD *)(v8 + 20) - v76 )
          {
LABEL_12:
            if ( (v13 & 0x100) != 0 )
            {
              *(_QWORD *)(v8 + 56) = 0LL;
              *(_QWORD *)(v8 + 64) = 0LL;
            }
            else
            {
              v10 = (unsigned int)*v40;
              v15 = 0LL;
              v16 = *(_DWORD *)(v8 + 20);
              *(_DWORD *)(v8 + 56) = v10;
              *(_DWORD *)(v8 + 60) = v16;
              v17 = *(_QWORD *)(v23 + 24);
              if ( v17 )
              {
                v18 = *(_QWORD *)(v17 + 8);
                if ( v18 )
                  v15 = *(_QWORD *)(v18 + 16);
              }
              if ( v6 != v15 )
              {
                *(_DWORD *)(v8 + 56) = v10 + *(_DWORD *)(v6 + 144);
                *(_DWORD *)(v8 + 60) = v16 + *(_DWORD *)(v6 + 148);
              }
              *(_DWORD *)(v8 + 64) = *(_DWORD *)(v8 + 24) + *(_DWORD *)(v8 + 56);
              *(_DWORD *)(v8 + 68) = *(_DWORD *)(v8 + 60) + *(_DWORD *)(v8 + 28);
            }
            v19 = *v40;
            if ( (*(_BYTE *)(v23 + 66) & 0x40) != 0 )
              v20 = *(_DWORD *)(v8 + 24) + v19 - v79 - v31;
            else
              v20 = v19 - v31;
            v13 = (unsigned int)(*(_DWORD *)(v8 + 20) - v14);
            *(_DWORD *)(v8 + 72) = v20;
            v21 = *(_DWORD *)(v8 + 32);
            *(_DWORD *)(v8 + 76) = v13;
            if ( (v21 & 2) == 0 )
            {
              *(_DWORD *)(v8 + 32) = v21 & 0xFFFFEFFF;
              *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 72) + *(_DWORD *)(v23 + 144);
              *(_DWORD *)(v8 + 44) = *(_DWORD *)(v23 + 148) + v13;
              if ( v6 != GetDesktopWindow(v23) )
              {
                *(_DWORD *)(v8 + 40) -= *(_DWORD *)(v6 + 144);
                *(_DWORD *)(v8 + 44) -= *(_DWORD *)(v6 + 148);
              }
              *(_DWORD *)(v8 + 48) = *(_DWORD *)(v23 + 152) - *(_DWORD *)(v23 + 144);
              v13 = (unsigned int)(*(_DWORD *)(v23 + 156) - *(_DWORD *)(v23 + 148));
              *(_DWORD *)(v8 + 52) = v13;
            }
            goto LABEL_22;
          }
        }
      }
      if ( (v82 == (_DWORD)v10 || (v53 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(v23 + 168) + 92LL) & 2) == 0)
        && (v74 == *(_DWORD *)(v8 + 52) || (v53 & 0x200) == 0 && (*(_BYTE *)(*(_QWORD *)(v23 + 168) + 92LL) & 1) == 0) )
      {
        v56 = v91[10] - v91[8];
        v57 = v91[11] - v91[9];
        v58 = v91[4];
        v59 = v91[6] - v91[4];
        v60 = v91[5];
        v61 = v91[7] - v91[5];
        if ( ((*(_BYTE *)(v23 + 66) & 0x40) != 0) != ((v53 >> 7) & 1) )
        {
          if ( (*(_BYTE *)(v23 + 66) & 0x40) != 0 && v56 > v59 )
            v70 = v56 - v59;
          else
            v70 = v59 - v56;
          v58 = v70 + v91[4];
          v91[4] += v70;
        }
        if ( (v53 & 0x40) != 0 )
        {
          v60 = v91[7] - v57;
          v91[5] = v91[7] - v57;
        }
        if ( v56 < v59 )
          v91[6] = v58 + v56;
        if ( v57 < v61 )
          v91[7] = v60 + v57;
        *(_OWORD *)(v8 + 56) = *(_OWORD *)&v91[4];
        if ( v6 != GetDesktopWindow(v23) )
        {
          v13 = *(unsigned int *)(v6 + 148);
          v62 = *(_DWORD *)(v6 + 144);
          *(_DWORD *)(v8 + 56) += v62;
          *(_DWORD *)(v8 + 64) += v62;
          *(_DWORD *)(v8 + 68) += v13;
          *(_DWORD *)(v8 + 60) += v13;
        }
        goto LABEL_22;
      }
    }
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
LABEL_22:
    ThreadUnlock1(v13, v10);
    v9 = v80;
    v2 = v83;
    goto LABEL_23;
  }
LABEL_174:
  ThreadUnlock1(v47, v46);
  ThreadUnlock1(v72, v71);
  return 0LL;
}
