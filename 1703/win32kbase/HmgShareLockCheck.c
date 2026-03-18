/*
 * XREFs of HmgShareLockCheck @ 0x1C0031F10
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreCreateBitmap @ 0x1C0042610 (GreCreateBitmap.c)
 *     GreSetBitmapOwner @ 0x1C00432D0 (GreSetBitmapOwner.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C00592C0 (GreCreatePatternBrushInternal.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00771F0 (GreDCSelectBrush.c)
 *     bDfbSurfacesMigrated @ 0x1C0077D90 (bDfbSurfacesMigrated.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0077FC8 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C0078BB4 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00984A8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00E80E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bInitBMOBJ @ 0x1C01D7858 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 */

__int64 __fastcall HmgShareLockCheck(unsigned int a1, char a2)
{
  __int16 v2; // ebp^2
  signed int v3; // r14d
  unsigned int v4; // edi
  __int64 v6; // r13
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rax
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  GdiHandleManager *v11; // r15
  unsigned int v12; // eax
  struct _ENTRY *Entry; // rsi
  unsigned int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // r8d
  signed int v19; // edx
  __int64 v20; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // edi
  __int64 v24; // rcx
  unsigned int v25; // r8d
  signed int v26; // edx
  __int64 v27; // rax
  _DWORD *v28; // rdx
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // r10
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // edi
  struct _ENTRY *v38; // [rsp+20h] [rbp-58h] BYREF
  int v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+2Ch] [rbp-4Ch]
  __int64 v41; // [rsp+80h] [rbp+8h]
  int v42; // [rsp+90h] [rbp+18h] BYREF

  v2 = HIWORD(a1);
  v3 = 0;
  v38 = 0LL;
  v4 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v42);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v41 = *(_QWORD *)(v8 + 72);
  else
    v41 = 0LL;
  v9 = gpHandleManager;
  v39 = 1;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, v4);
  if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v9 + 2), v10, 0) )
  {
    v11 = gpHandleManager;
    v12 = GdiHandleManager::DecodeIndex(gpHandleManager, v4);
    Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v12, 0);
    v38 = Entry;
    _m_prefetchw((char *)Entry + 8);
    v40 = *((_DWORD *)Entry + 2);
    v14 = v40 & 0xFFFFFFFE;
    if ( ((v40 & 0xFFFFFFFE) == (v42 & 0xFFFFFFFC) || !v14 || v41 && v14 == *(_DWORD *)(v41 + 8))
      && (*((_BYTE *)Entry + 15) & 0x20) == 0 )
    {
      v15 = v39;
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v38);
      v15 = v39;
      if ( !v39 )
        return v6;
      Entry = v38;
      v11 = gpHandleManager;
    }
    if ( Entry )
    {
      if ( *((_BYTE *)Entry + 14) != a2 || *((_WORD *)Entry + 6) != v2 )
      {
LABEL_28:
        v23 = *(_DWORD *)Entry & 0xFFFFFF;
        if ( v23 >= 0x10000 )
        {
          if ( *(_DWORD *)v11 > 0x10000u )
          {
            v36 = *(unsigned __int16 *)Entry;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v36, 1)
                 + 13) == HIWORD(v23) )
              v23 = v36;
          }
          else
          {
            v23 = *(unsigned __int16 *)Entry;
          }
        }
        v24 = *((_QWORD *)v11 + 2);
        v25 = *(_DWORD *)(v24 + 2056);
        if ( v23 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
          goto LABEL_66;
        if ( v23 >= v25 )
        {
          v26 = ((v23 - v25) >> 16) + 1;
          if ( (v23 - v25) >> 16 == -2 )
            goto LABEL_66;
        }
        else
        {
          v26 = 0;
        }
        v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
        if ( v26 )
          v23 = v23 - (v26 << 16) - v25 + 0x10000;
        if ( v23 < *(_DWORD *)(v27 + 20) )
        {
          v28 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                           + 16LL * (unsigned __int8)v23
                           + 8);
LABEL_38:
          v29 = (unsigned __int16)*v28;
          v30 = v29 | (*v28 >> 8) & 0xFF0000u;
          if ( (unsigned int)v30 >= 0x10000 )
          {
            if ( *(_DWORD *)v11 > 0x10000u )
            {
              v37 = (unsigned __int16)v29;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v11 + 2),
                                          (unsigned __int16)v29,
                                          1)
                   + 13) == WORD1(v30) )
                v30 = v37;
            }
            else
            {
              v30 = (unsigned __int16)v29;
            }
            if ( (unsigned int)v30 >= 0x10000 && *(_DWORD *)v11 > 0x10000u )
              GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), (unsigned __int16)v30, 1);
          }
          v31 = *((_QWORD *)v11 + 2);
          v32 = *(_DWORD *)(v31 + 2056);
          if ( (unsigned int)v30 < v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v30 < v32
              || (v3 = (((unsigned int)v30 - v32) >> 16) + 1, ((unsigned int)v30 - v32) >> 16 != -2) )
            {
              v33 = *(_QWORD *)(v31 + 8LL * v3 + 8);
              if ( v3 )
                v30 = (_DWORD)v30 - (v3 << 16) - v32 + 0x10000;
              *(_DWORD *)(*(_QWORD *)v33 + 24 * v30 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)(unsigned int)v30 >> 8))
              + 16LL * (unsigned __int8)v30,
                0LL);
              KeLeaveCriticalRegion();
            }
          }
          KeLeaveCriticalRegion();
          return v6;
        }
LABEL_66:
        v28 = 0LL;
        goto LABEL_38;
      }
      v16 = *(_DWORD *)Entry & 0xFFFFFF;
      if ( v16 >= 0x10000 )
      {
        if ( *(_DWORD *)v11 > 0x10000u )
        {
          v35 = *(unsigned __int16 *)Entry;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v35, 1)
               + 13) == HIWORD(v16) )
            v16 = v35;
        }
        else
        {
          v16 = *(unsigned __int16 *)Entry;
        }
      }
      v17 = *((_QWORD *)v11 + 2);
      v18 = *(_DWORD *)(v17 + 2056);
      if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
      {
        if ( v16 >= v18 )
        {
          v19 = ((v16 - v18) >> 16) + 1;
          if ( (v16 - v18) >> 16 == -2 )
            goto LABEL_22;
        }
        else
        {
          v19 = 0;
        }
        v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
        if ( v19 )
          v16 = v16 - (v19 << 16) - v18 + 0x10000;
        if ( v16 < *(_DWORD *)(v20 + 20) )
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v16 >> 8))
                         + 16LL * (unsigned __int8)v16
                         + 8);
      }
LABEL_22:
      ++*(_DWORD *)(v6 + 8);
      if ( a2 == 5 )
      {
        v21 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 616);
        v22 = 0;
      }
      else
      {
        if ( a2 != 16 )
        {
LABEL_27:
          v11 = gpHandleManager;
          goto LABEL_28;
        }
        v21 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 152);
        v22 = 2;
      }
      TrackObjectReferenceIncrement(v22, v21);
      goto LABEL_27;
    }
  }
  else
  {
    v15 = 0;
    v39 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v15 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v38);
  return v6;
}
