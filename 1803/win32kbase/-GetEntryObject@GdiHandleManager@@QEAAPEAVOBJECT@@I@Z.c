/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0
 * Callers:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     HmgFree @ 0x1C00715F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00764AC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0076618 (HmgNextGarbageCollectible.c)
 *     HmgUnlock @ 0x1C00766BC (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x1C00C2FE0 (HmgSwapLockedHandleContents.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00C3F64 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v3; // eax
  GdiHandleEntryDirectory *v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // r9

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = this[2];
  v5 = 0LL;
  v6 = v3;
  v7 = *((_DWORD *)v4 + 514);
  if ( v3 < v7 + ((*((unsigned __int16 *)v4 + 1) + 0xFFFF) << 16) )
  {
    v8 = ((v3 - v7) >> 16) + 1;
    if ( (unsigned int)v6 < v7 )
      v8 = 0LL;
    v9 = *((_QWORD *)v4 + v8 + 1);
    if ( (_DWORD)v8 )
      v6 = ((1 - (_DWORD)v8) << 16) - v7 + (unsigned int)v6;
    if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
      return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
  }
  return (struct OBJECT *)v5;
}
