/*
 * XREFs of PspWow64GetSharedInformation @ 0x1404267A8
 * Callers:
 *     PspWow64InitThread @ 0x1404264E0 (PspWow64InitThread.c)
 *     PsWow64IsMachineSupported @ 0x140426784 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspWow64GetSharedInformation(unsigned __int16 a1, int a2)
{
  switch ( a1 )
  {
    case 0x14Cu:
      return PsWowX86SharedInformation[a2];
    case 0x1C4u:
      return PsWowArm32SharedInformation[a2];
    case 0x8664u:
      return PsWowAmd64SharedInformation[a2];
  }
  return 0LL;
}
