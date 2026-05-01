/*
 * XREFs of CrmStateMonitorTimeSinceBootStart @ 0x180039C50
 * Callers:
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootStart(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // r9
  void *v4; // r10
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  _QWORD SystemInformation[6]; // [rsp+28h] [rbp-40h] BYREF

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v4, v3, v2);
  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  v5 = TpAllocTimer(a1 + 64, CrmStateMonitorTimeSinceBootCallback, a1, 0LL);
  if ( v5 >= 0 )
  {
    v6 = SystemInformation[0];
    v7 = SystemInformation[1];
    *(_DWORD *)(a1 + 60) = 30;
    if ( v7 < v6 + 300000000 )
      v8 = v7 - v6 - 300000000;
    else
      v8 = -1LL;
    v9 = *(_QWORD *)(a1 + 64);
    v11 = v8;
    TpSetTimer(v9, &v11, 0LL, 0LL);
  }
  return (unsigned int)v5;
}
