/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C0144FFC
 * Callers:
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
