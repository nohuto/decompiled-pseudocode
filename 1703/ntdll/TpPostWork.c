/*
 * XREFs of TpPostWork @ 0x180016B90
 * Callers:
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpPostWork(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB_LDR_DATA *v4; // rdx
  int ShutdownThreadId; // eax

  v4 = Ldr;
  if ( !Ldr )
    return sub_1801058B8(Ldr, v4, a3, a4);
  ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
  if ( (ShutdownThreadId & 0x10000) != 0 )
    return sub_1801058B8(Ldr, v4, a3, a4);
  if ( (ShutdownThreadId & 0x20000) != 0 )
    return sub_1801058B8(Ldr, v4, a3, a4);
  if ( Ldr->SsHandle != off_1801101D0 )
    return sub_1801058B8(Ldr, v4, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return sub_1801058B8(Ldr, v4, a3, a4);
  else
    return sub_180016BD8(v4);
}
