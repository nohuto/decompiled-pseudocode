/*
 * XREFs of PsQueryProcessAttributes @ 0x140486A80
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PopCreateUserPowerRequest @ 0x1404F1DF4 (PopCreateUserPowerRequest.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x140483CF0 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, _BYTE *a2, _BYTE *a3)
{
  PACCESS_TOKEN v6; // rbx

  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken((__int64)v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
