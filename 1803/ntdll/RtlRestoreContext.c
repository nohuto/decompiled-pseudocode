/*
 * XREFs of RtlRestoreContext @ 0x18000B1B0
 * Callers:
 *     KiUserExceptionDispatcher @ 0x18009E830 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18000B304 @ 0x18000B304 (sub_18000B304.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_18008B410 @ 0x18008B410 (sub_18008B410.c)
 *     sub_18008B460 @ 0x18008B460 (sub_18008B460.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int v4; // eax
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdi

  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)sub_18000B304(ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_4;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607
      && ExceptionRecord->NumberParameters
      && (unsigned int)LdrControlFlowGuardEnforced() )
    {
      v4 = sub_18001F704();
      v5 = ExceptionRecord->ExceptionInformation[0];
      if ( v4 )
        sub_18008B460(v5);
      else
        sub_18008B410(v5);
    }
    goto LABEL_2;
  }
  v6 = ExceptionRecord->ExceptionInformation[0];
  if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)sub_18000B304(*(_QWORD *)(v6 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(_QWORD *)(v6 + 80), 0LL, 0LL);
LABEL_4:
  sub_18009EB90(ContextRecord, ExceptionRecord);
}
