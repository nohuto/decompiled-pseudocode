/*
 * XREFs of sub_1404FC25C @ 0x1404FC25C
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     WbRemoveWarbirdProcess @ 0x1404FC020 (WbRemoveWarbirdProcess.c)
 */

__int64 __fastcall sub_1404FC25C(struct _KPROCESS *a1)
{
  HANDLE ProcessId; // rax

  ProcessId = PsGetProcessId(a1);
  return WbRemoveWarbirdProcess((__int64)ProcessId);
}
