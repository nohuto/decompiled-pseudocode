/*
 * XREFs of ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00F0CF0
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFMEM::pSurfobj(struct _SURFOBJ **this)
{
  struct _SURFOBJ *result; // rax

  result = *this;
  if ( *this )
    return (struct _SURFOBJ *)((char *)result + 24);
  return result;
}
