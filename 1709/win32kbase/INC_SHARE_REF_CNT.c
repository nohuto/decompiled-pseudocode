/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C004CDC0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00495E4 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(struct OBJECT *a1)
{
  __int64 v2; // rdi
  char v3; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v4; // rdx
  unsigned int v5; // ecx
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r8
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  GdiHandleEntryDirectory *v15; // rcx
  unsigned __int8 v16; // r9
  struct GdiHandleEntryTable *v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  struct GdiHandleEntryTable *v22; // [rsp+70h] [rbp+18h] BYREF

  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v19, a1, 0, 0, 0);
  if ( !v20 )
    return;
  v2 = v19;
  if ( *(_BYTE *)(v19 + 14) == 5 )
    RECALTLOCK(
      (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)a1 | (unsigned __int64)((*(_DWORD *)a1 >> 8) & 0xFF0000)),
      a1);
  v3 = *(_BYTE *)(v2 + 14);
  if ( v3 == 5 )
  {
    v4 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 77);
    v5 = 0;
LABEL_6:
    TrackObjectReferenceIncrement(v5, v4);
    goto LABEL_7;
  }
  if ( v3 == 16 )
  {
    v4 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 19);
    v5 = 2;
    goto LABEL_6;
  }
LABEL_7:
  ++*((_DWORD *)a1 + 2);
  v6 = gpHandleManager;
  v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v2 & 0xFFFFFF);
  v8 = *((_QWORD *)v6 + 2);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    goto LABEL_21;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0;
  v12 = *(_QWORD *)(v8 + 8LL * v11 + 8);
  if ( v11 )
    v9 = ((1 - v11) << 16) - v10 + v7;
  if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_21:
    v13 = 0LL;
  else
    v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
  v14 = GdiHandleManager::DecodeIndex(v6, (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000);
  v15 = (GdiHandleEntryDirectory *)*((_QWORD *)v6 + 2);
  v22 = 0LL;
  v21 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v15, v14, &v22, &v21) )
  {
    v16 = v21;
    v17 = v22;
    v18 = (unsigned __int64)v21 >> 8;
    *(_DWORD *)(*(_QWORD *)v22 + 24LL * v21 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v17 + 3) + 8 * v18) + 16LL * v16, 0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
}
