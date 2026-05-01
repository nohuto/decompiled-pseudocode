/*
 * XREFs of ?GetGutterWidth@CortanaDesktopExperienceView@@AEAAHXZ @ 0x1800F2D2C
 * Callers:
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x18018538C (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::GetGutterWidth(CortanaDesktopExperienceView *this)
{
  if ( (unsigned int)(*((_DWORD *)this + 33) - 3) <= 1 )
    return 0LL;
  else
    return *((_BYTE *)this + 205) != 0 ? 56 : 48;
}
