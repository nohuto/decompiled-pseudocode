/*
 * XREFs of ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x18004D0B0
 * Callers:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DResourceManager::UnusedNotification(union _SLIST_HEADER *this, struct _SLIST_ENTRY *a2)
{
  InterlockedPushEntrySList(this + 1, a2 + 3);
}
