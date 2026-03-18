/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x14077A340
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1404EF46C (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1402A0C24 (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  PACCESS_TOKEN v4; // rdi

  v4 = PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
