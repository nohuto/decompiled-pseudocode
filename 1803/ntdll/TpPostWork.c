/*
 * XREFs of TpPostWork @ 0x180025FD0
 * Callers:
 *     sub_1800709B0 @ 0x1800709B0 (sub_1800709B0.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 */

__int64 __fastcall TpPostWork(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  struct _PEB_LDR_DATA *v3; // r9

  v3 = Ldr;
  if ( Ldr
    && (unsigned int)sub_18002601C(Ldr, 0LL, a3, Ldr)
    && v3->SsHandle == off_180110190
    && (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)a2) )
  {
    return sub_180026040(v3);
  }
  else
  {
    return sub_1801086C8(Ldr, a2, a3, v3);
  }
}
