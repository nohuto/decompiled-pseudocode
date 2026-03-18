/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14053919C
 * Callers:
 *     PspThreadOpen @ 0x140539010 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1405390C0 (PspProcessOpen.c)
 *     DbgkCopyProcessDebugPort @ 0x14053A2F4 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x1406A9950 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1406AB268 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1406AB654 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     PspCheckForInvalidAccessByProtection @ 0x1405391CC (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 == a3 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a2 + 1738);
  LOBYTE(a3) = *(_BYTE *)(a3 + 1738);
  return (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) != 0;
}
