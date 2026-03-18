/*
 * XREFs of GreGetBounds @ 0x1C0035DB0
 * Callers:
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

_BOOL8 __fastcall GreGetBounds(unsigned int a1, __m128i *a2, char a3)
{
  signed int v4; // r14d
  __int16 v6; // ebx^2
  __int64 v7; // rsi
  _DWORD *v8; // rdi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  signed int v14; // ecx
  __int64 v15; // rax
  GdiHandleEntryDirectory **v16; // r15
  unsigned int v17; // edi
  GdiHandleEntryDirectory *v18; // rcx
  unsigned int v19; // r8d
  signed int v20; // edx
  __int64 v21; // rax
  _DWORD *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // edi
  GdiHandleEntryDirectory *v25; // rcx
  unsigned int v26; // r8d
  signed int v27; // edx
  __int64 v28; // r10
  __int64 v29; // rax
  __m128i v30; // xmm0
  int v31; // edx
  int v32; // r8d
  int v33; // ecx
  __int64 v34; // r10
  int v35; // eax
  __int32 v36; // edx
  __int32 v37; // r8d
  _BOOL8 result; // rax
  __int64 v39; // rdi
  GdiHandleManager *v40; // r15
  unsigned int v41; // esi
  __int64 v42; // rbx
  unsigned int v43; // edx
  signed int v44; // ecx
  __int64 v45; // rbx
  char v46; // r12
  __int64 v47; // r13
  GdiHandleManager *v48; // rsi
  __int64 v49; // r9
  unsigned int v50; // edx
  signed int v51; // ecx
  __int64 v52; // r9
  unsigned __int16 *v53; // rbx
  int v54; // edi
  __int64 v55; // rdi
  char v56; // al
  GdiHandleManager *v57; // rsi
  unsigned int v58; // edi
  __int64 v59; // rcx
  unsigned int v60; // r8d
  signed int v61; // edx
  __int64 v62; // rax
  _DWORD *v63; // rdx
  int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rcx
  unsigned int v67; // edx
  __int64 v68; // r10
  unsigned int v69; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v70; // rdx
  unsigned int v71; // ecx
  unsigned int v72; // ebx
  unsigned int v73; // edi
  __m128i v74; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v75[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v76; // [rsp+40h] [rbp-20h] BYREF
  int v77; // [rsp+48h] [rbp-18h]
  int v78; // [rsp+4Ch] [rbp-14h]
  BOOL v79; // [rsp+A0h] [rbp+40h]

  v4 = 0;
  v75[1] = 0LL;
  v6 = HIWORD(a1);
  v76 = 0LL;
  v77 = 0;
  v7 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v76, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( v77 )
  {
    v8 = v76;
    if ( v76 )
    {
      if ( *((_BYTE *)v76 + 14) != 1 || v76[6] != v6 )
      {
LABEL_13:
        v16 = (GdiHandleEntryDirectory **)gpHandleManager;
        v17 = *v8 & 0xFFFFFF;
        if ( v17 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v17,
                                        1)
                 + 13) == HIWORD(v17) )
              v17 = (unsigned __int16)v17;
          }
          else
          {
            v17 = (unsigned __int16)v17;
          }
        }
        v18 = v16[2];
        v19 = *((_DWORD *)v18 + 514);
        if ( v17 >= v19 + ((*((unsigned __int16 *)v18 + 1) + 0xFFFF) << 16) )
          goto LABEL_119;
        if ( v17 >= v19 )
        {
          v20 = ((v17 - v19) >> 16) + 1;
          if ( (v17 - v19) >> 16 == -2 )
            goto LABEL_119;
        }
        else
        {
          v20 = 0;
        }
        v21 = *((_QWORD *)v18 + v20 + 1);
        if ( v20 )
          v17 = v17 - (v20 << 16) - v19 + 0x10000;
        if ( v17 < *(_DWORD *)(v21 + 20) )
        {
          v22 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                           + 16LL * (unsigned __int8)v17
                           + 8);
LABEL_23:
          v23 = GdiHandleManager::DecodeIndex(v16, (unsigned __int16)*v22 | (*v22 >> 8) & 0xFF0000u);
          v24 = v23;
          if ( v23 >= 0x10000 && *(_DWORD *)v16 > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(v16[2], (unsigned __int16)v23, 1);
          v25 = v16[2];
          v26 = *((_DWORD *)v25 + 514);
          if ( v24 >= v26 + ((*((unsigned __int16 *)v25 + 1) + 0xFFFF) << 16) )
            goto LABEL_30;
          if ( v24 >= v26 )
          {
            v27 = ((v24 - v26) >> 16) + 1;
            if ( (v24 - v26) >> 16 == -2 )
            {
LABEL_30:
              KeLeaveCriticalRegion();
              goto LABEL_31;
            }
          }
          else
          {
            v27 = 0;
          }
          v28 = *((_QWORD *)v25 + v27 + 1);
          if ( v27 )
            v24 = v24 - (v27 << 16) - v26 + 0x10000;
          *(_DWORD *)(*(_QWORD *)v28 + 24LL * v24 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v24 >> 8)) + 16LL * (unsigned __int8)v24,
            0LL);
          KeLeaveCriticalRegion();
          goto LABEL_30;
        }
LABEL_119:
        v22 = 0LL;
        goto LABEL_23;
      }
      v9 = gpHandleManager;
      v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v76 & 0xFFFFFF);
      v11 = *((_QWORD *)v9 + 2);
      v12 = v10;
      v13 = *(_DWORD *)(v11 + 2056);
      if ( v10 < v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      {
        if ( v10 < v13 )
        {
          v14 = 0;
LABEL_8:
          v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
          if ( v14 )
            v12 = (_DWORD)v12 - (v14 << 16) - v13 + 0x10000;
          if ( (unsigned int)v12 < *(_DWORD *)(v15 + 20) )
            v7 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
          goto LABEL_12;
        }
        v14 = ((v10 - v13) >> 16) + 1;
        if ( (v10 - v13) >> 16 != -2 )
          goto LABEL_8;
      }
LABEL_12:
      ++*(_DWORD *)(v7 + 8);
      goto LABEL_13;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v76);
  }
LABEL_31:
  v75[0] = v7;
  if ( !v7 )
  {
LABEL_101:
    v33 = 1;
    goto LABEL_48;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(v7 + 36) |= 0x40u;
    else
      *(_DWORD *)(v7 + 36) |= 0x20u;
  }
  else if ( (a3 & 2) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(v7 + 36) &= ~0x40u;
    else
      *(_DWORD *)(v7 + 36) &= ~0x20u;
  }
  if ( (a3 & 4) == 0 )
  {
    v30 = *(__m128i *)(v7 + 1480);
    goto LABEL_37;
  }
  v29 = *(_QWORD *)(v7 + 1584);
  if ( !v29
    || (a3 & 3) != 0
    || (v74 = *(__m128i *)(v29 + 88),
        v31 = _mm_cvtsi128_si32(v74),
        v32 = _mm_cvtsi128_si32(_mm_srli_si128(v74, 8)),
        v74.m128i_i32[0] = v31,
        v74.m128i_i32[2] = v32,
        v31 == v32)
    || v74.m128i_i32[1] == v74.m128i_i32[3] )
  {
    v30 = *(__m128i *)(v7 + 1496);
LABEL_37:
    v74 = v30;
    v31 = v30.m128i_i32[0];
    v32 = v30.m128i_i32[2];
  }
  if ( v31 == v32 || v31 >= v32 || v74.m128i_i32[1] == v74.m128i_i32[3] || v74.m128i_i32[1] >= v74.m128i_i32[3] )
    goto LABEL_101;
  v33 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
      v34 = 1440LL;
    else
      v34 = 1432LL;
    v35 = *(_DWORD *)(v34 + v7 + 4);
    v36 = *(_DWORD *)(v34 + v7) + v31;
    v37 = *(_DWORD *)(v34 + v7) + v32;
    v74.m128i_i32[1] += v35;
    v74.m128i_i32[3] += v35;
    v74.m128i_i32[0] = v36;
    v74.m128i_i32[2] = v37;
    *a2 = v74;
  }
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)(v7 + 1496) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 1500) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 1504) = 0x80000000;
    *(_DWORD *)(v7 + 1508) = 0x80000000;
  }
  else
  {
    *(_DWORD *)(v7 + 1480) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 1484) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 1488) = 0x80000000;
    *(_DWORD *)(v7 + 1492) = 0x80000000;
  }
LABEL_48:
  result = v33 == 0;
  v79 = v33 == 0;
  if ( !v7 )
    return result;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v75);
  v76 = 0LL;
  v39 = (unsigned __int16)*(_DWORD *)v75[0] | (*(_DWORD *)v75[0] >> 8) & 0xFF0000u;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v74);
  v40 = gpHandleManager;
  v41 = v39;
  v77 = 1;
  if ( (unsigned int)v39 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v39,
                                  1)
           + 13) == WORD1(v39) )
        v41 = (unsigned __int16)v39;
    }
    else
    {
      v41 = (unsigned __int16)v39;
    }
  }
  v42 = *((_QWORD *)v40 + 2);
  v43 = *(_DWORD *)(v42 + 2056);
  if ( v41 >= v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
    goto LABEL_131;
  if ( v41 >= v43 )
  {
    v44 = ((v41 - v43) >> 16) + 1;
    if ( (v41 - v43) >> 16 == -2 )
    {
LABEL_131:
      v54 = 0;
      v77 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_132;
    }
  }
  else
  {
    v44 = 0;
  }
  v45 = *(_QWORD *)(v42 + 8LL * v44 + 8);
  if ( v44 )
    v41 = v41 - (v44 << 16) - v43 + 0x10000;
  v46 = 0;
  if ( v41 >= *(_DWORD *)(v45 + 20) )
    goto LABEL_131;
  v47 = *(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v41 >> 8)) + 16LL * (unsigned __int8)v41;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v47, 0LL);
  if ( v41 < *(_DWORD *)(v45 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                 + 16LL * (unsigned __int8)v41
                 + 8) )
  {
    v46 = 1;
    *(_DWORD *)(*(_QWORD *)v45 + 24LL * v41 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v47, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v46 )
    goto LABEL_131;
  v48 = gpHandleManager;
  if ( (unsigned int)v39 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v39,
                                  1)
           + 13) == WORD1(v39) )
        v39 = (unsigned __int16)v39;
    }
    else
    {
      v39 = (unsigned __int16)v39;
    }
  }
  v49 = *((_QWORD *)v48 + 2);
  v50 = *(_DWORD *)(v49 + 2056);
  if ( (unsigned int)v39 >= v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
    goto LABEL_139;
  if ( (unsigned int)v39 >= v50 )
  {
    v51 = (((unsigned int)v39 - v50) >> 16) + 1;
    if ( ((unsigned int)v39 - v50) >> 16 != -2 )
      goto LABEL_68;
LABEL_139:
    v53 = 0LL;
    goto LABEL_73;
  }
  v51 = 0;
LABEL_68:
  v52 = *(_QWORD *)(v49 + 8LL * v51 + 8);
  if ( v51 )
    v39 = (_DWORD)v39 - (v51 << 16) - v50 + 0x10000;
  v53 = 0LL;
  if ( (unsigned int)v39 < *(_DWORD *)(v52 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v52 + 24) + 8 * ((unsigned __int64)(unsigned int)v39 >> 8))
                 + 16LL * (unsigned __int8)v39
                 + 8) )
  {
    v53 = (unsigned __int16 *)(*(_QWORD *)v52 + 24 * v39);
  }
LABEL_73:
  v76 = v53;
  _m_prefetchw(v53 + 4);
  v78 = *((_DWORD *)v53 + 2);
  if ( (*((_BYTE *)v53 + 15) & 0x20) == 0 )
  {
    v54 = 1;
    goto LABEL_75;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v76);
  v54 = v77;
  if ( v77 )
  {
    v53 = v76;
LABEL_75:
    if ( v53 )
    {
      v55 = v75[0];
      if ( *((_BYTE *)v53 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v69 = (unsigned __int16)*(_DWORD *)v75[0] | (*(_DWORD *)v75[0] >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v69 | (v69 >> 8) & 0xFF0000);
      }
      v56 = *((_BYTE *)v53 + 14);
      if ( v56 == 5 )
      {
        v70 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v55 + 616);
        v71 = 0;
      }
      else
      {
        if ( v56 != 16 )
          goto LABEL_79;
        v70 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v55 + 152);
        v71 = 2;
      }
      TrackObjectReferenceDecrement(v71, v70);
LABEL_79:
      --*(_DWORD *)(v55 + 8);
      v57 = gpHandleManager;
      v58 = *(_DWORD *)v53 & 0xFFFFFF;
      if ( v58 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v72 = *v53;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v58,
                                      1)
               + 13) == HIWORD(v58) )
            v58 = v72;
        }
        else
        {
          v58 = *v53;
        }
      }
      v59 = *((_QWORD *)v57 + 2);
      v60 = *(_DWORD *)(v59 + 2056);
      if ( v58 >= v60 + ((*(unsigned __int16 *)(v59 + 2) + 0xFFFF) << 16) )
        goto LABEL_152;
      if ( v58 >= v60 )
      {
        v61 = ((v58 - v60) >> 16) + 1;
        if ( (v58 - v60) >> 16 == -2 )
          goto LABEL_152;
      }
      else
      {
        v61 = 0;
      }
      v62 = *(_QWORD *)(v59 + 8LL * v61 + 8);
      if ( v61 )
        v58 = v58 - (v61 << 16) - v60 + 0x10000;
      if ( v58 < *(_DWORD *)(v62 + 20) )
      {
        v63 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * ((unsigned __int64)v58 >> 8))
                         + 16LL * (unsigned __int8)v58
                         + 8);
LABEL_89:
        v64 = (unsigned __int16)*v63;
        v65 = v64 | (*v63 >> 8) & 0xFF0000u;
        if ( (unsigned int)v65 >= 0x10000 )
        {
          if ( *(_DWORD *)v57 > 0x10000u )
          {
            v73 = (unsigned __int16)v64;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v57 + 2),
                                        (unsigned __int16)v64,
                                        1)
                 + 13) == WORD1(v65) )
              v65 = v73;
          }
          else
          {
            v65 = (unsigned __int16)v64;
          }
          if ( (unsigned int)v65 >= 0x10000 && *(_DWORD *)v57 > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v57 + 2), (unsigned __int16)v65, 1);
        }
        v66 = *((_QWORD *)v57 + 2);
        v67 = *(_DWORD *)(v66 + 2056);
        if ( (unsigned int)v65 < v67 + ((*(unsigned __int16 *)(v66 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v65 < v67
            || (v4 = (((unsigned int)v65 - v67) >> 16) + 1, ((unsigned int)v65 - v67) >> 16 != -2) )
          {
            v68 = *(_QWORD *)(v66 + 8LL * v4 + 8);
            if ( v4 )
              v65 = (_DWORD)v65 - (v4 << 16) - v67 + 0x10000;
            *(_DWORD *)(*(_QWORD *)v68 + 24 * v65 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v68 + 24) + 8 * ((unsigned __int64)(unsigned int)v65 >> 8))
            + 16LL * (unsigned __int8)v65,
              0LL);
            KeLeaveCriticalRegion();
          }
        }
        KeLeaveCriticalRegion();
        return v79;
      }
LABEL_152:
      v63 = 0LL;
      goto LABEL_89;
    }
LABEL_132:
    if ( v54 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v76);
  }
  return v79;
}
