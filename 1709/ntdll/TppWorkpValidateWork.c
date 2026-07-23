/*
 * XREFs of TppWorkpValidateWork @ 0x18000C9A8
 * Callers:
 *     TpWaitForWork @ 0x18000ABD0 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18000C930 (TpReleaseWork.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000FA1C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWorkpValidateWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v4 + 8) == &TppWorkpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2);
  return 0LL;
}
