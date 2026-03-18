/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180181AF0
 * Callers:
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x180185078 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
