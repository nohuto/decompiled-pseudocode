/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14006CFCC
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspWritePebAffinityInfo @ 0x1404F8C88 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 10) & 0xFFFFF;
}
