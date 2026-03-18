/*
 * XREFs of ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027C7C
 * Callers:
 *     GreGetAppClipBox @ 0x1C000DDFC (GreGetAppClipBox.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 */

struct REGION *__fastcall DC::prgnRao(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 196) )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 194);
  return result;
}
