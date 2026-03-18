/*
 * XREFs of ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C
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

PUSHLOCKEX *__fastcall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
