/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0
 * Callers:
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C00838F0 (EngAssociateSurface.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE014 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(unsigned int a1, char a2)
{
  signed int v3; // r12d
  unsigned int v4; // edi
  __int64 v6; // r15
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rax
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  GdiHandleManager *v11; // rsi
  unsigned int v12; // eax
  struct _ENTRY *Entry; // r14
  unsigned int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // r8d
  signed int v19; // edx
  __int64 v20; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v21; // rdx
  unsigned int v22; // edi
  __int64 v23; // rcx
  unsigned int v24; // r8d
  signed int v25; // edx
  __int64 v26; // rax
  _DWORD *v27; // rdx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r10
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // edi
  struct _ENTRY *v37; // [rsp+20h] [rbp-58h] BYREF
  int v38; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+2Ch] [rbp-4Ch]
  __int64 v40; // [rsp+80h] [rbp+8h]
  int v41; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  v37 = 0LL;
  v4 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v41);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v40 = *(_QWORD *)(v8 + 72);
  else
    v40 = 0LL;
  v9 = gpHandleManager;
  v38 = 1;
  v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v4);
  if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v9 + 2), v10, 0) )
  {
    v11 = gpHandleManager;
    v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v4);
    Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v12, 0);
    v37 = Entry;
    _m_prefetchw((char *)Entry + 8);
    v39 = *((_DWORD *)Entry + 2);
    v14 = v39 & 0xFFFFFFFE;
    if ( ((v39 & 0xFFFFFFFE) == (v41 & 0xFFFFFFFC) || !v14 || v40 && v14 == *(_DWORD *)(v40 + 8))
      && (*((_BYTE *)Entry + 15) & 0x20) == 0 )
    {
      v15 = v38;
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
      v15 = v38;
      if ( !v38 )
        return v6;
      Entry = v37;
      v11 = gpHandleManager;
    }
    if ( Entry )
    {
      if ( *((_BYTE *)Entry + 14) != a2 || ((*((unsigned __int16 *)Entry + 6) ^ HIWORD(a1)) & 0xFFFFFF7F) != 0 )
        goto LABEL_25;
      v16 = *(_DWORD *)Entry & 0xFFFFFF;
      if ( v16 >= 0x10000 )
      {
        if ( *(_DWORD *)v11 > 0x10000u )
        {
          v34 = *(unsigned __int16 *)Entry;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v34, 1)
               + 13) == HIWORD(v16) )
            v16 = v34;
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
        if ( v16 < v18 )
        {
          v19 = 0;
LABEL_18:
          v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
          if ( v19 )
            v16 = v16 - (v19 << 16) - v18 + 0x10000;
          if ( v16 < *(_DWORD *)(v20 + 20) )
            v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v16 >> 8))
                           + 16LL * (unsigned __int8)v16
                           + 8);
          goto LABEL_22;
        }
        v19 = ((v16 - v18) >> 16) + 1;
        if ( (v16 - v18) >> 16 != -2 )
          goto LABEL_18;
      }
LABEL_22:
      ++*(_DWORD *)(v6 + 8);
      if ( a2 == 5 )
      {
        v21 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 616);
        if ( v21 && qword_1C0189408 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C0189408,
            v21,
            1);
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(
          2u,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 152));
      }
      v11 = gpHandleManager;
LABEL_25:
      v22 = *(_DWORD *)Entry & 0xFFFFFF;
      if ( v22 >= 0x10000 )
      {
        if ( *(_DWORD *)v11 > 0x10000u )
        {
          v35 = *(unsigned __int16 *)Entry;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), v35, 1)
               + 13) == HIWORD(v22) )
            v22 = v35;
        }
        else
        {
          v22 = *(unsigned __int16 *)Entry;
        }
      }
      v23 = *((_QWORD *)v11 + 2);
      v24 = *(_DWORD *)(v23 + 2056);
      if ( v22 >= v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
        goto LABEL_67;
      if ( v22 >= v24 )
      {
        v25 = ((v22 - v24) >> 16) + 1;
        if ( (v22 - v24) >> 16 == -2 )
          goto LABEL_67;
      }
      else
      {
        v25 = 0;
      }
      v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
      if ( v25 )
        v22 = v22 - (v25 << 16) - v24 + 0x10000;
      if ( v22 < *(_DWORD *)(v26 + 20) )
      {
        v27 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v22 >> 8))
                         + 16LL * (unsigned __int8)v22
                         + 8);
LABEL_35:
        v28 = (unsigned __int16)*v27;
        v29 = v28 | (*v27 >> 8) & 0xFF0000u;
        if ( (unsigned int)v29 >= 0x10000 )
        {
          if ( *(_DWORD *)v11 > 0x10000u )
          {
            v36 = (unsigned __int16)v28;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v11 + 2),
                                        (unsigned __int16)v28,
                                        1)
                 + 13) == WORD1(v29) )
              v29 = v36;
          }
          else
          {
            v29 = (unsigned __int16)v28;
          }
          if ( (unsigned int)v29 >= 0x10000 && *(_DWORD *)v11 > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), (unsigned __int16)v29, 1);
        }
        v30 = *((_QWORD *)v11 + 2);
        v31 = *(_DWORD *)(v30 + 2056);
        if ( (unsigned int)v29 < v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v29 < v31
            || (v3 = (((unsigned int)v29 - v31) >> 16) + 1, ((unsigned int)v29 - v31) >> 16 != -2) )
          {
            v32 = *(_QWORD *)(v30 + 8LL * v3 + 8);
            if ( v3 )
              v29 = (_DWORD)v29 - (v3 << 16) - v31 + 0x10000;
            *(_DWORD *)(*(_QWORD *)v32 + 24 * v29 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)(unsigned int)v29 >> 8))
            + 16LL * (unsigned __int8)v29,
              0LL);
            KeLeaveCriticalRegion();
          }
        }
        KeLeaveCriticalRegion();
        return v6;
      }
LABEL_67:
      v27 = 0LL;
      goto LABEL_35;
    }
  }
  else
  {
    v15 = 0;
    v38 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v15 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
  return v6;
}
