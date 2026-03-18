/*
 * XREFs of ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013F38C
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C013F454 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

ExclusiveWinlognRequestLock *__fastcall ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock(
        ExclusiveWinlognRequestLock *this)
{
  CAutoPushLockEx::CAutoPushLockEx(this, (struct _EX_PUSH_LOCK *)&UmfdWinLogonRequestLock);
  return this;
}
