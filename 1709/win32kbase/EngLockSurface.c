/*
 * XREFs of EngLockSurface @ 0x1C004C660
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00F2520 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0051670 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  struct OBJECT *v1; // rax
  struct OBJECT *v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // eax
  char v5; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdx
  GdiHandleManager *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+38h] [rbp-30h]
  unsigned int v24; // [rsp+78h] [rbp+10h] BYREF
  struct GdiHandleEntryTable *v25; // [rsp+80h] [rbp+18h] BYREF

  v1 = (struct OBJECT *)HmgShareLockCheckIgnoreStockBit((struct HOBJ__ *)hsurf);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  HmgIncrementShareReferenceCount(v1);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v22, v2, 0, 0, 1);
  if ( !v23 )
    return (SURFOBJ *)((char *)v2 + 24);
  v3 = v22;
  if ( *(_BYTE *)(v22 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v4 = (unsigned __int16)*(_DWORD *)v2 | (*(_DWORD *)v2 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v4 | (v4 >> 8) & 0xFF0000);
  }
  v5 = *(_BYTE *)(v3 + 14);
  if ( v5 == 5 )
  {
    v6 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 77);
    if ( v6 && qword_1C018DF68 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C018DF68, v6, 0);
  }
  else if ( v5 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *((_QWORD *)v2 + 19));
  }
  --*((_DWORD *)v2 + 2);
  v7 = gpHandleManager;
  v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v3 & 0xFFFFFF);
  v9 = *((_QWORD *)v7 + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_29;
  if ( v8 >= v11 )
    v12 = ((v8 - v11) >> 16) + 1;
  else
    v12 = 0;
  v13 = *(_QWORD *)(v9 + 8LL * v12 + 8);
  if ( v12 )
    v10 = ((1 - v12) << 16) - v11 + v8;
  if ( (unsigned int)v10 >= *(_DWORD *)(v13 + 20) )
LABEL_29:
    v14 = 0LL;
  else
    v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v15 = GdiHandleManager::DecodeIndex(v7, (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000);
  v16 = GdiHandleManager::DecodeIndex(v7, v15);
  v17 = *((_QWORD *)v7 + 2);
  GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v17, v16, &v25, &v24);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v15 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0;
    v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
    if ( v19 )
      v15 += ((1 - v19) << 16) - v18;
    *(_DWORD *)(*(_QWORD *)v20 + 24LL * v15 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v15 >> 8)) + 16LL * (unsigned __int8)v15,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return (SURFOBJ *)((char *)v2 + 24);
}
