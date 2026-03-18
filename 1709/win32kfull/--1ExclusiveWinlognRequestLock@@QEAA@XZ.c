/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0142EB0
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00FDF44 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
