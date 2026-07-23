/*
 * XREFs of sub_18001770C @ 0x18001770C
 * Callers:
 *     TpTimerOutstandingCallbackCount @ 0x180010F30 (TpTimerOutstandingCallbackCount.c)
 *     TpWaitForTimer @ 0x1800143D0 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x1800172C0 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x180019600 (TpReleaseTimer.c)
 * Callees:
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_18001770C(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
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
      if ( (unsigned int)sub_18001777C(Ldr, a2, a3, Ldr) )
      {
        if ( *(__int64 (__fastcall ***)())(v5 + 8) == off_180110230 )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    sub_1801058B8(Ldr, a2);
  return 0LL;
}
