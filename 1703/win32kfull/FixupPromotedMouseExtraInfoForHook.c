/*
 * XREFs of FixupPromotedMouseExtraInfoForHook @ 0x1C00BD9F0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixupPromotedMouseExtraInfoForHook(__int64 a1, __int64 a2)
{
  if ( a1 && a2 == *(_DWORD *)(a1 + 20) && (*(_BYTE *)(a1 + 2) & 0x50) != 0 )
    return (unsigned __int8)a2 | 0xFF515700LL;
  else
    return a2;
}
