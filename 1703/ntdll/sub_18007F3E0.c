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

__int64 __fastcall sub_18007F3E0(PPEB_LDR_DATA Ldr, __int64 a2, int a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = sub_18001777C((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v5 + 80) == off_180110760 )
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
