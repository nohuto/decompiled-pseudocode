/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@XZ @ 0x1C01AC1CC
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00427FC (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01AC3F4 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 CRotationMgr::GetActivePpiPreference()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v3, gRotationProcessLock);
  v0 = 0;
  if ( grpdeskRitInput )
  {
    v1 = *(_QWORD *)(grpdeskRitInput + 256LL);
    if ( v1 )
      v0 = *(_DWORD *)(v1 + 872);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v3);
  return v0;
}
