/*
 * XREFs of sub_1800811F0 @ 0x1800811F0
 * Callers:
 *     TpWaitForJobNotification @ 0x180080E80 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x180080EC0 (TpReleaseJobNotification.c)
 * Callees:
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_1800811F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r9
  PPEB_LDR_DATA Ldr; // rcx

  if ( a1 )
  {
    LOBYTE(v2) = sub_18001777C(a1 + 72, a2);
    if ( v2 )
    {
      if ( *(__int64 (__fastcall ***)())(v3 + 80) == off_1801107F0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    sub_1801058B8(Ldr, a2);
  return 0LL;
}
