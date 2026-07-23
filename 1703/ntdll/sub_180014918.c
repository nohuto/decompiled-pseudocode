/*
 * XREFs of sub_180014918 @ 0x180014918
 * Callers:
 *     TpWaitForWork @ 0x1800110D0 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x180014510 (TpReleaseWork.c)
 * Callees:
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_180014918(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( Ldr )
  {
    if ( (unsigned int)sub_18001777C(Ldr, a2, a3, Ldr) )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v4 + 8) == &off_1801101D0 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_1801058B8(Ldr, a2);
  return 0LL;
}
