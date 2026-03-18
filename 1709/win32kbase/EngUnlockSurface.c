/*
 * XREFs of EngUnlockSurface @ 0x1C004CAA0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F1CF0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  struct OBJECT *p_pvScan0; // rbx
  HSURF hsurf; // rsi
  char *v3; // r14
  GdiHandleManager *v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // r9d
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int v18; // eax
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  GdiHandleManager *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  __int64 v28; // r8
  _DWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+38h] [rbp-40h]

  if ( pso )
  {
    p_pvScan0 = (struct OBJECT *)&pso[-1].pvScan0;
    hsurf = pso->hsurf;
    v3 = 0LL;
    v4 = gpHandleManager;
    v5 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000);
    v6 = *((_QWORD *)v4 + 2);
    v7 = v5;
    v8 = *(_DWORD *)(v6 + 2056);
    if ( v5 < v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      if ( v5 >= v8 )
        v9 = ((v5 - v8) >> 16) + 1;
      else
        v9 = 0;
      v10 = *(_QWORD *)(v6 + 8LL * v9 + 8);
      if ( v9 )
        v7 = v5 + ((1 - v9) << 16) - v8;
      v11 = 0LL;
      if ( (unsigned int)v7 < *(_DWORD *)(v10 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8) )
      {
        v11 = *(_QWORD *)v10 + 24LL * (unsigned int)v7;
      }
      if ( v11 )
      {
        if ( *(_BYTE *)(v11 + 14) == 5 && *(_WORD *)(v11 + 12) == WORD1(hsurf) )
        {
          v12 = GdiHandleManager::DecodeIndex(v4, (unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000);
          v13 = *(_DWORD *)(v6 + 2056);
          v14 = v12;
          if ( v12 < v13 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
          {
            if ( v12 >= v13 )
              v15 = ((v12 - v13) >> 16) + 1;
            else
              v15 = 0;
            v16 = *(_QWORD *)(v6 + 8LL * v15 + 8);
            if ( v15 )
              v14 = v12 + ((1 - v15) << 16) - v13;
            if ( (unsigned int)v14 < *(_DWORD *)(v16 + 20) )
              v3 = *(char **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
          }
        }
      }
    }
    if ( p_pvScan0 == (struct OBJECT *)v3 )
    {
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v36, p_pvScan0, 0, 0, 1);
      if ( v37 )
      {
        v17 = v36;
        if ( *(_BYTE *)(v36 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
        {
          v18 = (unsigned __int16)*(_DWORD *)p_pvScan0 | (*(_DWORD *)p_pvScan0 >> 8) & 0xFF0000;
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v18 | (v18 >> 8) & 0xFF0000);
        }
        v19 = *(_BYTE *)(v17 + 14);
        if ( v19 == 5 )
        {
          v20 = *((_QWORD *)p_pvScan0 + 77);
          v21 = 0LL;
        }
        else
        {
          if ( v19 != 16 )
          {
LABEL_27:
            --*((_DWORD *)p_pvScan0 + 2);
            v22 = gpHandleManager;
            v23 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v17 & 0xFFFFFF);
            v24 = *((_QWORD *)v22 + 2);
            v25 = v23;
            v26 = *(_DWORD *)(v24 + 2056);
            if ( v23 >= v26 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
              goto LABEL_49;
            if ( v23 >= v26 )
              v27 = ((v23 - v26) >> 16) + 1;
            else
              v27 = 0;
            v28 = *(_QWORD *)(v24 + 8LL * v27 + 8);
            if ( v27 )
              v25 = ((1 - v27) << 16) - v26 + v23;
            if ( (unsigned int)v25 >= *(_DWORD *)(v28 + 20) )
LABEL_49:
              v29 = 0LL;
            else
              v29 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
            v30 = GdiHandleManager::DecodeIndex(v22, (unsigned __int16)*v29 | (*v29 >> 8) & 0xFF0000);
            v31 = *((_QWORD *)v22 + 2);
            v32 = v30;
            v33 = *(_DWORD *)(v31 + 2056);
            if ( v30 < v33 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
            {
              if ( v30 >= v33 )
                v34 = ((v30 - v33) >> 16) + 1;
              else
                v34 = 0;
              v35 = *(_QWORD *)(v31 + 8LL * v34 + 8);
              if ( v34 )
                v32 = ((1 - v34) << 16) - v33 + v30;
              *(_DWORD *)(*(_QWORD *)v35 + 24 * v32 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * (v32 >> 8)) + 16LL * (unsigned __int8)v32,
                0LL);
              KeLeaveCriticalRegion();
            }
            KeLeaveCriticalRegion();
            return;
          }
          v20 = *((_QWORD *)p_pvScan0 + 19);
          v21 = 2LL;
        }
        TrackObjectReferenceDecrement(v21, v20);
        goto LABEL_27;
      }
    }
  }
}
