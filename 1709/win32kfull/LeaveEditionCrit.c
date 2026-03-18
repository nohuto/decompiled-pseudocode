/*
 * XREFs of LeaveEditionCrit @ 0x1C011F2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  LeaveDeviceInfoListCrit_(a1, a2, a3);
  return UserSessionSwitchLeaveCrit(v4, v3);
}
