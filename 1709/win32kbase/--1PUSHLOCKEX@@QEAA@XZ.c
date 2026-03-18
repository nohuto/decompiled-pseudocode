/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001F0A0
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1C001EDD0 (GreSfmGetNotificationTokens.c)
 *     EngAllocUserMemEx @ 0x1C001EEB8 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C001EFC0 (EngFreeUserMem.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00203C0 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020420 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008D410 (_GetPrecisionTouchPadConfiguration.c)
 *     UpdateMouseConnectionState @ 0x1C008D5A0 (UpdateMouseConnectionState.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     EnablePTPDevices @ 0x1C00DEFD0 (EnablePTPDevices.c)
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
