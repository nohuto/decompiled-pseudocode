/*
 * XREFs of sub_14050EAFC @ 0x14050EAFC
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     PsGetProcessId @ 0x14006ECF0 (PsGetProcessId.c)
 *     WbRemoveWarbirdProcess @ 0x14050EB18 (WbRemoveWarbirdProcess.c)
 */

__int64 __fastcall sub_14050EAFC(struct _KPROCESS *a1)
{
  HANDLE ProcessId; // rax

  ProcessId = PsGetProcessId(a1);
  return WbRemoveWarbirdProcess(ProcessId);
}
