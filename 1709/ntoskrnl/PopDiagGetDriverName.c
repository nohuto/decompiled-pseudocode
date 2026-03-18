/*
 * XREFs of PopDiagGetDriverName @ 0x140244E00
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140123260 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1401232F0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x14012A91C (PopDiagTraceDeviceAcquireIrp.c)
 *     PopRecordPoBlackboxInformation @ 0x140249DD0 (PopRecordPoBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x1404390D0 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1401F57E8 (RtlStringCbCopyNW.c)
 */

NTSTATUS __fastcall PopDiagGetDriverName(__int64 a1, wchar_t *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8
  unsigned __int16 v4; // cx

  if ( a1 && (v2 = *(_QWORD *)(a1 + 8), (v3 = *(const wchar_t **)(v2 + 64)) != 0LL) && (v4 = *(_WORD *)(v2 + 56)) != 0 )
    return RtlStringCbCopyNW(a2, 0x80uLL, v3, v4);
  else
    return -1073741823;
}
