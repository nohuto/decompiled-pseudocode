/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C013C394
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C010BB10 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C0297E30 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
