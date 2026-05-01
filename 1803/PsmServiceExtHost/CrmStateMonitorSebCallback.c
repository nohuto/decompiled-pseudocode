/*
 * XREFs of CrmStateMonitorSebCallback @ 0x180036A70
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSebCallback(__int64 a1, __int64 a2, __int64 a3, void **a4, _QWORD *a5)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  v6[0] = 1LL;
  *(_QWORD *)((char *)v6 + 4) = *a5;
  CrmStateMonitorStateSet(a4, v6, 0xCuLL);
  return 0LL;
}
