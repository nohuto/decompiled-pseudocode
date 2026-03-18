/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C00E7130
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0012394 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersive(__int64 a1)
{
  return (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 768) & 0x30) == 16;
}
