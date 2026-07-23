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

__int64 __fastcall sub_180056970(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = sub_18002601C((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v5 + 80) == off_180110680 )
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
