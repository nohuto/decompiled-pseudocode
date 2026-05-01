/*
 * XREFs of ?OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z @ 0x18002D390
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x18002D3F4 (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  BYTE1(this[7].Ptr) = a2 != 0;
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)&this[-4]);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
