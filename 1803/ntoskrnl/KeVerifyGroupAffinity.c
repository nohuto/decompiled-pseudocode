/*
 * XREFs of KeVerifyGroupAffinity @ 0x140004C4C
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14064EA64 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_14044C5D8[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
