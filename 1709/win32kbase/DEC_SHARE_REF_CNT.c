/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C004D890
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct OBJECT *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  char v4; // al
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+38h] [rbp-20h]

  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v23, a1, 0, 0, 1);
  if ( !v24 )
    return 0LL;
  v2 = v23;
  if ( *(_BYTE *)(v23 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v3 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  }
  v4 = *(_BYTE *)(v2 + 14);
  v5 = *((_DWORD *)a1 + 2);
  if ( v4 == 5 )
  {
    v6 = *((_QWORD *)a1 + 77);
    v7 = 0LL;
LABEL_6:
    TrackObjectReferenceDecrement(v7, v6);
    goto LABEL_7;
  }
  if ( v4 == 16 )
  {
    v6 = *((_QWORD *)a1 + 19);
    v7 = 2LL;
    goto LABEL_6;
  }
LABEL_7:
  --*((_DWORD *)a1 + 2);
  v8 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v2 & 0xFFFFFF);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_27;
  if ( v9 >= v12 )
    v13 = ((v9 - v12) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v10 + 8LL * v13 + 8);
  if ( v13 )
    v11 = ((1 - v13) << 16) - v12 + v9;
  if ( (unsigned int)v11 >= *(_DWORD *)(v14 + 20) )
LABEL_27:
    v15 = 0LL;
  else
    v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  v16 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000);
  v17 = *((_QWORD *)v8 + 2);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    if ( v16 >= v19 )
      v20 = ((v16 - v19) >> 16) + 1;
    else
      v20 = 0;
    v21 = *(_QWORD *)(v17 + 8LL * v20 + 8);
    if ( v20 )
      v18 = ((1 - v20) << 16) - v19 + v16;
    *(_DWORD *)(*(_QWORD *)v21 + 24 * v18 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v5;
}
