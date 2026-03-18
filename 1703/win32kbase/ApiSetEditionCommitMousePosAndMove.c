/*
 * XREFs of ApiSetEditionCommitMousePosAndMove @ 0x1C008A468
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0046F54 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0132840 (-ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionCommitMousePosAndMove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  if ( (int)IsEditionCommitMousePosAndMoveSupported() < 0 )
    return 0LL;
  else
    return EditionCommitMousePosAndMove(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
