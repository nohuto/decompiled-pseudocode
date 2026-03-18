/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01347A8
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01343F0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  __int64 v4; // rsi
  __int64 Prop; // r8
  unsigned int v6; // r11d

  v4 = *(unsigned __int16 *)(gpsi + 884LL);
  Prop = GetProp((__int64)a1, *(_WORD *)(gpsi + 884LL), 1);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || a2 != (HWND)-1LL) )
    return (unsigned int)InternalSetProp((__int64)a1, v4, (__int64)a2, 5);
  return v6;
}
