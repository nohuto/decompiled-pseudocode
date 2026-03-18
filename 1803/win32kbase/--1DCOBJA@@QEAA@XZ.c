/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0073C68
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vAltUnlockFast(this);
}
