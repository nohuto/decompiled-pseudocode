/*
 * XREFs of ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C001EBB0
 * Callers:
 *     GreIsProcessSystemCritical @ 0x1C013F254 (GreIsProcessSystemCritical.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00227F8 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock(
        UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *this)
{
  AutoSharedPushLock::AutoSharedPushLock(this, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  return this;
}
