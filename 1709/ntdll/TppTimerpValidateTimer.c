/*
 * XREFs of TppTimerpValidateTimer @ 0x18000F9AC
 * Callers:
 *     TpReleaseTimer @ 0x18000BCB0 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18000C660 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x18000F7C0 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x18000F800 (TpSetTimerEx.c)
 *     TpTimerOutstandingCallbackCount @ 0x180011A00 (TpTimerOutstandingCallbackCount.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000FA1C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  __int64 v5; // r9

  LOBYTE(v3) = 0;
  v4 = a3;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
      {
        if ( *(__int64 (__fastcall ***)())(v5 + 8) == TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2);
  return 0LL;
}
