/*
 * XREFs of ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0
 * Callers:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     HmgReplaceObject @ 0x1C0042FB0 (HmgReplaceObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgShareLockEx @ 0x1C00A9F70 (HmgShareLockEx.c)
 *     HmgUnlock @ 0x1C00AA020 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA2B8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA3AC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EFD50 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall HANDLELOCK::~HANDLELOCK(HANDLELOCK *this)
{
  if ( *((_DWORD *)this + 2) )
    HANDLELOCK::vUnlock(this);
}
