/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C
 * Callers:
 *     GreGetDCOrgEx @ 0x1C0028640 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C0028A30 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0028AD0 (GreSetDCOrg.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0059C78 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0059D48 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSelectVisRgnShared @ 0x1C00980A0 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)this);
  }
}
