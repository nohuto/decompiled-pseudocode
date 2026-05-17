/*
 * XREFs of TpAllocPool @ 0x180057270
 * Callers:
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 * Callees:
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( !Ldr )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return sub_180057618(a1, 0LL);
    }
  }
  sub_1801086C8(a1, Ldr, a3, a4);
  return 3221225485LL;
}
