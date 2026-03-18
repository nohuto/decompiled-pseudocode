/*
 * XREFs of PopEventCalloutDispatch @ 0x14015D3BC
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopDispatchCallout @ 0x1405F2CB0 (PopDispatchCallout.c)
 *     PopDispatchFullWake @ 0x140706BC0 (PopDispatchFullWake.c)
 *     PopDispatchShutdownEvent @ 0x140706C30 (PopDispatchShutdownEvent.c)
 *     PopPolicyTimeChange @ 0x140706C90 (PopPolicyTimeChange.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 */

struct _KTHREAD *__fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v3; // r9
  struct _KTHREAD *result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = a1;
  v7 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v2 = 1LL;
    if ( a1 == 1 )
    {
      LODWORD(v5) = 0;
      v3 = &v5;
    }
    else
    {
      v3 = 0LL;
      if ( a1 == 10 )
        v2 = 0LL;
      else
        v2 = 2LL;
    }
    ((void (__fastcall *)(__int64, int *, __int64, __int64 *, __int64))PopInvokeWin32Callout)(3LL, &v6, v2, v3, v5);
    result = KeGetCurrentThread();
    if ( result->WaitBlock[3].SpareLong )
      __fastfail(0x20u);
  }
  return result;
}
