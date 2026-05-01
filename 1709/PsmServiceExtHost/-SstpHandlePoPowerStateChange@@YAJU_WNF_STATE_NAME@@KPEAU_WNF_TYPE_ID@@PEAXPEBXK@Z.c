/*
 * XREFs of ?SstpHandlePoPowerStateChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180021060
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall SstpHandlePoPowerStateChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4)
{
  unsigned int v5; // ebx
  _SYSTEM_POWER_STATUS SystemPowerStatus; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&SystemPowerStatus.ACLineStatus = 0LL;
  SystemPowerStatus.BatteryFullLifeTime = 0;
  v5 = 0;
  if ( GetSystemPowerStatus(&SystemPowerStatus) )
  {
    if ( SystemPowerStatus.ACLineStatus == 1 )
      a4[4] |= 2u;
    else
      a4[4] &= ~2u;
  }
  else if ( (int)GetLastError() > 0 )
  {
    return (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    return GetLastError();
  }
  return v5;
}
