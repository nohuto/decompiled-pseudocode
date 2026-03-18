/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C00EC6F0
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0039F14 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersive(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 776) & 0x30) == 16;
}
