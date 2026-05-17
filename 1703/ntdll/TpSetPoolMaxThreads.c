/*
 * XREFs of TpSetPoolMaxThreads @ 0x18000FE40
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180105340 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     sub_180004AD8 @ 0x180004AD8 (sub_180004AD8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

struct _PEB *__fastcall TpSetPoolMaxThreads(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _PEB *result; // rax
  __int64 v8; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)sub_1801058B8();
  ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v9);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v4, v3, v5, v6);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->HotpatchInformation + 556;
  }
  else
  {
    v8 = 2147353478LL;
  }
  if ( *(_BYTE *)v8 )
    return (struct _PEB *)sub_180004AD8(a1, v9);
  return result;
}
