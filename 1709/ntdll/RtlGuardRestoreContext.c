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
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  int v9; // eax

  if ( !ExceptionRecord )
  {
LABEL_2:
    LOBYTE(v4) = LdrControlFlowGuardEnforced();
    if ( v4 && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
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
          v6 = LdrControlFlowGuardEnforcedWithExportSuppression();
          v7 = ExceptionRecord->ExceptionInformation[0];
          if ( v6 )
            LdrpValidateUserCallTargetES(v7);
          else
            LdrpValidateUserCallTarget(v7);
        }
      }
    }
    goto LABEL_2;
  }
  v8 = ExceptionRecord->ExceptionInformation[0];
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v8 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(PVOID *)(v8 + 80), 0, 0LL);
LABEL_4:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
