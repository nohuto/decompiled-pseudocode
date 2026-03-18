/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C0007B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ @ 0x1C0007B60 (-GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BA280 (xxxRefreshDisplayOrientation.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  struct tagPROCESSINFO *ActivePpi; // rax
  struct tagPROCESSINFO *v3; // r8
  __int64 v4; // rbx

  UserSessionSwitchEnterCrit();
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87LL);
    v4 = 0LL;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 864LL) = a1;
    ActivePpi = CRotationMgr::GetActivePpi();
    if ( v3 == ActivePpi )
      xxxRefreshDisplayOrientation();
    v4 = 1LL;
  }
  LeaveCrit();
  return v4;
}
