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

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v4);
  return 0LL;
}
