/*
 * XREFs of sub_18005649C @ 0x18005649C
 * Callers:
 *     TpWaitForJobNotification @ 0x1800560F0 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x180056130 (TpReleaseJobNotification.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_18005649C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  PPEB_LDR_DATA Ldr; // rcx

  if ( a1 )
  {
    LOBYTE(v3) = sub_18002601C(a1 + 72, a2);
    if ( v3 )
    {
      if ( *(__int64 (__fastcall ***)())(v4 + 80) == off_180110660 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    sub_1801086C8(Ldr, a2, a3);
  return 0LL;
}
