/*
 * XREFs of LeaveEditionCrit @ 0x1C0115100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  LeaveDeviceInfoListCrit_(a1);
  return UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
}
