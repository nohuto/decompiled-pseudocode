/*
 * XREFs of TpSetPoolMinThreads @ 0x1800878A0
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 *     sub_180105A00 @ 0x180105A00 (sub_180105A00.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (unsigned int)Ldr;
  if ( !a1 || (int)Ldr < 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801058B8(a1, Ldr, a3, a4);
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
        sub_180105A00(a1, v8);
    }
    return (unsigned int)v5;
  }
}
