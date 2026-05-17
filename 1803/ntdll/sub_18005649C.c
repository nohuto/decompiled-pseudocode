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
  __int64 v3; // r9
  int v4; // eax
  struct _PEB_LDR_DATA *Ldr; // rcx

  v3 = a1;
  if ( a1 )
  {
    LOBYTE(v4) = sub_18002601C(a1 + 72, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v3 + 80) == off_180110660 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    sub_1801086C8(Ldr, a2, a3, v3);
  return 0LL;
}
