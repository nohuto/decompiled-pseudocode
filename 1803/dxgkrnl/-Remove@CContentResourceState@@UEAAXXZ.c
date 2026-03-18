/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0051D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C0051D60 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  *((_BYTE *)this + 56) &= ~1u;
  CFlipResourceState::Remove(this);
}
