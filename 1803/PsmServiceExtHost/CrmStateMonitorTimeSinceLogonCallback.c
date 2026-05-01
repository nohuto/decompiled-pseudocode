/*
 * XREFs of CrmStateMonitorTimeSinceLogonCallback @ 0x180005520
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonCallback(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (_DWORD *)(a2 + 60);
  CrmStateMonitorStateSet(a2, a2 + 60, 4LL);
  v5 = -10000000LL * (unsigned int)*v3;
  *v3 *= 2;
  v7 = v5;
  return TpSetTimer(a3, &v7, 0LL, 0LL);
}
