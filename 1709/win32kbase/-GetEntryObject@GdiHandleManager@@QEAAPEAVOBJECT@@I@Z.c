/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060
 * Callers:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00A9EC0 (HmgNextGarbageCollectible.c)
 *     HmgShareLockEx @ 0x1C00A9F70 (HmgShareLockEx.c)
 *     HmgUnlock @ 0x1C00AA020 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EFD50 (HmgSwapLockedHandleContents.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F0408 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  struct OBJECT *result; // rax
  unsigned int v8; // r8d
  __int64 v9; // r9

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    return 0LL;
  result = 0LL;
  if ( (unsigned int)v5 >= v6 )
    v8 = (((unsigned int)v5 - v6) >> 16) + 1;
  else
    v8 = 0;
  v9 = *(_QWORD *)(v4 + 8LL * v8 + 8);
  if ( v8 )
    v5 = ((1 - v8) << 16) - v6 + (unsigned int)v5;
  if ( (unsigned int)v5 < *(_DWORD *)(v9 + 20) )
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  return result;
}
