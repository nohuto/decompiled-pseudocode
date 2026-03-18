/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C003338C
 * Callers:
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003F184 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(
        GdiHandleEntryDirectory **this,
        struct OBJECT *a2,
        char a3)
{
  __int64 v6; // rbp
  struct _ENTRY *EntryFromObject; // rax
  unsigned __int64 v8; // rcx

  v6 = (unsigned int)GdiHandleManager::DecodeIndex(
                       this,
                       (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000u);
  if ( (unsigned int)v6 < 0x10000 && *(_DWORD *)this <= 0x10000u )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject(this, a2);
    if ( a3 )
      ++*((_BYTE *)EntryFromObject + 13);
    else
      --*((_BYTE *)EntryFromObject + 13);
    v8 = v6 | ((unsigned __int64)*((unsigned __int16 *)EntryFromObject + 6) << 16);
    *(_QWORD *)a2 = v8;
    *(_QWORD *)EntryFromObject = (unsigned __int16)v8 | *(_QWORD *)EntryFromObject & 0xFFFFFFFFFF000000uLL | ((unsigned int)v8 >> 8) & 0xFF0000;
  }
}
