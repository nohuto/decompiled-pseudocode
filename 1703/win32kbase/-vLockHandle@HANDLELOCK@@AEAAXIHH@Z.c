/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40
 * Callers:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     HmgLock @ 0x1C002F7C0 (HmgLock.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C0030BFC (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C005A5D0 (HmgMarkUndeletable.c)
 *     HmgLockAllOwners @ 0x1C007B9E0 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C007E370 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C0083340 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0083B50 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0083CAC (HmgShareLockIgnoreStockBit.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00A0158 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A0AF0 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EBE30 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4)
{
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ebp
  GdiHandleManager *v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // edx
  signed int v14; // ecx
  __int64 v15; // rbx
  char v16; // r13
  GdiHandleManager *v17; // rbp
  __int64 v18; // r9
  unsigned int v19; // edx
  signed int v20; // ecx
  __int64 v21; // r9
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-48h]
  _DWORD v25[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h]

  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v25);
  v8 = 0LL;
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v24 = *(_QWORD *)(v9 + 72);
  else
    v24 = 0LL;
  *((_DWORD *)this + 2) = 1;
  v10 = a2;
  v11 = gpHandleManager;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a2,
                                  1)
           + 13) == HIWORD(a2) )
        v10 = (unsigned __int16)a2;
    }
    else
    {
      v10 = (unsigned __int16)a2;
    }
  }
  v12 = *((_QWORD *)v11 + 2);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( v10 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    goto LABEL_37;
  if ( v10 >= v13 )
  {
    v14 = ((v10 - v13) >> 16) + 1;
    if ( (v10 - v13) >> 16 == -2 )
    {
LABEL_37:
      *((_DWORD *)this + 2) = 0;
      KeLeaveCriticalRegion();
      return;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)(v12 + 8LL * v14 + 8);
  if ( v14 )
    v10 = v10 - (v14 << 16) - v13 + 0x10000;
  v16 = 0;
  if ( v10 >= *(_DWORD *)(v15 + 20) )
    goto LABEL_37;
  v26 = *(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v10 >> 8)) + 16LL * (unsigned __int8)v10;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v26, 0LL);
  if ( v10 < *(_DWORD *)(v15 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                 + 16LL * (unsigned __int8)v10
                 + 8) )
  {
    v16 = 1;
    *(_DWORD *)(*(_QWORD *)v15 + 24LL * v10 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v26, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v16 )
    goto LABEL_37;
  v17 = gpHandleManager;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a2,
                                  1)
           + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
    else
    {
      a2 = (unsigned __int16)a2;
    }
  }
  v18 = *((_QWORD *)v17 + 2);
  v19 = *(_DWORD *)(v18 + 2056);
  if ( a2 < v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
  {
    if ( a2 >= v19 )
    {
      v20 = ((a2 - v19) >> 16) + 1;
      if ( (a2 - v19) >> 16 == -2 )
        goto LABEL_28;
    }
    else
    {
      v20 = 0;
    }
    v21 = *(_QWORD *)(v18 + 8LL * v20 + 8);
    if ( v20 )
      a2 = a2 - (v20 << 16) - v19 + 0x10000;
    if ( a2 < *(_DWORD *)(v21 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)a2 >> 8))
                   + 16LL * (unsigned __int8)a2
                   + 8) )
    {
      v8 = *(_QWORD *)v21 + 24LL * a2;
    }
  }
LABEL_28:
  *(_QWORD *)this = v8;
  _m_prefetchw((const void *)(v8 + 8));
  v22 = *(_DWORD *)(v8 + 8);
  *((_DWORD *)this + 3) = v22;
  if ( a3 )
  {
    if ( a4 )
      return;
    v23 = v22 & 0xFFFFFFFE;
    if ( v23 != (v25[0] & 0xFFFFFFFC) && v23 && (!v24 || v23 != *(_DWORD *)(v24 + 8)) )
      goto LABEL_51;
  }
  else if ( a4 )
  {
    return;
  }
  if ( (*(_BYTE *)(v8 + 15) & 0x20) != 0 )
LABEL_51:
    HANDLELOCK::vUnlock(this);
}
