/*
 * XREFs of PsReferenceImpersonationToken @ 0x140564C10
 * Callers:
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 * Callees:
 *     PsReferenceImpersonationTokenEx @ 0x1404C9060 (PsReferenceImpersonationTokenEx.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return PsReferenceImpersonationTokenEx(
           (__int64)Thread,
           1,
           CopyOnOpen,
           (bool *)EffectiveOnly,
           (int *)ImpersonationLevel,
           0LL);
}
