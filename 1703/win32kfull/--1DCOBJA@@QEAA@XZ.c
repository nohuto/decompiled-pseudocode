/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0071B18
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C00716C0 (GreSelectRedirectionBitmap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C009F2D0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x1C0295DE0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02962A0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
}
