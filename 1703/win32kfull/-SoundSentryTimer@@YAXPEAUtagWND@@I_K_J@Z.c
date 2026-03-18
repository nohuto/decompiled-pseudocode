/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D3670
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  struct tagRECT *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v1 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, 1);
  if ( v1 )
  {
    v2 = gdwCurrentEffect;
  }
  else
  {
    v2 = 3;
    gdwCurrentEffect = 3;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v8 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v8;
    v9 = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    xxxFlashWindow((struct tagWND *)v1, 0, 0);
    goto LABEL_17;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(v1) )
    {
      v5 = &grcScreenFlash;
      goto LABEL_8;
    }
    v8 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v8;
    v9 = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    xxxRedrawWindow((struct tagWND *)v1, 0LL, 0LL, 645);
LABEL_17:
    ThreadUnlock1(v7, v6);
    goto LABEL_18;
  }
  if ( v4 == 1 )
  {
    v5 = 0LL;
LABEL_8:
    xxxRedrawWindow(0LL, v5, 0LL, 66181);
  }
LABEL_18:
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
