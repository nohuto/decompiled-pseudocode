/*
 * XREFs of ?reset@?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C001A1E0
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0108FF0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrCreate @ 0x1C0110D00 (DxgkDispMgrCreate.c)
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C01E3740 (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 *     ??R?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C01E37EC (--R-$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGER.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C01E3C4C (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(ReferenceCounted **a1, ReferenceCounted *a2)
{
  ReferenceCounted *v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release(v4);
  *a1 = a2;
  return result;
}
