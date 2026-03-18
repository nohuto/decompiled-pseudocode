/*
 * XREFs of PhkFirstValid @ 0x1C0048EE8
 * Callers:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     EditionKeyEventLLHook @ 0x1C00CAF60 (EditionKeyEventLLHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00D9254 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionLLMouseButtonHook @ 0x1C0101D20 (EditionLLMouseButtonHook.c)
 *     xxxCallMouseHook @ 0x1C010DAD8 (xxxCallMouseHook.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01A0050 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01C14E0 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = a2 + 1;
  v4 = *(_QWORD *)(a1 + 8 * v3 + 792);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v3 + 32)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4, v3, a1);
  return v4;
}
