/*
 * XREFs of ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01CA990 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetAltTabInfo @ 0x1C01CBDC4 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B2C2C (safe_cast_fnid_to_PSWITCHWND.c)
 */

struct tagSwitchWndInfo *__fastcall Getpswi(struct tagWND *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10
  struct tagSwitchWndInfo *result; // rax

  v2 = safe_cast_fnid_to_PSWITCHWND((__int64)a1);
  result = 0LL;
  if ( v2 && *(unsigned int *)(v1 + 252) + 400LL == *(unsigned __int16 *)(gpsi + 340LL) && *(char *)(v1 + 59) >= 0 )
    return *(struct tagSwitchWndInfo **)(v2 + 8);
  return result;
}
