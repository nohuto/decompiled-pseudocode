/*
 * XREFs of ??0DXGCRITICALREGION@@QEAA@XZ @ 0x1C00203E0
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     <none>
 */

DXGCRITICALREGION *__fastcall DXGCRITICALREGION::DXGCRITICALREGION(DXGCRITICALREGION *this)
{
  *((_BYTE *)this + 1) = 0;
  return this;
}
