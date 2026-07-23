/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A9060
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     RtlRestoreContext @ 0x180086E50 (RtlRestoreContext.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  NTSTATUS v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( qword_18016B220 )
    qword_18016B220(&STACK[0x4F0], &retaddr);
  if ( sub_180034E60((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr, 0);
  RtlRaiseStatus(v0);
}
