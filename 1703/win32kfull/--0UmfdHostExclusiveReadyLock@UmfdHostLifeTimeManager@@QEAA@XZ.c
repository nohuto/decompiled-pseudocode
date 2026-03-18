/*
 * XREFs of ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C011C2FC
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C013FD18 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C013FE28 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock(
        UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *this)
{
  CAutoPushLockEx::CAutoPushLockEx(this, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  return this;
}
