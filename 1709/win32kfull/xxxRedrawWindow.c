/*
 * XREFs of xxxRedrawWindow @ 0x1C0069A60
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     NtUserRedrawWindow @ 0x1C0068BB0 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C0069850 (NtUserInvalidateRect.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 *     NtUserInvalidateRgn @ 0x1C0109860 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C0112EB4 (xxxValidateRect.c)
 *     xxxValidateRgn @ 0x1C0122F60 (xxxValidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C0124070 (_DwmLockScreenUpdates.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0142100 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DFA40 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01F3AD8 (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C02045B4 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     MirrorRegion @ 0x1C0107644 (MirrorRegion.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rdi
  struct tagWND *v7; // rbx
  struct tagWND *v8; // rcx
  char v9; // al
  int v10; // edx
  __int64 v11; // rcx
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v15; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL);
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
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
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
          v10 = *((_DWORD *)v7 + 38) - *((_DWORD *)v7 + 36) - *a2;
          *a2 = *((_DWORD *)v7 + 38) - *((_DWORD *)v7 + 36) - a2[2];
          a2[2] = v10;
        }
        v11 = *((_QWORD *)v7 + 3);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v13 )
            v12 = *(struct tagWND **)(v13 + 16);
        }
        if ( v7 == v12 )
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
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, a2, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    v20[0] = *(_QWORD *)(v15 + 392);
    *(_QWORD *)(v15 + 392) = v20;
    v20[1] = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    xxxInternalInvalidate(v7, (HRGN)v5, v4 | 0x1000);
    ThreadUnlock1(v18, v17);
  }
  return 1LL;
}
