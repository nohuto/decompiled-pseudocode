/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0055314
 * Callers:
 *     GreValidateVisrgn @ 0x1C00552A4 (GreValidateVisrgn.c)
 *     GreIsRendering @ 0x1C0056050 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C00592E0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C005B480 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x1C00A1FE0 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00FC1C0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vAltLock(this, a2, 0);
  return this;
}
