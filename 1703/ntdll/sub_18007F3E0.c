/*
 * XREFs of sub_18007F3E0 @ 0x18007F3E0
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x18007F150 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x18007F190 (TpAlpcRegisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x18007F270 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x18007F310 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_18007F3E0(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  struct _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = sub_18001777C((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == off_180110760 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_1801058B8(Ldr, a2, a3, v4);
  return 0LL;
}
