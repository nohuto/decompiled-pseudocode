/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C
 * Callers:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgShareLockEx @ 0x1C00A9F70 (HmgShareLockEx.c)
 *     HmgUnlock @ 0x1C00AA020 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA2B8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA3AC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EFD50 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E710 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00A8FE4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4, int a5)
{
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v10; // rsi
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  struct _ENTRY *v13; // rax
  int v14; // ecx
  unsigned int v15; // ecx
  struct OBJECT *EntryObject; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v17)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v10 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v10 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v11 = gpHandleManager;
  v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, a2);
  v13 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v11 + 2), v12, 0);
  *(_QWORD *)this = v13;
  if ( !v13 )
  {
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  _m_prefetchw((char *)v13 + 8);
  v14 = *((_DWORD *)v13 + 2);
  *((_DWORD *)this + 3) = v14;
  if ( a3 )
  {
    if ( a4 )
      goto LABEL_17;
    v15 = v14 & 0xFFFFFFFE;
    if ( v15 != (v17 & 0xFFFFFFFC) && v15 && (!v10 || v15 != *(_DWORD *)(v10 + 8)) )
      goto LABEL_21;
  }
  else if ( a4 )
  {
    goto LABEL_17;
  }
  if ( (*((_BYTE *)v13 + 15) & 0x20) != 0 )
  {
LABEL_21:
    HANDLELOCK::vUnlock(this);
    return;
  }
LABEL_17:
  if ( !a5 && (*((_BYTE *)v13 + 15) & 0x40) != 0 )
  {
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v13 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      goto LABEL_21;
  }
}
