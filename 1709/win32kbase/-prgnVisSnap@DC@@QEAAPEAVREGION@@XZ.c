/*
 * XREFs of ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053114
 * Callers:
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0051F20 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 */

struct REGION *__fastcall DC::prgnVisSnap(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 195) )
    return (struct REGION *)*((_QWORD *)v1 + 193);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 193);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 193);
  return result;
}
