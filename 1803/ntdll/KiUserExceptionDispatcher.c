/*
 * XREFs of KiUserExceptionDispatcher @ 0x18009E830
 * Callers:
 *     <none>
 * Callees:
 *     RtlRestoreContext @ 0x18000B1B0 (RtlRestoreContext.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  NTSTATUS v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( qword_18016F230 )
    qword_18016F230(&STACK[0x4F0], &retaddr);
  if ( (unsigned __int8)sub_18000D490((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr, 0);
  RtlRaiseStatus(v0);
}
