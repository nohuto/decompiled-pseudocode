/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x140555328
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1404EAE58 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspProcessOpen @ 0x1405551B0 (PspProcessOpen.c)
 *     PspThreadOpen @ 0x140555280 (PspThreadOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x14070E0B8 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x14070F9D8 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x14070FDBC (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14055537C (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // r10
  __int64 v5; // r11

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 1738);
    LOBYTE(a3) = *(_BYTE *)(a3 + 1738);
    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    {
      if ( !qword_1403A5D40 || !(unsigned __int8)qword_1403A5D40(v5, v4) )
        return 1;
    }
  }
  return result;
}
