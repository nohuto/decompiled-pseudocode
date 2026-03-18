/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C0143144
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0041C50 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x1C0292490 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(MDCOBJA *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vAltUnlockFast(this);
}
