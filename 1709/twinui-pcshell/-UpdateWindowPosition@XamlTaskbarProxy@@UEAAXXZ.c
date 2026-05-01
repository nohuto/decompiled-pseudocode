/*
 * XREFs of ?UpdateWindowPosition@XamlTaskbarProxy@@UEAAXXZ @ 0x180152820
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180152994 (-UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlTaskbarProxy::UpdateWindowPosition(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = this + 13;
  AcquireSRWLockShared(this + 13);
  XamlTaskbarProxy::UpdateWindowPositionInternal((XamlTaskbarProxy *)this);
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
