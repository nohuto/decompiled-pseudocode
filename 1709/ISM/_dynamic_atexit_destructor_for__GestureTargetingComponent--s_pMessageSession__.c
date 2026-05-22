/*
 * XREFs of _dynamic_atexit_destructor_for__GestureTargetingComponent::s_pMessageSession__ @ 0x1800D2800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__GestureTargetingComponent::s_pMessageSession__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = GestureTargetingComponent::s_pMessageSession;
  if ( GestureTargetingComponent::s_pMessageSession )
  {
    GestureTargetingComponent::s_pMessageSession = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
