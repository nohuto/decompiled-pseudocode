/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0053194
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  struct _ENTRY *EntryFromObject; // rax

  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  REGION::vDeleteREGION(*((REGION **)this + 192));
  *((_QWORD *)this + 192) = prgnDefault;
}
