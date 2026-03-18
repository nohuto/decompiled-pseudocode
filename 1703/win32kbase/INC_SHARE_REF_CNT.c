/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C002F3B0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EBBCC (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  signed int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // edx
  char v7; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  unsigned int v9; // ecx
  GdiHandleManager *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  signed int v15; // ecx
  __int64 v16; // rax
  _DWORD *v17; // rdx
  unsigned int v18; // edi
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = 0;
  v22 = 0LL;
  v23 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v23 )
    return;
  v5 = v22;
  if ( !v22 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
    return;
  }
  if ( *(_BYTE *)(v22 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v6 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTLOCKSTACKBACKTRACE((unsigned __int16)v6 | (v6 >> 8) & 0xFF0000, a1);
  }
  v7 = *(_BYTE *)(v5 + 14);
  if ( v7 == 5 )
  {
    v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 77);
    v9 = 0;
LABEL_7:
    TrackObjectReferenceIncrement(v9, v8);
    goto LABEL_8;
  }
  if ( v7 == 16 )
  {
    v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 19);
    v9 = 2;
    goto LABEL_7;
  }
LABEL_8:
  ++*((_DWORD *)a1 + 2);
  v10 = gpHandleManager;
  v11 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v5 & 0xFFFFFF);
  v12 = *((_QWORD *)v10 + 2);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = ((v11 - v14) >> 16) + 1;
      if ( (v11 - v14) >> 16 == -2 )
        goto LABEL_27;
    }
    else
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)(v12 + 8LL * v15 + 8);
    if ( v15 )
      v13 = (_DWORD)v13 - (v15 << 16) - v14 + 0x10000;
    if ( (unsigned int)v13 < *(_DWORD *)(v16 + 20) )
    {
      v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
      goto LABEL_15;
    }
  }
LABEL_27:
  v17 = 0LL;
LABEL_15:
  v18 = GdiHandleManager::DecodeIndex(v10, (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(v10, v18);
  v19 = *((_QWORD *)v10 + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( v18 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
  {
    if ( v18 < v20 || (v4 = ((v18 - v20) >> 16) + 1, (v18 - v20) >> 16 != -2) )
    {
      v21 = *(_QWORD *)(v19 + 8LL * v4 + 8);
      if ( v4 )
        v18 = v18 - (v4 << 16) - v20 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v21 + 24LL * v18 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
}
