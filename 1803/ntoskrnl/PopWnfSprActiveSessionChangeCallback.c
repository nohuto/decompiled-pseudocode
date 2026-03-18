/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x140614350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x14057EA10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 20;
  v1 = ExQueryWnfStateData(a1, &v4, v5, &v3);
  if ( v1 >= 0 && v3 == 20 )
  {
    PopAcquirePolicyLock();
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 0x14u, v5);
    PopReleasePolicyLock();
  }
  return (unsigned int)v1;
}
