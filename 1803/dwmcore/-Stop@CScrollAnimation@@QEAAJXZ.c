/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801BE8C0
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x180193FB0 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801BDB14 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BE32C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18003BC9C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 208) &= ~1u;
  if ( (*((_BYTE *)this + 312) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 312) &= ~1u;
    *((_DWORD *)this + 67) = 16;
  }
  return 0LL;
}
