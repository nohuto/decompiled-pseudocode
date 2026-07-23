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
  int v5; // eax
  int v6; // eax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdi
  int v9; // eax

  if ( !ExceptionRecord )
  {
LABEL_2:
    LOBYTE(v4) = LdrControlFlowGuardEnforced();
    if ( v4 && !(unsigned int)sub_18000B304(ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_4;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        LOBYTE(v5) = LdrControlFlowGuardEnforced();
        if ( v5 )
        {
          v6 = sub_18001F704();
          v7 = ExceptionRecord->ExceptionInformation[0];
          if ( v6 )
            sub_18008B460(v7);
          else
            sub_18008B410(v7);
        }
      }
    }
    goto LABEL_2;
  }
  v8 = ExceptionRecord->ExceptionInformation[0];
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 && !(unsigned int)sub_18000B304(*(_QWORD *)(v8 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(PVOID *)(v8 + 80), 0, 0LL);
LABEL_4:
  sub_18009EB90(ContextRecord, ExceptionRecord);
}
