/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0132638
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01322D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0132440 (xxxRegisterGhostWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  __int64 v3; // rdi
  __int64 Prop; // rdx
  unsigned int v5; // r10d
  __int64 v6; // r11

  v3 = *(unsigned __int16 *)(gpsi + 884LL);
  Prop = GetProp((__int64)a1, *(_WORD *)(gpsi + 884LL), 1);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || v6 != -1) )
    return (unsigned int)InternalSetProp((__int64)a1, v3, v6, 5);
  return v5;
}
