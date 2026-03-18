/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01D6490
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0052DE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00D93C4 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(unsigned int a1, __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagMSLLHOOKSTRUCT *)W32UserProbeAddress;
  v4[0] = *(_OWORD *)a3;
  v4[1] = *((_OWORD *)a3 + 1);
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
