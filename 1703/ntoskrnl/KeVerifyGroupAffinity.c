/*
 * XREFs of KeVerifyGroupAffinity @ 0x140036394
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1405CF874 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1407203E0 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_1403E42B8[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
