/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0025C08
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     CreateSprite @ 0x1C001E08C (CreateSprite.c)
 *     HintSpriteShape @ 0x1C0022E0C (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 */

void __fastcall InitializeMiniWinInfo(struct tagWND *const a1, struct tagMINIWINDOWINFO *a2)
{
  char *v2; // rbp
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 ScaledLogPixels; // rdi

  v2 = (char *)a2 + 16;
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
      ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v5);
      ScaleDPIRect(a2, a2, ScaledLogPixels, 96LL, 0LL, 0LL);
      ScaleDPIRect(v2, v2, (unsigned __int16)ScaledLogPixels, 96LL, 0LL, 0LL);
    }
  }
}
