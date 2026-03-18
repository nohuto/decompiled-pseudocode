/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0292098
 * Callers:
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock((DC **)this, a2);
  return this;
}
