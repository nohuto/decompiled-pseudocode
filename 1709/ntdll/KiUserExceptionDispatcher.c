/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A3DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     RtlGuardRestoreContext @ 0x180078800 (RtlGuardRestoreContext.c)
 *     ZwRaiseException @ 0x1800A2C30 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}
