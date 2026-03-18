/*
 * XREFs of xxxRedrawWindow @ 0x1C0065644
 * Callers:
 *     _DwmLockScreenUpdates @ 0x1C0015B30 (_DwmLockScreenUpdates.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     NtUserRedrawWindow @ 0x1C00630E0 (NtUserRedrawWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0063590 (xxxSetWindowPosAndBand.c)
 *     NtUserInvalidateRect @ 0x1C00654A0 (NtUserInvalidateRect.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 *     xxxValidateRgn @ 0x1C00B9610 (xxxValidateRgn.c)
 *     NtUserInvalidateRgn @ 0x1C00FF4B0 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C01086F8 (xxxValidateRect.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C013B580 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D3670 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01E7AF8 (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C0202AA0 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     MirrorRegion @ 0x1C00FC6C4 (MirrorRegion.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, _DWORD *a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  struct tagWND *v7; // rbx
  struct tagWND *v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // edx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *((_BYTE *)v8 + 71);
      if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*((_WORD *)v8 + 41) & 0x3FFF) != 0x29D )
      {
        v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
        if ( v8 )
          continue;
      }
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion(v7, ghrgnInv0, 1LL);
          v5 = ghrgnInv0;
        }
        if ( v7 != (struct tagWND *)GetDesktopWindow((__int64)v7) )
          GreOffsetRgn(v5, *((unsigned int *)v7 + 36), *((unsigned int *)v7 + 37));
      }
      else if ( a2 )
      {
        v5 = ghrgnInv0;
        if ( (*((_BYTE *)v7 + 66) & 0x40) != 0 )
        {
          v16 = *((_DWORD *)v7 + 38) - *((_DWORD *)v7 + 36) - *a2;
          *a2 = *((_DWORD *)v7 + 38) - *((_DWORD *)v7 + 36) - a2[2];
          a2[2] = v16;
        }
        v10 = *((_QWORD *)v7 + 3);
        v11 = 0LL;
        if ( v10 )
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( v12 )
            v11 = *(struct tagWND **)(v12 + 16);
        }
        if ( v7 == v11 )
          SetRectRgnIndirect(ghrgnInv0, a2);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*a2 + *((_DWORD *)v7 + 36)),
            (unsigned int)(*((_DWORD *)v7 + 37) + a2[1]),
            (unsigned int)(*((_DWORD *)v7 + 36) + a2[2]),
            *((_DWORD *)v7 + 37) + a2[3]);
      }
      else
      {
        v5 = 1LL;
      }
    }
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v7;
    if ( v7 )
      ++*((_DWORD *)v7 + 2);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v14, v13);
  }
  return 1LL;
}
