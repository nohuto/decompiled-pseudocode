/*
 * XREFs of sub_180056970 @ 0x180056970
 * Callers:
 *     TpWaitForAlpcCompletion @ 0x180055760 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800567B0 (TpReleaseAlpcCompletion.c)
 *     TpAlpcRegisterCompletionList @ 0x180107EF0 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x180107F50 (TpAlpcUnregisterCompletionList.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180056970(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  struct _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = sub_18002601C((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == off_180110680 )
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
