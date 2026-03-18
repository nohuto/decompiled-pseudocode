/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1C011C51C
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax

  if ( byte_1C006FE85 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 152LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CallbackRecord.State = 0;
  xmmword_1C006FE98 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C006FE85 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C006FE85 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 169LL;
    WdLogEvent5_WdAssertion(v9);
  }
}
