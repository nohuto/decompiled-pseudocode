/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeCompleteWorker @ 0x1C0021A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00216C0 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 */

__int64 __fastcall RootHub_WdfEvtTimer20PortResumeCompleteWorker(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E0C0);
  result = RootHub_WdfEvtTimer20PortResumeComplete(*(_QWORD **)v1, *(_DWORD *)(v1 + 8));
  *(_QWORD *)v1 = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  return result;
}
