/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003F184 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00A00A4 (HmgNextGarbageCollectible.c)
 *     HmgUnlock @ 0x1C00A0158 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EBE30 (HmgSwapLockedHandleContents.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00EC4A8 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  struct OBJECT *result; // rax
  signed int v8; // r8d
  __int64 v9; // r9

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    return 0LL;
  result = 0LL;
  if ( (unsigned int)v5 >= v6 )
  {
    v8 = (((unsigned int)v5 - v6) >> 16) + 1;
    if ( ((unsigned int)v5 - v6) >> 16 != -2 )
      goto LABEL_4;
    return 0LL;
  }
  v8 = 0;
LABEL_4:
  v9 = *(_QWORD *)(v4 + 8LL * v8 + 8);
  if ( v8 )
    v5 = (_DWORD)v5 - (v8 << 16) - v6 + 0x10000;
  if ( (unsigned int)v5 < *(_DWORD *)(v9 + 20) )
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  return result;
}
