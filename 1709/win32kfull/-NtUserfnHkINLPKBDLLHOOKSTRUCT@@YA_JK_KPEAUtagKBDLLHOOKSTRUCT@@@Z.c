/*
 * XREFs of ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C01E2C34
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C00A6150 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0055BC8 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPKBDLLHOOKSTRUCT(__int64 a1, __int64 a2, struct tagKBDLLHOOKSTRUCT *a3)
{
  return xxxCallNextHookEx();
}
