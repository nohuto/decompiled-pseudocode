/*
 * XREFs of sub_180058A10 @ 0x180058A10
 * Callers:
 *     TpWaitForWork @ 0x180057E60 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x1800589B0 (TpReleaseWork.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180058A10(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = sub_18002601C((__int64)Ldr, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v5 + 8) == &off_180110190 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_1801086C8(Ldr, a2, a3);
  return 0LL;
}
