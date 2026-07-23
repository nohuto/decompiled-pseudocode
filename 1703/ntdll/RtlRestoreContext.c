/*
 * XREFs of RtlRestoreContext @ 0x180086E50
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800A9060 (KiUserExceptionDispatcher.c)
 * Callees:
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_180036954 @ 0x180036954 (sub_180036954.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180079EB0 (RtlGuardCheckLongJumpTarget.c)
 *     sub_1800961B0 @ 0x1800961B0 (sub_1800961B0.c)
 *     sub_180096200 @ 0x180096200 (sub_180096200.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  ULONG_PTR v4; // rdi

  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && !sub_180036954((PVOID)ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_4;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        goto LABEL_4;
      if ( sub_180030138() )
        sub_180096200();
      else
        sub_1800961B0();
    }
    goto LABEL_2;
  }
  v4 = ExceptionRecord->ExceptionInformation[0];
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && !sub_180036954(*(PVOID *)(v4 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(PVOID *)(v4 + 80), 0, 0LL);
LABEL_4:
  sub_1800A9270(ContextRecord, ExceptionRecord);
}
