/*
 * XREFs of RtlGuardRestoreContext @ 0x180078800
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800A3DF0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardCheckLongJumpTarget @ 0x180020260 (RtlGuardCheckLongJumpTarget.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsValidStackPointer @ 0x180078858 (RtlGuardIsValidStackPointer.c)
 *     LdrpValidateUserCallTarget @ 0x180090FB0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180091000 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi

  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_4;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607
      && ExceptionRecord->NumberParameters
      && LdrControlFlowGuardEnforced() )
    {
      v4 = LdrControlFlowGuardEnforcedWithExportSuppression();
      v5 = ExceptionRecord->ExceptionInformation[0];
      if ( v4 )
        LdrpValidateUserCallTargetES(v5);
      else
        LdrpValidateUserCallTarget(v5);
    }
    goto LABEL_2;
  }
  v6 = ExceptionRecord->ExceptionInformation[0];
  if ( LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v6 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(_QWORD *)(v6 + 80), 0, 0LL);
LABEL_4:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
