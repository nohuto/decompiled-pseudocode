/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020EDC8
 * Callers:
 *     xxxHotTrack @ 0x1C0121D84 (xxxHotTrack.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // eax
  HDC DCEx; // rbp
  unsigned int v14; // r14d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v16; // rax
  __int64 *DPIMETRICSForDpi; // rax
  int TextAlign; // eax
  _DWORD *v19; // rcx
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a3;
  if ( (*((_BYTE *)a1 + 56) & 1) == 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 26);
  if ( !v6 )
    return 0LL;
  v7 = (_DWORD)a2 == -1 || (unsigned int)a2 >= *(_DWORD *)(v6 + 68)
     ? 0LL
     : *(_QWORD *)(v6 + 96) + 152LL * (unsigned int)a2;
  if ( !v7 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v24[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v24;
  v24[1] = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  xxxMNRecomputeBarIfNeeded(a1, v6);
  if ( (unsigned int)MNGetpItemIndex(v6, v7) == -1 )
  {
LABEL_11:
    ThreadUnlock1(v10, v9);
    return 0LL;
  }
  if ( v4 )
  {
    v12 = *(_DWORD *)(v7 + 4);
    if ( (v12 & 1) != 0 )
      goto LABEL_11;
    *(_DWORD *)(v7 + 4) = v12 | 0x100;
  }
  else
  {
    *(_DWORD *)(v7 + 4) &= ~0x100u;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4736LL));
  v14 = 96;
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
         && (v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
  }
  DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  GreSelectFont((__int64)DCEx, *DPIMETRICSForDpi);
  TextAlign = GreGetTextAlign(DCEx);
  v19 = *(_DWORD **)(v6 + 96);
  v20 = TextAlign;
  if ( v19 && (*v19 & 0x2000) != 0 )
    GreSetTextAlign(DCEx, TextAlign | 0x100);
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    v14 = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) != 0
         || (v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) == 0
         || (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 52LL) & 1) == 0 )
  {
    v14 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
  }
  xxxDrawMenuItem(DCEx, v14, v6, v7, 0, 0LL);
  GreSetTextAlign(DCEx, v20);
  ThreadUnlock1(v23, v22);
  _ReleaseDC(DCEx);
  return 1LL;
}
