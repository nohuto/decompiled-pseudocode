/*
 * XREFs of GreIsProcessSystemCritical @ 0x1C013F254
 * Callers:
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 * Callees:
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C001EB80 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C001EBB0 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreIsProcessSystemCritical(struct _KPROCESS *a1)
{
  BOOL v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v4);
  v2 = UmfdHostLifeTimeManager::s_UmfdHostProcess == a1;
  AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
  return v2;
}
