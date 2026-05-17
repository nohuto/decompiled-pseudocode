/*
 * XREFs of sub_180058A10 @ 0x180058A10
 * Callers:
 *     TpWaitForWork @ 0x180057E60 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x1800589B0 (TpReleaseWork.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180058A10(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  struct _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = sub_18002601C((__int64)Ldr, a2);
    if ( v5 )
    {
      if ( v4->SsHandle == off_180110190 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_1801086C8(Ldr, a2, a3, v4);
  return 0LL;
}
