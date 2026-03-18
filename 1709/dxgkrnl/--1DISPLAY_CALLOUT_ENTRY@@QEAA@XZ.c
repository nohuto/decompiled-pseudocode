/*
 * XREFs of ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1C010267C
 * Callers:
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0010FB8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DISPLAY_CALLOUT_ENTRY::~DISPLAY_CALLOUT_ENTRY(DISPLAY_CALLOUT_ENTRY *this)
{
  if ( *((_BYTE *)this + 21) )
    _InterlockedDecrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 314);
}
