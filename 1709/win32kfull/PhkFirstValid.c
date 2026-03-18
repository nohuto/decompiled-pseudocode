/*
 * XREFs of PhkFirstValid @ 0x1C0056078
 * Callers:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 *     EditionLLMouseButtonHook @ 0x1C00535B0 (EditionLLMouseButtonHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0055D80 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C0055E90 (EditionKeyEventLLHook.c)
 *     xxxCallMouseHook @ 0x1C0119694 (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01BACA0 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01C4D00 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = a2 + 1;
  v4 = *(_QWORD *)(a1 + 8 * v3 + 880);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 8 * v3 + 32)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
