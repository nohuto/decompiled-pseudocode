/*
 * XREFs of TpSetPoolMinThreads @ 0x180056420
 * Callers:
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 *     sub_180108884 @ 0x180108884 (sub_180108884.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (unsigned int)Ldr;
  if ( !a1 || (int)Ldr < 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  else
  {
    v5 = ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v8);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
    {
      if ( v5 >= 0 )
        sub_180108884(a1, v8);
    }
    return (unsigned int)v5;
  }
}
