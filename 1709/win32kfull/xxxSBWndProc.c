/*
 * XREFs of xxxSBWndProc @ 0x1C02110F0
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01C2440 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxGetScrollBarInfo @ 0x1C0076FC0 (xxxGetScrollBarInfo.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     DrawThumb2 @ 0x1C0082658 (DrawThumb2.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0082D64 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00839E8 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C0083C74 (xxxEnableScrollBar.c)
 *     zzzDestroyCaret @ 0x1C0084510 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0084868 (xxxCreateCaret.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     _FChildVisible @ 0x1C009339C (_FChildVisible.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     xxxMoveWindow @ 0x1C0101C1C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ConstrainWindowSIZERECT @ 0x1C01AB1B4 (ConstrainWindowSIZERECT.c)
 *     zzzHideCaret @ 0x1C020DDBC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C020DDE4 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020FD88 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02104F8 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0210548 (DrawSize.c)
 *     SBCtlSetup @ 0x1C0210678 (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C02106B8 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C023A9FC (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  struct tagSCROLLINFO *v5; // r10
  int v6; // ebx
  struct tagSCROLLINFO *v7; // r12
  _DWORD *v8; // r15
  unsigned int v9; // r13d
  __int16 v11; // ax
  unsigned int v12; // esi
  unsigned __int64 result; // rax
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rcx
  _DWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 v23; // r9
  __int64 v24; // r9
  bool v25; // zf
  int v26; // r8d
  int v27; // edx
  int v28; // r9d
  __int64 v29; // rdx
  unsigned int v30; // r15d
  unsigned int v31; // r13d
  int v32; // r10d
  int v33; // r8d
  int v34; // ecx
  int v35; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  int v47; // edi
  __int64 v48; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  ULONG_PTR v54; // r9
  unsigned int v55; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v58; // rdi
  HDC v59; // r12
  __int64 v60; // rax
  int v61; // edi
  unsigned int v62; // r15d
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdi
  struct _LARGE_STRING *v67; // r12
  unsigned int v68; // r13d
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // r8
  int v75; // [rsp+50h] [rbp-B0h] BYREF
  int v76; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h] BYREF
  int *v78; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v79; // [rsp+68h] [rbp-98h]
  int v80; // [rsp+6Ch] [rbp-94h]
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  __int64 v82; // [rsp+78h] [rbp-88h]
  int v83; // [rsp+88h] [rbp-78h] BYREF
  int v84; // [rsp+8Ch] [rbp-74h]
  int v85; // [rsp+90h] [rbp-70h]
  int v86; // [rsp+94h] [rbp-6Ch]
  int v87; // [rsp+9Ch] [rbp-64h]
  _QWORD v88[10]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *((_DWORD *)a1 + 76);
  v5 = (struct tagSCROLLINFO *)&v83;
  v6 = 0;
  v78 = &v83;
  v7 = (struct tagSCROLLINFO *)a4;
  v8 = (_DWORD *)a3;
  v9 = a2;
  if ( (v4 & 0x800) != 0 )
    return 0LL;
  v11 = *((_WORD *)a1 + 41);
  v12 = 1;
  if ( v11 != 666 )
  {
    if ( v11 )
      return 0LL;
    if ( (_DWORD)a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v14 = *((_DWORD *)a1 + 63);
    a3 = *(unsigned __int16 *)(gpsi + 328LL);
    if ( v14 + 400 >= (unsigned int)a3 )
    {
      v19 = (void *)*((_QWORD *)a1 + 49);
      if ( !v19 )
      {
LABEL_15:
        *((_WORD *)a1 + 41) = 666;
        goto LABEL_16;
      }
      memset(v19, 0, *((unsigned int *)a1 + 63));
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + v14 + 400 < (unsigned int)a3 )
        return 0LL;
      v15 = a3 - 400;
      v16 = Win32AllocPoolWithQuotaZInit((unsigned int)(a3 - 400), 1937208149LL);
      v77 = v16;
      if ( !v16 )
        return 0LL;
      v18 = *((_QWORD *)a1 + 49);
      if ( v18 )
      {
        Win32FreePool(v18, v17, a3);
        v16 = v77;
      }
      *((_QWORD *)a1 + 49) = v16;
      *((_DWORD *)a1 + 63) = v15;
    }
    v5 = (struct tagSCROLLINFO *)&v83;
    goto LABEL_15;
  }
LABEL_16:
  v20 = (_DWORD *)*((_QWORD *)a1 + 49);
  v21 = 3LL;
  *(_QWORD *)v20 = a1;
  v22 = *((unsigned __int8 *)a1 + 68);
  v23 = *((_BYTE *)a1 + 68);
  LODWORD(v77) = v23;
  v24 = v23 & 0x18;
  v75 = v24;
  if ( v9 <= 0xE2 )
  {
    if ( v9 != 226 )
    {
      if ( v9 <= 0x14 )
      {
        if ( v9 != 20 )
        {
          if ( v9 != 1 )
          {
            switch ( v9 )
            {
              case 5u:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL) != a1 )
                  return 0LL;
                zzzDestroyCaret();
                break;
              case 7u:
                break;
              case 8u:
                zzzDestroyCaret();
                return 0LL;
              case 0xAu:
                _InterlockedAdd(&glSendMessage, 1u);
                return xxxSendTransformableMessageTimeout(
                         (__int64 *)a1,
                         228LL,
                         -(__int64)(v8 == 0LL) & 3,
                         0LL,
                         0,
                         0,
                         0LL,
                         1u,
                         1);
              default:
                v25 = v9 == 15;
                goto LABEL_122;
            }
            SBCtlSetup((__int64)v20);
            v26 = v20[2];
            if ( v26 )
              v27 = *(_DWORD *)(*(_QWORD *)v20 + 136LL) - *(_DWORD *)(*(_QWORD *)v20 + 128LL);
            else
              v27 = v20[12];
            if ( v26 )
              v28 = v20[12];
            else
              v28 = *(_DWORD *)(*(_QWORD *)v20 + 140LL) - *(_DWORD *)(*(_QWORD *)v20 + 132LL);
            xxxCreateCaret(*(_QWORD *)v20, (HBRUSH)1, v27 - 4, v28 - 4);
            zzzSetSBCaretPos((struct tagSBWND *)v20);
            zzzShowCaret(*(struct tagWND **)v20, v29);
            return 0LL;
          }
          if ( !v7 )
          {
            UserSetLastError(87LL, v22);
            return 0LL;
          }
          v30 = *((_DWORD *)v7 + 11);
          LOBYTE(v21) = *((_BYTE *)a1 + 71) & 0xC0;
          v31 = *((_DWORD *)v7 + 10);
          v32 = *((_DWORD *)v7 + 9);
          v33 = *((_DWORD *)v7 + 8);
          if ( v30 == 0x80000000 )
          {
            if ( (_BYTE)v21 )
              v30 = 0;
            else
              v30 = *((_DWORD *)a1 + 32);
          }
          if ( v31 == 0x80000000 )
          {
            if ( (_BYTE)v21 )
              v31 = 0;
            else
              v31 = *((_DWORD *)a1 + 33);
          }
          if ( v32 == 0x80000000 )
          {
            if ( (_BYTE)v21 )
              v32 = 0;
            else
              v32 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
          }
          if ( v33 == 0x80000000 )
          {
            if ( (_BYTE)v21 )
              v33 = 0;
            else
              v33 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
          }
          v25 = (*((_BYTE *)a1 + 61) & 2) == 0;
          v75 = v30 + v32;
          v76 = v33 + v31;
          if ( v25 )
            *((_DWORD *)a1 + 17) &= 0xFFCFFFFF;
          if ( !(_DWORD)v24 )
          {
            v34 = *(_DWORD *)v7;
            v35 = (unsigned __int16)*(_DWORD *)v7;
            v20[4] = v35;
            v20[7] = v35;
            v20[5] = HIWORD(v34);
            v21 = *(_BYTE *)(*(_QWORD *)v20 + 68LL) & 1;
            v20[6] = 0;
            v20[2] = v21;
          }
          if ( (*(_DWORD *)(*(_QWORD *)v20 + 68LL) & 0x8000000) != 0 )
            v20[3] = 3;
          if ( (v22 & 6) == 0 )
            return 0LL;
          if ( (_DWORD)v24 )
          {
            DpiForSystem = GetDpiForSystem(v21, v22);
            DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
            v40 = GetDpiForSystem(v39, v38);
            v41 = GetDpiDependentMetric(1LL, v40);
            if ( (v77 & 4) != 0 )
            {
              v30 = v75 - DpiDependentMetric;
              v31 = v76 - v41;
            }
            v76 = v41 + v31;
            v42 = v30 + DpiDependentMetric;
            goto LABEL_73;
          }
          if ( (v22 & 1) != 0 )
          {
            if ( (v22 & 2) != 0 )
            {
              v43 = GetDpiForSystem(v21, v22);
              v42 = v30 + GetDpiDependentMetric(0LL, v43);
LABEL_73:
              v78 = (int *)__PAIR64__(v31, v30);
              v79 = v42 - v30;
              v80 = v76 - v31;
              ConstrainWindowSIZERECT((int *)&v78);
              xxxMoveWindow(*(struct tagWND **)v20, (unsigned int)v78, HIDWORD(v78), v79, v80, 0);
              return 0LL;
            }
            v44 = GetDpiForSystem(v21, v22);
            v30 = v75 - GetDpiDependentMetric(0LL, v44);
          }
          else if ( (v22 & 2) != 0 )
          {
            v45 = GetDpiForSystem(v21, v22);
            v76 = v31 + GetDpiDependentMetric(1LL, v45);
          }
          else
          {
            v46 = GetDpiForSystem(v21, v22);
            v31 = v76 - GetDpiDependentMetric(1LL, v46);
          }
          v42 = v75;
          goto LABEL_73;
        }
        return 1LL;
      }
      if ( v9 != 123 )
      {
        if ( v9 == 132 )
        {
          if ( (v22 & 0x10) != 0 )
            return ((*(unsigned __int8 *)(*((_QWORD *)a1 + 13) + 65LL) ^ (unsigned __int64)(unsigned __int8)~*((_BYTE *)a1 + 66)) >> 6) & 1 | 0x10;
LABEL_123:
          a4 = (__int64)v7;
          a3 = (__int64)v8;
          a2 = v9;
          return xxxDefWindowProc(a1, a2, a3, a4);
        }
        if ( v9 == 135 )
          return 1LL;
        if ( v9 != 224 )
        {
          if ( v9 == 225 )
            return (int)v20[7];
          goto LABEL_123;
        }
        v47 = (int)v7;
        v84 = 4100;
        v87 = (int)v8;
        goto LABEL_101;
      }
      v48 = *((_QWORD *)a1 + 13);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, a3, v24);
      v81 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v81;
      v82 = v48;
      if ( v48 )
        _InterlockedAdd((volatile signed __int32 *)(v48 + 8), 1u);
      xxxDoScrollMenu(*(struct tagWND **)(*(_QWORD *)v20 + 104LL), *(struct tagWND **)v20, v20[2], (unsigned __int64)v7);
LABEL_88:
      ThreadUnlock1(v51, v50);
      return 0LL;
    }
    v47 = 0;
LABEL_100:
    v85 = (int)v8;
    v86 = (int)v7;
    v84 = 4097;
LABEL_101:
    v83 = 28;
    goto LABEL_102;
  }
  if ( v9 > 0xEB )
  {
    switch ( v9 )
    {
      case 0x100u:
        if ( v8 == (_DWORD *)33 )
        {
          v12 = 2;
        }
        else if ( v8 == (_DWORD *)34 )
        {
          v12 = 3;
        }
        else if ( v8 == (_DWORD *)35 )
        {
          v12 = 7;
        }
        else if ( v8 == (_DWORD *)36 )
        {
          v12 = 6;
        }
        else
        {
          if ( (unsigned __int64)v8 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)v8 <= 0x26 )
          {
            v12 = 0;
          }
          else if ( (unsigned __int64)v8 > 0x28 )
          {
            return 0LL;
          }
        }
        v74 = v12;
        break;
      case 0x101u:
        if ( (unsigned __int64)v8 - 33 > 7 )
          return 0LL;
        v74 = 8LL;
        break;
      case 0x201u:
        goto LABEL_135;
      case 0x203u:
        v62 = 61488;
        if ( !(_DWORD)v24 )
        {
LABEL_135:
          if ( !(_DWORD)v24 )
          {
            if ( (*((_BYTE *)a1 + 70) & 1) != 0 )
              xxxSetFocus(a1, 0LL);
            zzzHideCaret(*(struct tagWND **)v20, v22);
            SBCtlSetup((__int64)v20);
            LOBYTE(v6) = (GetKeyState(0x10u, v63, v64, v65) & 0x8000u) != 0LL;
            xxxSBTrackInit(*(struct tagWND **)v20, (__int64)v7, 0, v6);
            return 0LL;
          }
          v62 = 61440;
        }
        LODWORD(v77) = (__int16)v7;
        HIDWORD(v77) = SWORD1(v7);
        ClientToScreen(a1, &v77);
        v66 = *((_QWORD *)a1 + 13);
        LOBYTE(v9) = ~*(_BYTE *)(v66 + 66);
        v67 = (struct _LARGE_STRING *)((unsigned __int16)v77 | (WORD2(v77) << 16));
        v68 = ((*(unsigned __int8 *)(v66 + 65) ^ v9) >> 6) & 1;
        v72 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71);
        v81 = *(_QWORD *)(v72 + 392);
        *(_QWORD *)(v72 + 392) = &v81;
        v82 = v66;
        if ( v66 )
          _InterlockedAdd((volatile signed __int32 *)(v66 + 8), 1u);
        v73 = *(__int64 **)(*(_QWORD *)v20 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v73, 274LL, v62 | (unsigned __int64)(v68 + 7), v67, 0, 0, 0LL, 1u, 1);
        goto LABEL_88;
      default:
        v25 = v9 == 792;
LABEL_122:
        if ( !v25 )
          goto LABEL_123;
        v59 = (HDC)v8;
        if ( !v8 )
        {
          v60 = xxxBeginPaint(a1, (__int64)v88);
          LODWORD(v24) = v75;
          v59 = (HDC)v60;
        }
        if ( (_DWORD)v24 )
        {
          v61 = *(_BYTE *)(*(_QWORD *)v20 + 70LL) & 4;
          if ( (*(_BYTE *)(*(_QWORD *)v20 + 70LL) & 4) == 0 )
            SetOrClrWF(1, *(_DWORD **)v20, 0xE04u, 1);
          DrawSize(*(_QWORD *)v20, (__int64)v59, 0, 0);
          if ( !v61 )
            SetOrClrWF(0, *(_DWORD **)v20, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v20);
          xxxDrawSB2(*(struct tagWND **)v20, (struct tagSBCALC *)(v20 + 4), v59, v20[2], v20[3]);
        }
        if ( !v8 )
          xxxEndPaint(*(struct tagWND **)v20, v88);
        return 0LL;
    }
    xxxDoScroll(a1, *((struct tagWND **)a1 + 13), v74, 0LL, v20[2]);
    return 0LL;
  }
  switch ( v9 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo((ULONG_PTR)a1, -4, (__int64)v7);
      return (int)result;
    case 0xE3u:
      *v8 = v20[4];
      *(_DWORD *)v7 = v20[5];
      return *((unsigned __int16 *)v20 + 8) | (unsigned __int64)(*((unsigned __int16 *)v20 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(a1);
      return (int)result;
    case 0xE6u:
      v47 = 1;
      goto LABEL_100;
  }
  if ( v9 != 233 )
  {
    if ( v9 != 234 )
      goto LABEL_123;
    LODWORD(result) = SBGetParms((__int64)a1, 2, v20 + 4, v7);
    return (int)result;
  }
  v5 = v7;
  v78 = (int *)v7;
  v47 = (int)v8;
LABEL_102:
  v76 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v20 + 4), v5, &v76, &v75) )
    xxxWindowEvent(0x800Eu, *(volatile signed __int32 **)v20, 4294967292LL, 0LL, 1);
  if ( v47 )
  {
    zzzHideCaret(*(struct tagWND **)v20, v52);
    SBCtlSetup((__int64)v20);
    zzzSetSBCaretPos((struct tagSBWND *)v20);
    if ( (unsigned int)FChildVisible(*(_QWORD *)v20) )
    {
      if ( v76 || (v78[1] & 8) == 0 )
        v55 = 0;
      else
        v55 = 3;
      xxxEnableScrollBar(v54, 2u, v55);
      DCEx = (HDC)_GetDCEx(*(_QWORD *)v20, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects(*(struct tagWND **)v20, (__int64)DCEx);
      v58 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*(_QWORD *)v20, v20 + 4, DCEx, ColorObjects, v20[2], v20[3]);
      GreSelectBrush(DCEx, v58);
      _ReleaseDC(DCEx);
    }
    zzzShowCaret(*(struct tagWND **)v20, v53);
  }
  return v75;
}
