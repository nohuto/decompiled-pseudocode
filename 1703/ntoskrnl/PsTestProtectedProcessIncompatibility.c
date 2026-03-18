/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14054633C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14049CDD4 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspProcessOpen @ 0x1405461B0 (PspProcessOpen.c)
 *     PspThreadOpen @ 0x140546290 (PspThreadOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x14067E814 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140680094 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140680480 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     PspCheckForInvalidAccessByProtection @ 0x14054636C (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 == a3 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a2 + 1738);
  LOBYTE(a3) = *(_BYTE *)(a3 + 1738);
  return (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) != 0;
}
