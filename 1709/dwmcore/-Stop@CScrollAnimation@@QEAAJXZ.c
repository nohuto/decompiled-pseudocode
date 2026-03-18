/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18018947C
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016B54C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801886C0 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180188EE8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A2314 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 192) &= ~1u;
  if ( (*((_BYTE *)this + 296) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 296) &= ~1u;
    *((_DWORD *)this + 63) = 16;
  }
  return 0LL;
}
