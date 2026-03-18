/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C00925F4
 * Callers:
 *     UserGetMiniWinInfo @ 0x1C000D1B8 (UserGetMiniWinInfo.c)
 *     CreateSprite @ 0x1C008BE34 (CreateSprite.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 */

void __fastcall InitializeMiniWinInfo(struct tagWND *const a1, struct tagMINIWINDOWINFO *a2)
{
  __m128i *v2; // rbp
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int16 ScaledLogPixels; // di

  v2 = (__m128i *)((char *)a2 + 16);
  *(_OWORD *)a2 = *((_OWORD *)a1 + 8);
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 9);
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 17);
  *((_DWORD *)a2 + 9) = *((_DWORD *)a1 + 16);
  *((_DWORD *)a2 + 10) = *((_DWORD *)a1 + 76);
  *((_DWORD *)a2 + 11) = (*((unsigned __int8 *)a1 + 56) >> 6) & 1;
  *((_QWORD *)a2 + 6) = ***(_QWORD ***)(*((_QWORD *)a1 + 3) + 8LL);
  if ( (unsigned int)IsPWNDEligibleForGDIScaling(a1) )
  {
    v5 = *(unsigned __int16 *)(v4 + 372);
    if ( (_WORD)v5 != 96 )
    {
      ScaledLogPixels = GreGetScaledLogPixels(v5);
      ScaleDPIRect(a2, (__m128i *)a2, ScaledLogPixels, 0x60u, 0LL, 0LL);
      ScaleDPIRect(v2, v2, ScaledLogPixels, 0x60u, 0LL, 0LL);
    }
  }
}
