/*
 * XREFs of DeleteFadeSprite @ 0x1C01C1F70
 * Callers:
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DeleteFadeSprite()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = 0LL;
  if ( (gfade[12] & 8) != 0 )
  {
    v1 = HMValidateHandleNoSecure(*(unsigned __int64 *)gfade, 1);
    v0 = v1;
    if ( v1 && (*(_BYTE *)(v1 + 66) & 8) != 0 )
      UnsetLayeredWindow((struct tagWND *)v1, 0);
  }
  else
  {
    GreDeleteSprite(*(HDEV *)(gpDispInfo + 32LL), 0LL, *(void **)gfade, 1);
  }
  *(_QWORD *)gfade = 0LL;
  return v0;
}
