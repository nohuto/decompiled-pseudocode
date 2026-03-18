/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C01446E0
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0041C50 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngGetDC @ 0x1C02525D0 (DxgkEngGetDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0252790 (DxgkEngLockVisRgn.c)
 *     GreSetPaletteEntries @ 0x1C0292490 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
