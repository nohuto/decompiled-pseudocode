/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C000D040
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C000D09C (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     xxxRefreshDisplayOrientation @ 0x1C0042640 (xxxRefreshDisplayOrientation.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  UserSessionSwitchEnterCrit();
  v2 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87LL);
    v3 = 0LL;
  }
  else
  {
    *(_DWORD *)(v2 + 872) = a1;
    if ( CRotationMgr::IsActivePpi((struct tagPROCESSINFO *)v2) )
      xxxRefreshDisplayOrientation();
    v3 = 1LL;
  }
  LeaveCrit();
  return v3;
}
