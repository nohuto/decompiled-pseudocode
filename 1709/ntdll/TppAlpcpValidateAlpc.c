/*
 * XREFs of TppAlpcpValidateAlpc @ 0x180013AB0
 * Callers:
 *     TpReleaseAlpcCompletion @ 0x1800139E0 (TpReleaseAlpcCompletion.c)
 *     TpWaitForAlpcCompletion @ 0x180087F10 (TpWaitForAlpcCompletion.c)
 *     TpAlpcRegisterCompletionList @ 0x18010A6F0 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x18010A750 (TpAlpcUnregisterCompletionList.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000FA1C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, int a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v5 + 80) == TppAlpcpCleanupGroupMemberVFuncs )
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
