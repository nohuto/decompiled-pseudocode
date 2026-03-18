/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013F3B0
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C013F454 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
