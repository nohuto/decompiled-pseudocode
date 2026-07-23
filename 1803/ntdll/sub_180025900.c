/*
 * XREFs of sub_180025900 @ 0x180025900
 * Callers:
 *     TpStartAsyncIoOperation @ 0x180025840 (TpStartAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x1800572C0 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18007B150 (TpCancelAsyncIoOperation.c)
 *     TpWaitForIoCompletion @ 0x180082D50 (TpWaitForIoCompletion.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall sub_180025900(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  PPEB_LDR_DATA v4; // r9

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    if ( (unsigned int)sub_18002601C(Ldr, a2, a3, Ldr) )
    {
      if ( v4->SsHandle == &off_180110130 )
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
