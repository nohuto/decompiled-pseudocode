/*
 * XREFs of KeVerifyGroupAffinity @ 0x1400B37AC
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     IopConnectInterruptFullySpecified @ 0x1405E9124 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140401408[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
