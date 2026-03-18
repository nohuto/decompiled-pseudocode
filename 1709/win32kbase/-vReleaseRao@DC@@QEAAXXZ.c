/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0051EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  struct _ENTRY *EntryFromObject; // rax

  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
}
