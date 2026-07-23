/*
 * XREFs of sub_180025DA4 @ 0x180025DA4
 * Callers:
 *     TpIsTimerSet @ 0x180024540 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     TpWaitForTimer @ 0x18002C520 (TpWaitForTimer.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180058FF0 (TpTimerOutstandingCallbackCount.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180025DA4(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  PPEB_LDR_DATA v5; // r9

  LOBYTE(v3) = 0;
  v4 = a3;
  v5 = Ldr;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      if ( (unsigned int)sub_18002601C(Ldr, a2, a3, Ldr) )
      {
        if ( v5->SsHandle == off_180110170 )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    sub_1801086C8(Ldr, a2, a3, v5);
  return 0LL;
}
