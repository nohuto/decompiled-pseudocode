/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1407161A0
 * Callers:
 *     PspApplyMitigationOptions @ 0x14048B80C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14025F174 (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  PACCESS_TOKEN v4; // rdi

  v4 = PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
