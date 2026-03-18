/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498
 * Callers:
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041464 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041540 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreValidateVisrgn @ 0x1C00552A4 (GreValidateVisrgn.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00552F8 (--1DCOBJA@@QEAA@XZ.c)
 *     GreIsRendering @ 0x1C0056050 (GreIsRendering.c)
 *     GreMarkUndeletableDC @ 0x1C0057230 (GreMarkUndeletableDC.c)
 *     GreSetDCOrg @ 0x1C00592E0 (GreSetDCOrg.c)
 *     GreSelectVisRgn @ 0x1C0059C20 (GreSelectVisRgn.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C005B480 (GreGetDCOrgEx.c)
 *     GreMarkDCUnreadable @ 0x1C0092B88 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C009BB40 (GreMarkDeletableDC.c)
 *     GreSelectVisRgnShared @ 0x1C00A1FE0 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 *     GreMarkPendingDestroyDC @ 0x1C00FDC74 (GreMarkPendingDestroyDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  __int64 v2; // rdi
  HDC v3; // rbp
  __int64 v4; // r14
  char v5; // al
  int v6; // esi
  GdiHandleManager *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // r10
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]

  XDCOBJ::RestoreAttributes(this);
  v2 = *(_QWORD *)this;
  v3 = **(HDC **)this;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v24, *(struct OBJECT **)this, 0, 0, 1);
  if ( !v25 )
    return;
  v4 = v24;
  if ( *(_BYTE *)(v24 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v21 = (unsigned __int16)*(_DWORD *)v2 | (*(_DWORD *)v2 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v21 | (v21 >> 8) & 0xFF0000);
  }
  v5 = *(_BYTE *)(v4 + 14);
  v6 = (*(unsigned __int8 *)(v4 + 15) >> 3) & 1;
  if ( v5 == 5 )
  {
    v22 = *(_QWORD *)(v2 + 616);
    v23 = 0LL;
  }
  else
  {
    if ( v5 != 16 )
      goto LABEL_5;
    v22 = *(_QWORD *)(v2 + 152);
    v23 = 2LL;
  }
  TrackObjectReferenceDecrement(v23, v22);
LABEL_5:
  --*(_DWORD *)(v2 + 8);
  v7 = gpHandleManager;
  v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v4 & 0xFFFFFF);
  v9 = *((_QWORD *)v7 + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_27;
  if ( v8 >= v11 )
    v12 = ((v8 - v11) >> 16) + 1;
  else
    v12 = 0;
  v13 = *(_QWORD *)(v9 + 8LL * v12 + 8);
  if ( v12 )
    v10 = ((1 - v12) << 16) - v11 + v8;
  if ( (unsigned int)v10 >= *(_DWORD *)(v13 + 20) )
LABEL_27:
    v14 = 0LL;
  else
    v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v15 = GdiHandleManager::DecodeIndex(v7, (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000);
  v16 = *((_QWORD *)v7 + 2);
  v17 = v15;
  v18 = *(_DWORD *)(v16 + 2056);
  if ( v15 < v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0;
    v20 = *(_QWORD *)(v16 + 8LL * v19 + 8);
    if ( v19 )
      v17 = ((1 - v19) << 16) - v18 + v15;
    *(_DWORD *)(*(_QWORD *)v20 + 24LL * v17 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v17 >> 8)) + 16LL * (unsigned __int8)v17,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v6 )
    bDeleteDCInternalEx(v3, 0LL);
}
