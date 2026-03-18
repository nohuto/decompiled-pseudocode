/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C00552F8
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00FC1C0 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vAltUnlockFast(this);
}
