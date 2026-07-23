/*
 * XREFs of sub_180017610 @ 0x180017610
 * Callers:
 *     sub_180012840 @ 0x180012840 (sub_180012840.c)
 *     TpWaitForWait @ 0x180012BD0 (TpWaitForWait.c)
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 * Callees:
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_180017610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  PPEB_LDR_DATA Ldr; // rcx
  __int64 v5; // r9
  int v6; // r10d

  if ( (unsigned int)sub_18001777C(a1, a2, a3, a1) )
  {
    if ( *(__int64 (__fastcall ***)())(v5 + 8) == off_1801101F0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( v6 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_1801058B8(Ldr, v3);
  return 0LL;
}
