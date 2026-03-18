/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C002BAA4
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C002B990 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0033440 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  ENTRYOBJ *EntryFromObject; // rax

  v2 = 0;
  if ( a1 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
    if ( EntryFromObject )
      return (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, a2) != 0;
  }
  return v2;
}
