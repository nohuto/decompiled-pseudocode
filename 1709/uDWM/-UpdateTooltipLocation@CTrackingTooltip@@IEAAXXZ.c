/*
 * XREFs of ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x180088BA8
 * Callers:
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x180088AB0 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x180088B1C (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTrackingTooltip::UpdateTooltipLocation(HWND *this)
{
  SendMessageW(
    this[1],
    0x412u,
    0LL,
    (unsigned __int16)(*((_WORD *)this + 16) - (*((_DWORD *)this + 6) - *((_DWORD *)this + 4)) / 2) | ((unsigned __int16)(*((_WORD *)this + 18) - (*((_DWORD *)this + 7) - *((_DWORD *)this + 5)) / 2) << 16));
}
