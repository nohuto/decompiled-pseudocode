/*
 * XREFs of DeleteFadeSprite @ 0x1C013E1F0
 * Callers:
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DeleteFadeSprite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = 0LL;
  if ( (gfade[6] & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(gfade[0], a2, gfade[0], a4);
    v4 = v5;
    if ( v5 && (*(_BYTE *)(v5 + 66) & 8) != 0 )
      UnsetLayeredWindow((struct tagWND *)v5, 0);
  }
  else
  {
    GreDeleteSprite(*(HDEV *)(gpDispInfo + 32LL), 0LL, (void *)gfade[0], 1);
  }
  gfade[0] = 0LL;
  return v4;
}
