/*
 * XREFs of TpSetPoolMaxThreads @ 0x180059670
 * Callers:
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

unsigned int *__fastcall TpSetPoolMaxThreads(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  unsigned int *result; // rax
  __int64 v6; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = (int)Ldr;
  if ( !a1 )
    return (unsigned int *)sub_1801086C8(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return (unsigned int *)sub_1801086C8(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return (unsigned int *)sub_1801086C8(a1, Ldr, a3, a4);
  ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v7);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v6 = *((_QWORD *)result + 18) + 556LL;
  }
  else
  {
    v6 = 2147353478LL;
  }
  if ( *(_BYTE *)v6 )
    return (unsigned int *)sub_1800038AC(a1, v7);
  return result;
}
