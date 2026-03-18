/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020E2F0
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C020E920 (xxxDrawAnimatedRects.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     GetWindowBorders @ 0x1C007BB30 (GetWindowBorders.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00F8870 (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020E20C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // r13
  unsigned int DpiForSystem; // eax
  unsigned int v10; // ebx
  HDC CompatibleDC; // rsi
  LONG top; // ebp
  LONG left; // r15d
  int v14; // r12d
  int v15; // r14d
  int WindowBorders; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int DpiDependentMetric; // edx
  unsigned int v21; // edx
  HDC v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // r12d
  __int64 i; // rax
  int v36; // r8d
  unsigned int v37; // ecx
  unsigned __int16 v38; // cx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  LONG v43; // [rsp+60h] [rbp-C8h]
  int v44; // [rsp+60h] [rbp-C8h]
  LONG v45; // [rsp+64h] [rbp-C4h]
  int v46; // [rsp+64h] [rbp-C4h]
  int v47; // [rsp+68h] [rbp-C0h]
  LONG v48; // [rsp+6Ch] [rbp-BCh]
  int v49; // [rsp+70h] [rbp-B8h]
  int v51; // [rsp+80h] [rbp-A8h]
  int v53; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+90h] [rbp-98h]
  __int64 v56; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  _QWORD v58[3]; // [rsp+A8h] [rbp-80h] BYREF
  struct tagRECT v59; // [rsp+C0h] [rbp-68h] BYREF

  *(_QWORD *)&v59.left = a4;
  v8 = WindowFromDC(a2);
  if ( v8 )
  {
    DpiForSystem = GetDpiForSystem(v7, v6);
    v10 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2220LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v14 = a4->right - a4->left;
        v45 = a4->top;
        v15 = a3->right - a3->left;
        v43 = a4->left;
        WindowBorders = GetWindowBorders(*((unsigned int *)a1 + 17), *((unsigned int *)a1 + 16));
        v19 = GetDpiForSystem(v18, v17);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v19);
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v15 -= 2 * WindowBorders;
        }
        if ( *(_DWORD *)(*(_QWORD *)&v59.left + 12LL) - v45 > DpiDependentMetric )
        {
          v43 += WindowBorders;
          v45 += WindowBorders;
          v14 -= 2 * WindowBorders;
        }
        v49 = left;
        v21 = v14;
        v48 = top;
        if ( v15 > v14 )
          v21 = v15;
        v47 = v15;
        v59.left = 0;
        v59.top = v10;
        v22 = *(HDC *)(gpDispInfo + 48LL);
        v59.right = v21;
        v59.bottom = 2 * v10;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v22, v21, 2 * v10, 0, 0LL, 0LL);
        v56 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
        v58[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v58;
        v58[1] = v8;
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        if ( gbDisableAlpha || (v27 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v27 = 13;
        xxxDrawCaptionTemp((ULONG_PTR)a1, CompatibleDC, &v59, 0LL, 0LL, 0LL, v27);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v29, v28);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v30 = SaveScreen(v8, 0, 0LL, left, top, v15, v10);
        if ( v30
          || (v31 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v15, v10, a2, left, top, 13369376, 0, 0), v33 = 0LL, v31) )
        {
          v44 = v43 - left;
          v46 = v45 - top;
          v34 = v14 - v15;
          v55 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v15, v10, CompatibleDC, 0, v10, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v38 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v55;
            if ( v38 > 0xFAu )
              break;
            v36 = v38;
            v37 = (int)((unsigned __int64)(274877907LL * (v44 * v38 + 125)) >> 32) >> 4;
            v53 = left + (v37 >> 31) + v37;
            v59.left = top + (v46 * v36 + 125) / 250;
            v51 = v15 + (v34 * v36 + 125) / 250;
            UserSleep(1LL);
            if ( v30 )
              SaveScreen(v8, 1u, v30, v49, v48, v47, v10);
            else
              NtGdiBitBltInternal(a2, v49, v48, v47, v10, CompatibleDC, 0, 0, 13369376, 0, 0);
            v49 = v53;
            v48 = v59.left;
            v47 = v51;
            if ( v30 )
              v30 = SaveScreen(v8, 0, 0LL, v53, v59.left, v51, v10);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v51, v10, a2, v53, v59.left, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, v53, v59.left, v51, v10, CompatibleDC, 0, v10, 13369376, 0, 0);
          }
          if ( v30 )
            SaveScreen(v8, 1u, v30, v49, v48, v47, v10);
          else
            NtGdiBitBltInternal(a2, v49, v48, v47, v10, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v32, v33);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v40, v39);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v42, v41);
        GreSelectBitmap(CompatibleDC, v56);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
