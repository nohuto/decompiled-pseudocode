/*
 * XREFs of HmgShareLock @ 0x1C0032A40
 * Callers:
 *     GreMarkUndeletableDC @ 0x1C0028EA0 (GreMarkUndeletableDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C005A668 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreMarkDCUnreadable @ 0x1C006362C (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C0092250 (GreMarkDeletableDC.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A0AF0 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     bInitICM @ 0x1C01D78AC (bInitICM.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  __int16 v2; // edi^2
  signed int v3; // r15d
  unsigned int v4; // esi
  __int64 v6; // rbp
  GdiHandleManager *v7; // rbx
  int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // edx
  GdiHandleManager *v11; // rsi
  unsigned int v12; // eax
  struct _ENTRY *Entry; // r14
  bool v14; // zf
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  signed int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rcx
  unsigned int v22; // r8d
  signed int v23; // edx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // r10
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // edi
  struct _ENTRY *v37; // [rsp+20h] [rbp-48h] BYREF
  int v38; // [rsp+28h] [rbp-40h]
  int v39; // [rsp+2Ch] [rbp-3Ch]
  char v40; // [rsp+70h] [rbp+8h] BYREF

  v2 = HIWORD(a1);
  v3 = 0;
  v37 = 0LL;
  v4 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v40);
  v7 = gpHandleManager;
  v8 = 1;
  v38 = 1;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, v4);
  if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v7 + 2), v9, 0) )
  {
    v10 = v4;
    v11 = gpHandleManager;
    v12 = GdiHandleManager::DecodeIndex(gpHandleManager, v10);
    Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v12, 0);
    v37 = Entry;
    _m_prefetchw((char *)Entry + 8);
    v14 = (*((_BYTE *)Entry + 15) & 0x20) == 0;
    v39 = *((_DWORD *)Entry + 2);
    if ( !v14 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
      v8 = v38;
      if ( !v38 )
        return v6;
      Entry = v37;
      v11 = gpHandleManager;
    }
    if ( Entry )
    {
      if ( *((_BYTE *)Entry + 14) != a2 || *((_WORD *)Entry + 6) != v2 )
      {
LABEL_19:
        v20 = *(_DWORD *)Entry & 0xFFFFFF;
        if ( v20 >= 0x10000 )
        {
          if ( *(_DWORD *)v11 > 0x10000u )
          {
            v35 = *(unsigned __int16 *)Entry;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v35, 1)
                 + 13) == HIWORD(v20) )
              v20 = v35;
          }
          else
          {
            v20 = *(unsigned __int16 *)Entry;
          }
        }
        v21 = *((_QWORD *)v11 + 2);
        v22 = *(_DWORD *)(v21 + 2056);
        if ( v20 >= v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
          goto LABEL_57;
        if ( v20 >= v22 )
        {
          v23 = ((v20 - v22) >> 16) + 1;
          if ( (v20 - v22) >> 16 == -2 )
            goto LABEL_57;
        }
        else
        {
          v23 = 0;
        }
        v24 = *(_QWORD *)(v21 + 8LL * v23 + 8);
        if ( v23 )
          v20 = v20 - (v23 << 16) - v22 + 0x10000;
        if ( v20 < *(_DWORD *)(v24 + 20) )
        {
          v25 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                           + 16LL * (unsigned __int8)v20
                           + 8);
LABEL_29:
          v26 = (unsigned __int16)*v25;
          v27 = v26 | (*v25 >> 8) & 0xFF0000u;
          if ( (unsigned int)v27 >= 0x10000 )
          {
            if ( *(_DWORD *)v11 > 0x10000u )
            {
              v36 = (unsigned __int16)v26;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v11 + 2),
                                          (unsigned __int16)v26,
                                          1)
                   + 13) == WORD1(v27) )
                v27 = v36;
            }
            else
            {
              v27 = (unsigned __int16)v26;
            }
            if ( (unsigned int)v27 >= 0x10000 && *(_DWORD *)v11 > 0x10000u )
              GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), (unsigned __int16)v27, 1);
          }
          v28 = *((_QWORD *)v11 + 2);
          v29 = *(_DWORD *)(v28 + 2056);
          if ( (unsigned int)v27 < v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v27 < v29
              || (v3 = (((unsigned int)v27 - v29) >> 16) + 1, ((unsigned int)v27 - v29) >> 16 != -2) )
            {
              v30 = *(_QWORD *)(v28 + 8LL * v3 + 8);
              if ( v3 )
                v27 = (_DWORD)v27 - (v3 << 16) - v29 + 0x10000;
              *(_DWORD *)(*(_QWORD *)v30 + 24 * v27 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)(unsigned int)v27 >> 8))
              + 16LL * (unsigned __int8)v27,
                0LL);
              KeLeaveCriticalRegion();
            }
          }
          KeLeaveCriticalRegion();
          return v6;
        }
LABEL_57:
        v25 = 0LL;
        goto LABEL_29;
      }
      v15 = *(_DWORD *)Entry & 0xFFFFFF;
      if ( v15 >= 0x10000 )
      {
        if ( *(_DWORD *)v11 > 0x10000u )
        {
          v34 = *(unsigned __int16 *)Entry;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v34, 1)
               + 13) == HIWORD(v15) )
            v15 = v34;
        }
        else
        {
          v15 = *(unsigned __int16 *)Entry;
        }
      }
      v16 = *((_QWORD *)v11 + 2);
      v17 = *(_DWORD *)(v16 + 2056);
      if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      {
        if ( v15 >= v17 )
        {
          v18 = ((v15 - v17) >> 16) + 1;
          if ( (v15 - v17) >> 16 == -2 )
            goto LABEL_16;
        }
        else
        {
          v18 = 0;
        }
        v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
        if ( v18 )
          v15 = v15 - (v18 << 16) - v17 + 0x10000;
        if ( v15 < *(_DWORD *)(v19 + 20) )
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                         + 16LL * (unsigned __int8)v15
                         + 8);
      }
LABEL_16:
      ++*(_DWORD *)(v6 + 8);
      if ( a2 == 5 )
      {
        v32 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 616);
        v33 = 0;
      }
      else
      {
        if ( a2 != 16 )
        {
LABEL_18:
          v11 = gpHandleManager;
          goto LABEL_19;
        }
        v32 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 152);
        v33 = 2;
      }
      TrackObjectReferenceIncrement(v33, v32);
      goto LABEL_18;
    }
  }
  else
  {
    v8 = 0;
    v38 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
  return v6;
}
