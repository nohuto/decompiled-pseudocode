/*
 * XREFs of SeTokenIsNoChildProcessRestricted @ 0x1400665B0
 * Callers:
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeTokenIsNoChildProcessRestricted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x80000) != 0;
}
