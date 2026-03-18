/*
 * XREFs of xxxSBWndProc @ 0x1C020F940
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01BE920 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _FChildVisible @ 0x1C0021D80 (_FChildVisible.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     zzzDestroyCaret @ 0x1C00AFE40 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C00B0198 (xxxCreateCaret.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C00D66F0 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00D686C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00D6DD0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C00D7060 (xxxEnableScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00D74A4 (xxxGetScrollBarInfo.c)
 *     xxxMoveWindow @ 0x1C00F4050 (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ConstrainWindowSIZERECT @ 0x1C01A3D7C (ConstrainWindowSIZERECT.c)
 *     zzzHideCaret @ 0x1C020BE4C (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C020BE74 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020E3CC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020E55C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C020ED14 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C020ED64 (DrawSize.c)
 *     SBCtlSetup @ 0x1C020EED0 (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C020EF10 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C020EF98 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C0239294 (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  struct tagSCROLLINFO *v5; // r10
  int v6; // ebx
  struct tagSCROLLINFO *v7; // r12
  _DWORD *v8; // r15
  unsigned int v9; // r13d
  __int16 v11; // ax
  __int16 v12; // si
  unsigned __int64 result; // rax
  int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // rcx
  _DWORD *v20; // r14
  unsigned __int8 v21; // dl
  int v22; // r8d
  bool v23; // zf
  int v24; // r8d
  int v25; // edx
  int v26; // r9d
  unsigned int v27; // r13d
  unsigned int v28; // r15d
  int v29; // r9d
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // edi
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax
  int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  ULONG_PTR v45; // r9
  unsigned int v46; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v49; // rdi
  HDC v50; // r12
  __int64 v51; // rax
  int v52; // edi
  __int64 v53; // r9
  __int64 v54; // r8
  int v55; // r10d
  struct _LARGE_STRING *v56; // r11
  int v57; // edx
  ULONG_PTR v58; // rcx
  unsigned __int16 v59; // r8
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  int *v63; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+6Ch] [rbp-94h]
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h]
  int v68; // [rsp+88h] [rbp-78h] BYREF
  int v69; // [rsp+8Ch] [rbp-74h]
  int v70; // [rsp+90h] [rbp-70h]
  int v71; // [rsp+94h] [rbp-6Ch]
  int v72; // [rsp+9Ch] [rbp-64h]
  _QWORD v73[10]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *((_DWORD *)a1 + 76);
  v5 = (struct tagSCROLLINFO *)&v68;
  v6 = 0;
  v63 = &v68;
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
    if ( a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v14 = *((_DWORD *)a1 + 63);
    v15 = *(unsigned __int16 *)(gpsi + 328LL);
    if ( v14 + 400 >= v15 )
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
      if ( *((_DWORD *)a1 + 62) + v14 + 400 < v15 )
        return 0LL;
      v16 = v15 - 400;
      v17 = Win32AllocPoolWithQuotaZInit(v15 - 400, 1937208149LL);
      v62 = v17;
      if ( !v17 )
        return 0LL;
      v18 = *((_QWORD *)a1 + 49);
      if ( v18 )
      {
        Win32FreePool(v18);
        v17 = v62;
      }
      *((_QWORD *)a1 + 49) = v17;
      *((_DWORD *)a1 + 63) = v16;
    }
    v5 = (struct tagSCROLLINFO *)&v68;
    goto LABEL_15;
  }
LABEL_16:
  v20 = (_DWORD *)*((_QWORD *)a1 + 49);
  *(_QWORD *)v20 = a1;
  v21 = *((_BYTE *)a1 + 68);
  LODWORD(v62) = v21;
  v22 = v21 & 0x18;
  v60 = v22;
  if ( v9 <= 0xE2 )
  {
    if ( v9 != 226 )
    {
      if ( v9 <= 0x14 )
      {
        if ( v9 != 20 )
        {
          switch ( v9 )
          {
            case 1u:
              if ( v7 )
              {
                v27 = *((_DWORD *)v7 + 11);
                v28 = *((_DWORD *)v7 + 10);
                v29 = *((_DWORD *)v7 + 9);
                v30 = *((_DWORD *)v7 + 8);
                if ( v27 == 0x80000000 )
                {
                  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0 )
                    v27 = 0;
                  else
                    v27 = *((_DWORD *)a1 + 32);
                }
                if ( v28 == 0x80000000 )
                {
                  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0 )
                    v28 = 0;
                  else
                    v28 = *((_DWORD *)a1 + 33);
                }
                if ( v29 == 0x80000000 )
                {
                  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0 )
                    v29 = 0;
                  else
                    v29 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
                }
                if ( v30 == 0x80000000 )
                {
                  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0 )
                    v30 = 0;
                  else
                    v30 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
                }
                v23 = (*((_BYTE *)a1 + 61) & 2) == 0;
                v61 = v29 + v27;
                v60 = v30 + v28;
                if ( v23 )
                  *((_DWORD *)a1 + 17) &= 0xFFCFFFFF;
                if ( (v21 & 0x18) == 0 )
                {
                  v31 = *(_DWORD *)v7;
                  v32 = (unsigned __int16)*(_DWORD *)v7;
                  v20[4] = v32;
                  v20[7] = v32;
                  v20[5] = HIWORD(v31);
                  v33 = *(_BYTE *)(*(_QWORD *)v20 + 68LL) & 1;
                  v20[6] = 0;
                  v20[2] = v33;
                }
                if ( (*(_DWORD *)(*(_QWORD *)v20 + 68LL) & 0x8000000) != 0 )
                  v20[3] = 3;
                if ( (v21 & 6) != 0 )
                {
                  if ( (v21 & 0x18) != 0 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
                      v34 = *(_DWORD *)(gpsi + 1888LL);
                    else
                      v34 = *(_DWORD *)(gpsi + 2276LL);
                    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
                      v35 = *(_DWORD *)(gpsi + 1892LL);
                    else
                      v35 = *(_DWORD *)(gpsi + 2280LL);
                    if ( (v62 & 4) != 0 )
                    {
                      v27 = v61 - v34;
                      v28 = v60 - v35;
                    }
                    v60 = v35 + v28;
                    v36 = v34 + v27;
                  }
                  else if ( (v21 & 1) != 0 )
                  {
                    if ( (v21 & 2) != 0 )
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
                        v37 = *(_DWORD *)(gpsi + 1888LL);
                      else
                        v37 = *(_DWORD *)(gpsi + 2276LL);
                      v36 = v27 + v37;
                    }
                    else
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
                        v38 = *(_DWORD *)(gpsi + 1888LL);
                      else
                        v38 = *(_DWORD *)(gpsi + 2276LL);
                      v36 = v61;
                      v27 = v61 - v38;
                    }
                  }
                  else
                  {
                    if ( (v21 & 2) != 0 )
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
                        v39 = *(_DWORD *)(gpsi + 1892LL);
                      else
                        v39 = *(_DWORD *)(gpsi + 2280LL);
                      v60 = v28 + v39;
                    }
                    else
                    {
                      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
                        v40 = *(_DWORD *)(gpsi + 1892LL);
                      else
                        v40 = *(_DWORD *)(gpsi + 2280LL);
                      v28 = v60 - v40;
                    }
                    v36 = v61;
                  }
                  v63 = (int *)__PAIR64__(v28, v27);
                  v64 = v36 - v27;
                  v65 = v60 - v28;
                  ConstrainWindowSIZERECT((int *)&v63);
                  xxxMoveWindow(*(struct tagWND **)v20, (unsigned int)v63, HIDWORD(v63), v64, v65, 0);
                }
              }
              else
              {
                UserSetLastError(87LL);
              }
              return 0LL;
            case 5u:
              if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) != a1 )
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
                       (ULONG_PTR)a1,
                       0xE4u,
                       -(__int64)(v8 == 0LL) & 3,
                       0LL,
                       0,
                       0,
                       0LL,
                       1,
                       1);
            default:
              v23 = v9 == 15;
              goto LABEL_140;
          }
          SBCtlSetup((__int64)v20);
          v24 = v20[2];
          if ( v24 )
            v25 = *(_DWORD *)(*(_QWORD *)v20 + 136LL) - *(_DWORD *)(*(_QWORD *)v20 + 128LL);
          else
            v25 = v20[12];
          if ( v24 )
            v26 = v20[12];
          else
            v26 = *(_DWORD *)(*(_QWORD *)v20 + 140LL) - *(_DWORD *)(*(_QWORD *)v20 + 132LL);
          xxxCreateCaret(*(__int64 **)v20, (HBRUSH)1, v25 - 4, v26 - 4);
          zzzSetSBCaretPos((struct tagSBWND *)v20);
          zzzShowCaret(*(struct tagWND **)v20);
          return 0LL;
        }
        return 1LL;
      }
      if ( v9 != 123 )
      {
        if ( v9 == 132 )
        {
          if ( (v21 & 0x10) != 0 )
            return ((*(unsigned __int8 *)(*((_QWORD *)a1 + 13) + 65LL) ^ (unsigned __int64)(unsigned __int8)~*((_BYTE *)a1 + 66)) >> 6) & 1 | 0x10;
LABEL_141:
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
          goto LABEL_141;
        }
        v41 = (int)v7;
        v69 = 4100;
        v72 = (int)v8;
        goto LABEL_119;
      }
      v42 = *((_QWORD *)a1 + 13);
      v66 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v66;
      v67 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      xxxDoScrollMenu(*(struct tagWND **)(*(_QWORD *)v20 + 104LL), *(struct tagWND **)v20, v20[2], (unsigned __int64)v7);
LABEL_106:
      ThreadUnlock1(v44, v43);
      return 0LL;
    }
    v41 = 0;
LABEL_118:
    v70 = (int)v8;
    v71 = (int)v7;
    v69 = 4097;
LABEL_119:
    v68 = 28;
    goto LABEL_120;
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
        v59 = v12;
        break;
      case 0x101u:
        if ( (unsigned __int64)v8 - 33 > 7 )
          return 0LL;
        v59 = 8;
        break;
      case 0x201u:
        goto LABEL_153;
      case 0x203u:
        if ( (v21 & 0x18) == 0 )
        {
LABEL_153:
          if ( (v21 & 0x18) == 0 )
          {
            if ( (*((_BYTE *)a1 + 70) & 1) != 0 )
              xxxSetFocus(a1, 0LL);
            zzzHideCaret(*(struct tagWND **)v20);
            SBCtlSetup((__int64)v20);
            LOBYTE(v6) = (GetKeyState(0x10u) & 0x8000u) != 0LL;
            xxxSBTrackInit(*(struct tagWND **)v20, (__int64)v7, 0, v6);
            return 0LL;
          }
        }
        LODWORD(v62) = (__int16)v7;
        HIDWORD(v62) = SWORD1(v7);
        ClientToScreen(a1, &v62);
        v54 = *((_QWORD *)a1 + 13);
        v55 = (*(unsigned __int8 *)(v54 + 66) >> 6) & 1;
        v56 = (struct _LARGE_STRING *)((unsigned __int16)v62 | (WORD2(v62) << 16));
        v57 = (*(unsigned __int8 *)(v54 + 65) >> 6) & 1;
        v66 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v66;
        v67 = v54;
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        v58 = *(_QWORD *)(*(_QWORD *)v20 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v58, 0x112u, v53 | (8LL - (v55 != v57)), v56, 0, 0, 0LL, 1, 1);
        goto LABEL_106;
      default:
        v23 = v9 == 792;
LABEL_140:
        if ( !v23 )
          goto LABEL_141;
        v50 = (HDC)v8;
        if ( !v8 )
        {
          v51 = xxxBeginPaint(a1, (__int64)v73);
          v22 = v60;
          v50 = (HDC)v51;
        }
        if ( v22 )
        {
          v52 = *(_BYTE *)(*(_QWORD *)v20 + 70LL) & 4;
          if ( (*(_BYTE *)(*(_QWORD *)v20 + 70LL) & 4) == 0 )
            SetOrClrWF(1, *(_DWORD **)v20, 0xE04u, 1);
          DrawSize(*(_QWORD *)v20, v50, 0, 0);
          if ( !v52 )
            SetOrClrWF(0, *(_DWORD **)v20, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v20);
          xxxDrawSB2(*(struct tagWND **)v20, (struct tagSBCALC *)(v20 + 4), v50, v20[2], v20[3]);
        }
        if ( !v8 )
          xxxEndPaint(*(struct tagWND **)v20, v73);
        return 0LL;
    }
    xxxDoScroll(a1, *((struct tagWND **)a1 + 13), v59, 0, v20[2]);
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
      return *((unsigned __int16 *)v20 + 8) | ((unsigned __int64)*((unsigned __int16 *)v20 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(a1);
      return (int)result;
    case 0xE6u:
      v41 = 1;
      goto LABEL_118;
  }
  if ( v9 != 233 )
  {
    if ( v9 != 234 )
      goto LABEL_141;
    LODWORD(result) = SBGetParms((__int64)a1, 2, v20 + 4, v7);
    return (int)result;
  }
  v5 = v7;
  v63 = (int *)v7;
  v41 = (int)v8;
LABEL_120:
  v61 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v20 + 4), v5, &v61, &v60) )
    xxxWindowEvent(0x800Eu, *(__int64 **)v20, -4, 0, 1);
  if ( v41 )
  {
    zzzHideCaret(*(struct tagWND **)v20);
    SBCtlSetup((__int64)v20);
    zzzSetSBCaretPos((struct tagSBWND *)v20);
    if ( (unsigned int)FChildVisible(*(_QWORD *)v20) )
    {
      if ( v61 || (v63[1] & 8) == 0 )
        v46 = 0;
      else
        v46 = 3;
      xxxEnableScrollBar(v45, 2u, v46);
      DCEx = (HDC)_GetDCEx(*(_QWORD *)v20, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects(*(struct tagWND **)v20, (__int64)DCEx);
      v49 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*(_QWORD *)v20, v20 + 4, DCEx, ColorObjects, v20[2], v20[3]);
      GreSelectBrush(DCEx, v49);
      _ReleaseDC(DCEx);
    }
    zzzShowCaret(*(struct tagWND **)v20);
  }
  return v60;
}
