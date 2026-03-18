/*
 * XREFs of PsQueryProcessAttributes @ 0x1404F7258
 * Callers:
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     PsQueryProcessAttributesByToken @ 0x1404F77A0 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  PACCESS_TOKEN v6; // rbx

  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
