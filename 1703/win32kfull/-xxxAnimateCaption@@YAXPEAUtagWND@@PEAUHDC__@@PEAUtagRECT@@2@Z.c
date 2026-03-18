/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C020CA90 (xxxDrawAnimatedRects.c)
 * Callees:
 *     _WindowFromDC @ 0x1C0048E30 (_WindowFromDC.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     CreateCaptionStrip @ 0x1C0113380 (CreateCaptionStrip.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020C2CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxAnimateCaption(struct tagWND *a1, __int64 *a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagWND *v6; // r12
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // ebx
  HDC CompatibleDC; // rdi
  _QWORD *v11; // rdx
  __int64 CaptionStrip; // rax
  __int64 v13; // rax
  LONG left; // ecx
  LONG v15; // r15d
  int v16; // r14d
  LONG top; // ebp
  int v18; // r13d
  int WindowBorders; // esi
  int v20; // ecx
  LONG v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r13d
  __int64 i; // rax
  int v33; // r8d
  unsigned int v34; // ecx
  unsigned __int16 v35; // cx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  LONG v42; // [rsp+60h] [rbp-B8h]
  int v43; // [rsp+60h] [rbp-B8h]
  LONG v44; // [rsp+64h] [rbp-B4h]
  int v45; // [rsp+64h] [rbp-B4h]
  int v46; // [rsp+68h] [rbp-B0h]
  LONG v47; // [rsp+6Ch] [rbp-ACh]
  int v48; // [rsp+70h] [rbp-A8h]
  int v50; // [rsp+80h] [rbp-98h]
  int v52; // [rsp+88h] [rbp-90h]
  unsigned __int64 v54; // [rsp+90h] [rbp-88h]
  __int64 v55; // [rsp+98h] [rbp-80h]
  _QWORD v56[3]; // [rsp+A0h] [rbp-78h] BYREF
  struct tagRECT v57; // [rsp+B8h] [rbp-60h] BYREF

  *(_QWORD *)&v57.left = a4;
  v6 = WindowFromDC(a2);
  if ( v6 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    {
      v7 = gpsi;
      v8 = *(_DWORD *)(gpsi + 1896LL);
    }
    else
    {
      v7 = gpsi;
      v8 = *(_DWORD *)(gpsi + 2284LL);
    }
    v9 = v8 - 1;
    if ( !gProtocolType && (*(_DWORD *)(v7 + 2220) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)ghdcMem);
      if ( CompatibleDC )
      {
        v11 = (_QWORD *)ghbmCaption;
        if ( !ghbmCaption )
        {
          CaptionStrip = CreateCaptionStrip();
          v11 = (_QWORD *)ghbmCaption;
          ghbmCaption = CaptionStrip;
        }
        v13 = GreSelectBitmap(CompatibleDC, *v11);
        left = a4->left;
        v15 = a3->left;
        v16 = a3->right - a3->left;
        top = a3->top;
        v55 = v13;
        v44 = a4->top;
        v18 = a4->right - a4->left;
        v42 = left;
        WindowBorders = GetWindowBorders(*((_DWORD *)a1 + 17), *((_DWORD *)a1 + 16));
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          v20 = *(_DWORD *)(gpsi + 1896LL);
        else
          v20 = *(_DWORD *)(gpsi + 2284LL);
        if ( a3->bottom - top > v20 )
        {
          v15 += WindowBorders;
          top += WindowBorders;
          v16 -= 2 * WindowBorders;
        }
        if ( *(_DWORD *)(*(_QWORD *)&v57.left + 12LL) - v44 > v20 )
        {
          v42 += WindowBorders;
          v44 += WindowBorders;
          v18 -= 2 * WindowBorders;
        }
        v48 = v15;
        v47 = top;
        v21 = v18;
        v46 = v16;
        if ( v16 > v18 )
          v21 = v16;
        v57.left = 0;
        v57.right = v21;
        v57.bottom = 2 * v9;
        v57.top = v9;
        v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v56;
        v56[1] = v6;
        ++*((_DWORD *)v6 + 2);
        if ( gbDisableAlpha || (v22 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v22 = 13;
        xxxDrawCaptionTemp((__int64)a1, CompatibleDC, &v57, 0LL, 0LL, 0LL, v22);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v27 = SaveScreen(v6, 0, 0LL, v15, top, v16, v9);
        if ( v27
          || (v28 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v16, v9, (HDC)a2, v15, top, 13369376, 0, 0), v30 = 0LL, v28) )
        {
          v43 = v42 - v15;
          v45 = v44 - top;
          v31 = v18 - v16;
          v54 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal((HDC)a2, v15, top, v16, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v35 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v54;
            if ( v35 > 0xFAu )
              break;
            v33 = v35;
            v34 = (int)((unsigned __int64)(274877907LL * (v43 * v35 + 125)) >> 32) >> 4;
            v52 = v15 + (v34 >> 31) + v34;
            v57.left = top + (v45 * v33 + 125) / 250;
            v50 = v16 + (v31 * v33 + 125) / 250;
            UserSleep(1LL);
            if ( v27 )
              SaveScreen(v6, 1u, v27, v48, v47, v46, v9);
            else
              NtGdiBitBltInternal((HDC)a2, v48, v47, v46, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
            v48 = v52;
            v47 = v57.left;
            v46 = v50;
            if ( v27 )
              v27 = SaveScreen(v6, 0, 0LL, v52, v57.left, v50, v9);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v50, v9, (HDC)a2, v52, v57.left, 13369376, 0, 0);
            NtGdiBitBltInternal((HDC)a2, v52, v57.left, v50, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          }
          if ( v27 )
            SaveScreen(v6, 1u, v27, v48, v47, v46, v9);
          else
            NtGdiBitBltInternal((HDC)a2, v48, v47, v46, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v29, v30);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v37, v36, v38, v39);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v41, v40);
        GreSelectBitmap(CompatibleDC, v55);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
