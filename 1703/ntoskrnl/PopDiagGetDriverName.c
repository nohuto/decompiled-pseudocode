/*
 * XREFs of PopDiagGetDriverName @ 0x14013AB60
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140144E20 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140145770 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceDriverVeto @ 0x14041A0F8 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PopDiagGetDriverName(__int64 a1, wchar_t *a2, unsigned int a3)
{
  __int64 v4; // rax
  const wchar_t *v5; // r8
  unsigned __int16 v6; // cx

  if ( a1 && (v4 = *(_QWORD *)(a1 + 8), (v5 = *(const wchar_t **)(v4 + 64)) != 0LL) && (v6 = *(_WORD *)(v4 + 56)) != 0 )
    return RtlStringCbCopyNW(a2, a3, v5, v6);
  else
    return -1073741823;
}
