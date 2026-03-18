/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01E2D8C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C00A6150 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0055BC8 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(__int64 a1, __int64 a2, struct tagRECT *a3)
{
  return xxxCallNextHookEx();
}
