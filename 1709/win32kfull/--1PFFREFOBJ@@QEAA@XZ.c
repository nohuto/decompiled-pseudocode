/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C014321C
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C011C120 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C0294500 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
