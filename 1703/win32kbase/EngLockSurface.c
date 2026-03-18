/*
 * XREFs of EngLockSurface @ 0x1C0036A00
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00EF860 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE014 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  struct _BASEOBJECT *v1; // rax
  struct _BASEOBJECT *v2; // rbx
  SURFOBJ *v3; // r14
  signed int v4; // esi
  unsigned int v5; // edx
  int *v6; // rdi
  unsigned int v7; // eax
  char v8; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v9; // rdx
  int v10; // edx
  GdiHandleManager *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  signed int v16; // ecx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rbp
  unsigned int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rdx
  int *v26; // [rsp+20h] [rbp-38h] BYREF
  int v27; // [rsp+28h] [rbp-30h]
  unsigned int v28; // [rsp+68h] [rbp+10h] BYREF
  struct GdiHandleEntryTable *v29; // [rsp+70h] [rbp+18h] BYREF

  v1 = (struct _BASEOBJECT *)HmgShareLockCheckIgnoreStockBit((unsigned int)hsurf, 5);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  HmgIncrementShareReferenceCount(v1);
  v3 = (SURFOBJ *)((char *)v2 + 24);
  v4 = 0;
  v5 = (unsigned __int16)*(_DWORD *)v2 | (*(_DWORD *)v2 >> 8) & 0xFF0000;
  v26 = 0LL;
  v27 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, v5, 0, 0);
  if ( !v27 )
    return (SURFOBJ *)((char *)v2 + 24);
  v6 = v26;
  if ( !v26 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
    return (SURFOBJ *)((char *)v2 + 24);
  }
  if ( *((_BYTE *)v26 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v7 = (unsigned __int16)*(_DWORD *)v2 | (*(_DWORD *)v2 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v7 | (v7 >> 8) & 0xFF0000);
  }
  v8 = *((_BYTE *)v6 + 14);
  if ( v8 == 5 )
  {
    v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 77);
    if ( v9 && qword_1C0189408 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C0189408, v9, 0);
  }
  else if ( v8 == 16 )
  {
    TrackObjectReferenceDecrement(
      2u,
      *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v2 + 19));
  }
  --*((_DWORD *)v2 + 2);
  v10 = *v6;
  v11 = gpHandleManager;
  v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v10 & 0xFFFFFF);
  v13 = *((_QWORD *)v11 + 2);
  v14 = v12;
  v15 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_29;
  if ( v12 >= v15 )
  {
    v16 = ((v12 - v15) >> 16) + 1;
    if ( (v12 - v15) >> 16 == -2 )
      goto LABEL_29;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)(v13 + 8LL * v16 + 8);
  if ( v16 )
    v14 = (_DWORD)v14 - (v16 << 16) - v15 + 0x10000;
  if ( (unsigned int)v14 < *(_DWORD *)(v17 + 20) )
  {
    v18 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
    goto LABEL_15;
  }
LABEL_29:
  v18 = 0LL;
LABEL_15:
  v19 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v11, (unsigned __int16)*v18 | (*v18 >> 8) & 0xFF0000u);
  v20 = *((_QWORD *)v11 + 2);
  v21 = v19;
  v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v11, v19);
  GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v20, v22, &v29, &v28);
  v23 = *(_DWORD *)(v20 + 2056);
  if ( v21 < v23 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
  {
    if ( v21 < v23 || (v4 = ((v21 - v23) >> 16) + 1, (v21 - v23) >> 16 != -2) )
    {
      v24 = *(_QWORD *)(v20 + 8LL * v4 + 8);
      if ( v4 )
        v21 = v21 - (v4 << 16) - v23 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v24 + 24LL * v21 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
  return v3;
}
