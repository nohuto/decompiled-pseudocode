/*
 * XREFs of sub_1800811F0 @ 0x1800811F0
 * Callers:
 *     TpWaitForJobNotification @ 0x180080E80 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x180080EC0 (TpReleaseJobNotification.c)
 * Callees:
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_1800811F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax
  struct _PEB_LDR_DATA *Ldr; // rcx

  v3 = a1;
  if ( a1 )
  {
    LOBYTE(v4) = sub_18001777C(a1 + 72, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v3 + 80) == off_1801107F0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    sub_1801058B8(Ldr, a2, a3, v3);
  return 0LL;
}
