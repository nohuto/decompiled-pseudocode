/*
 * XREFs of sub_1800897A0 @ 0x1800897A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1800897A0(__int64 a1, PROCESSINFOCLASS a2, void *a3, ULONG a4, ULONG *a5)
{
  return ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
}
