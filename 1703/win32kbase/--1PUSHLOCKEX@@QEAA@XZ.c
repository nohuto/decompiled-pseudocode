/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0
 * Callers:
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C002CA30 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C002CA90 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C007D3B0 (_GetPrecisionTouchPadConfiguration.c)
 *     UpdateMouseConnectionState @ 0x1C007D540 (UpdateMouseConnectionState.c)
 *     GreSfmGetNotificationTokens @ 0x1C007DAD0 (GreSfmGetNotificationTokens.c)
 *     EngAllocUserMemEx @ 0x1C007DBBC (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C007DCC0 (EngFreeUserMem.c)
 *     EnablePTPDevices @ 0x1C00D8C90 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
