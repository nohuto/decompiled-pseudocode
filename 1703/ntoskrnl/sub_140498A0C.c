/*
 * XREFs of sub_140498A0C @ 0x140498A0C
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 */

__int64 __fastcall sub_140498A0C(struct _KPROCESS *a1)
{
  HANDLE ProcessId; // rax

  ProcessId = PsGetProcessId(a1);
  return WbRemoveWarbirdProcess((__int64)ProcessId);
}
