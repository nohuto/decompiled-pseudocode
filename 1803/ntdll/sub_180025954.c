/*
 * XREFs of sub_180025954 @ 0x180025954
 * Callers:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180058580 (TpReleaseWait.c)
 *     sub_180058FA4 @ 0x180058FA4 (sub_180058FA4.c)
 *     TpWaitForWait @ 0x180059580 (TpWaitForWait.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180025954(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  PPEB_LDR_DATA Ldr; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d

  if ( (unsigned int)sub_18002601C(a1, a2, a3, a1) )
  {
    if ( *(__int64 (__fastcall ***)())(v6 + 8) == off_180110150 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( v7 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_1801086C8(Ldr, v3, v5, v6);
  return 0LL;
}
