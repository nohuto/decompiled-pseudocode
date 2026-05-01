/*
 * XREFs of CrmStateMonitorTimeSinceBootCallback @ 0x180005460
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _QWORD SystemInformation[6]; // [rsp+28h] [rbp-40h] BYREF

  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  CrmStateMonitorStateSet(a2, a2 + 60, 4LL);
  v5 = SystemInformation[0];
  v6 = (unsigned int)(2 * *(_DWORD *)(a2 + 60));
  v7 = SystemInformation[1];
  *(_DWORD *)(a2 + 60) = v6;
  if ( v7 >= 10000000 * v6 + v5 )
    v8 = -1LL;
  else
    v8 = v7 - 10000000 * v6 - v5;
  v10 = v8;
  return TpSetTimer(a3, &v10, 0LL, 0LL);
}
