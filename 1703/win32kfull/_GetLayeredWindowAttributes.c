/*
 * XREFs of _GetLayeredWindowAttributes @ 0x1C011F04C
 * Callers:
 *     zzzUpdateShadowAlpha @ 0x1C011E960 (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C01D9930 (NtUserGetLayeredWindowAttributes.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C009E94C (GetRedirectionFlags.c)
 *     GreGetSpriteAttributes @ 0x1C0100DA0 (GreGetSpriteAttributes.c)
 */

__int64 __fastcall GetLayeredWindowAttributes(__int64 a1, unsigned int *a2, BYTE *a3, unsigned int *a4)
{
  unsigned int SpriteAttributes; // edi
  int v9; // eax
  _DWORD *v10; // r8
  struct _BLENDFUNCTION v12; // [rsp+60h] [rbp+8h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(a1 + 66) & 8) != 0 )
  {
    if ( (GetRedirectionFlags(a1) & 1) != 0 )
    {
      v9 = IsWindowDesktopComposed(a1);
      SpriteAttributes = GreGetSpriteAttributes(
                           *(HDEV *)(gpDispInfo + 32LL),
                           *(struct PDEVOBJ **)a1,
                           v10,
                           a2,
                           &v12,
                           a4,
                           v9);
      if ( SpriteAttributes )
        *a3 = v12.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return SpriteAttributes;
}
