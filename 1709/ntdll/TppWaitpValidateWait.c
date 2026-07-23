/*
 * XREFs of TppWaitpValidateWait @ 0x18000F748
 * Callers:
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180011BA0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180012BB8 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x180012C80 (TpWaitForWait.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000FA1C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWaitpValidateWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _PEB_LDR_DATA *Ldr; // rcx
  __int64 v5; // r9
  int v6; // r10d

  if ( (unsigned int)TppValidateCleanupGroupMember(a1, a2, a3, a1) )
  {
    if ( *(__int64 (__fastcall ***)())(v5 + 8) == TppWaitpCleanupGroupMemberVFuncs )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( v6 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, v3);
  return 0LL;
}
