/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DFA40
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagRECT *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]

  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, a2, a3, a4);
  if ( !v5 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6, v7);
      v16 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v16;
      v17 = v5;
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      xxxFlashWindow((_QWORD *)v5, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v5) )
      {
        v8 = &grcScreenFlash;
        goto LABEL_7;
      }
      v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
      v16 = *(_QWORD *)(v12 + 392);
      *(_QWORD *)(v12 + 392) = &v16;
      v17 = v5;
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      xxxRedrawWindow((struct tagWND *)v5, 0LL, 0LL, 645LL);
LABEL_16:
      ThreadUnlock1(v14, v13);
      break;
    case 3u:
      v8 = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, v8, 0LL, 66181LL);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
