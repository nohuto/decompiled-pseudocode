/*
 * XREFs of TppIopValidateIo @ 0x18000F958
 * Callers:
 *     TpCancelAsyncIoOperation @ 0x18000BA70 (TpCancelAsyncIoOperation.c)
 *     TpStartAsyncIoOperation @ 0x18000F900 (TpStartAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x180012DE0 (TpReleaseIoCompletion.c)
 *     TpWaitForIoCompletion @ 0x180087220 (TpWaitForIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000FA1C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v4 + 8) == &TppIopCleanupGroupMemberVFuncs )
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
