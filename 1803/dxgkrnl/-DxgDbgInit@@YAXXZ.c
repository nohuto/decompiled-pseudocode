/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1C018F144
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgInit(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( byte_1C007AEB0 )
  {
    v1 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v1 + 24) = 137LL;
    WdLogEvent5_WdAssertion(v1);
  }
  CallbackRecord.State = 0;
  xmmword_1C007BCD0 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C007AEB0 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C007AEB0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 154LL;
    WdLogEvent5_WdAssertion(v3);
  }
}
