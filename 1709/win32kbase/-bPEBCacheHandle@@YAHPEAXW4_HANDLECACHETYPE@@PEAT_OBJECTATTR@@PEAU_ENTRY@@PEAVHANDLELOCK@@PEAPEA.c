/*
 * XREFs of ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C004ED70
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 * Callees:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C004E0E4 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  _QWORD *CurrentProcessWin32Process; // r13
  unsigned int v9; // edi
  GdiHandleManager *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rcx
  struct OBJECT *v15; // r12
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // r14d
  __int64 v19; // rbx
  int v20; // esi
  unsigned int v21; // r11d
  unsigned int v22; // ecx
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // r9
  unsigned int v26; // edx
  __int64 v27; // rcx
  struct OBJECT *v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 ProcessPeb; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r9
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  unsigned int v36; // edi
  GdiHandleManager *v37; // r14
  __int64 v38; // rcx
  unsigned int v39; // r8d
  unsigned int v40; // edx
  __int64 v41; // rcx
  _DWORD *v42; // rdx
  int v43; // eax
  unsigned int v44; // ebx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  __int64 v48; // r10
  unsigned int v49; // edi
  unsigned int v50; // eax
  int v51; // ecx
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  signed __int32 v55[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v56; // [rsp+20h] [rbp-A8h]
  unsigned int v57; // [rsp+28h] [rbp-A0h]
  unsigned int v58; // [rsp+30h] [rbp-98h]
  int v59; // [rsp+38h] [rbp-90h]
  _DWORD *v60; // [rsp+40h] [rbp-88h]
  _QWORD *v61; // [rsp+48h] [rbp-80h]
  struct OBJECT *v62; // [rsp+50h] [rbp-78h]
  __int64 v63; // [rsp+58h] [rbp-70h]
  __int64 v64; // [rsp+60h] [rbp-68h]
  __int64 v65; // [rsp+68h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+70h] [rbp-58h]
  __int64 v67; // [rsp+78h] [rbp-50h]
  __int64 v68; // [rsp+80h] [rbp-48h]
  __int64 v69; // [rsp+88h] [rbp-40h]
  int v70; // [rsp+D8h] [rbp+10h]

  v70 = a2;
  v56 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1, a2, a3);
  v9 = *a4 & 0xFFFFFF;
  if ( v9 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v53 = *(unsigned __int16 *)a4;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v9,
                                  1)
           + 13) == HIWORD(v9) )
        v9 = v53;
    }
    else
    {
      v9 = *(unsigned __int16 *)a4;
    }
  }
  v10 = gpHandleManager;
  v11 = *((_QWORD *)gpHandleManager + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_91;
  if ( v9 >= v12 )
    v13 = ((v9 - v12) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  v63 = v14;
  if ( v13 )
    v9 += ((1 - v13) << 16) - v12;
  if ( v9 >= *(_DWORD *)(v14 + 20) )
LABEL_91:
    v15 = 0LL;
  else
    v15 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
  v62 = v15;
  v16 = (unsigned __int16)*(_DWORD *)v15;
  v17 = v16 | (*(_DWORD *)v15 >> 8) & 0xFF0000;
  if ( v17 < 0x10000 )
  {
    v18 = v16 | (*(_DWORD *)v15 >> 8) & 0xFF0000;
  }
  else if ( *(_DWORD *)gpHandleManager > 0x10000u )
  {
    v54 = (unsigned __int16)v16;
    v18 = v16 | (*(_DWORD *)v15 >> 8) & 0xFF0000;
    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                (unsigned __int16)v16,
                                1)
         + 13) == HIWORD(v17) )
      v18 = v54;
  }
  else
  {
    v18 = (unsigned __int16)v16;
  }
  if ( v18 < 0x10000 && *(_DWORD *)v10 <= 0x10000u )
  {
    if ( v17 >= 0x10000 )
      v17 = (unsigned __int16)v17;
    v19 = *((_QWORD *)v10 + 2);
    v20 = *(unsigned __int16 *)(v19 + 2) << 16;
    v21 = *(_DWORD *)(v19 + 2056);
    if ( v17 >= v20 + v21 - 0x10000 )
    {
      v25 = 0LL;
    }
    else
    {
      if ( v17 >= v21 )
        v22 = ((v17 - v21) >> 16) + 1;
      else
        v22 = 0;
      v23 = *(_QWORD *)(v19 + 8LL * v22 + 8);
      v64 = v23;
      if ( v22 )
        v24 = v17 + ((1 - v22) << 16) - v21;
      else
        v24 = v17;
      v25 = 0LL;
      if ( v24 < *(_DWORD *)(v23 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8LL * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8) )
      {
        v25 = *(_QWORD *)v23 + 24LL * v24;
      }
    }
    if ( v17 >= v20 + v21 - 0x10000 )
      goto LABEL_99;
    if ( v17 >= v21 )
      v26 = ((v17 - v21) >> 16) + 1;
    else
      v26 = 0;
    v27 = *(_QWORD *)(v19 + 8LL * v26 + 8);
    v65 = v27;
    if ( v26 )
      v17 += ((1 - v26) << 16) - v21;
    if ( v17 >= *(_DWORD *)(v27 + 20) )
LABEL_99:
      v28 = 0LL;
    else
      v28 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8LL * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
    if ( v28 != v15 )
      v25 = 0LL;
    ++*(_BYTE *)(v25 + 13);
    v29 = v18 | (unsigned __int64)(*(unsigned __int16 *)(v25 + 12) << 16);
    *(_QWORD *)v15 = v29;
    *(_QWORD *)v25 = *(_QWORD *)v25 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v29 | (unsigned __int64)(((unsigned int)v29 >> 8) & 0xFF0000);
  }
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v31 = ProcessPeb;
  if ( ProcessPeb )
  {
    v32 = *(_QWORD *)(ProcessPeb + 320);
    v59 = 0;
    if ( !v32 )
    {
      Self = KeGetPcr()->NtTib.Self;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 320), (signed __int64)Self, 0LL) )
      {
        v59 = 1;
        v33 = (unsigned int)gCacheHandleEntries[v70];
        if ( *(_DWORD *)(v31 + 4LL * v70 + 328) < (unsigned int)v33 )
        {
          v34 = (_QWORD *)(v31 + 8 * (*((unsigned int *)&gCacheHandleOffsets + v70) + 43LL));
          v61 = v34;
          v35 = &v34[v33];
          while ( v34 != v35 )
          {
            if ( !*v34 )
            {
              v67 = *(_QWORD *)v15;
              *v34 = v67;
              ++*(_DWORD *)(v31 + 4LL * v70 + 328);
              *a3 &= 0xFFFFFFF5;
              *a3 |= 1u;
              _InterlockedOr(v55, 0);
              v56 = 1;
              v36 = **(_DWORD **)a5 & 0xFFFFFF;
              v57 = v36;
              if ( v36 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v36,
                                              1)
                       + 13) == HIWORD(v36) )
                    v36 = (unsigned __int16)v36;
                }
                else
                {
                  v36 = (unsigned __int16)v36;
                }
              }
              v57 = v36;
              v37 = gpHandleManager;
              v38 = *((_QWORD *)gpHandleManager + 2);
              v39 = *(_DWORD *)(v38 + 2056);
              if ( v36 >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
              {
                v42 = 0LL;
              }
              else
              {
                if ( v36 >= v39 )
                  v40 = ((v36 - v39) >> 16) + 1;
                else
                  v40 = 0;
                v41 = *(_QWORD *)(v38 + 8LL * v40 + 8);
                v68 = v41;
                if ( v40 )
                  v36 += ((1 - v40) << 16) - v39;
                if ( v36 >= *(_DWORD *)(v41 + 20) )
                  v42 = 0LL;
                else
                  v42 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8LL * (v36 >> 8))
                                   + 16LL * (unsigned __int8)v36
                                   + 8);
              }
              v60 = v42;
              v43 = (unsigned __int16)*v42;
              v44 = v43 | (*v42 >> 8) & 0xFF0000;
              if ( v44 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  v49 = (unsigned __int16)v43;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v43,
                                              1)
                       + 13) == HIWORD(v44) )
                    v44 = v49;
                }
                else
                {
                  v44 = (unsigned __int16)v43;
                }
              }
              v58 = v44;
              if ( v44 >= 0x10000 )
              {
                if ( *(_DWORD *)v37 > 0x10000u )
                {
                  v51 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                               *((GdiHandleEntryDirectory **)v37 + 2),
                                               (unsigned __int16)v44,
                                               1)
                        + 13);
                  v50 = v44;
                  if ( v51 == HIWORD(v44) )
                    v50 = (unsigned __int16)v44;
                }
                else
                {
                  v50 = (unsigned __int16)v44;
                }
                v58 = v50;
              }
              else
              {
                v58 = v44;
              }
              v45 = *((_QWORD *)v37 + 2);
              v46 = *(_DWORD *)(v45 + 2056);
              if ( v44 < v46 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
              {
                if ( v44 >= v46 )
                  v47 = ((v44 - v46) >> 16) + 1;
                else
                  v47 = 0;
                v48 = *(_QWORD *)(v45 + 8LL * v47 + 8);
                v69 = v48;
                if ( v47 )
                  v44 += ((1 - v47) << 16) - v46;
                *(_DWORD *)(*(_QWORD *)v48 + 24LL * v44 + 8) &= ~1u;
                ExReleasePushLockExclusiveEx(
                  *(_QWORD *)(**(_QWORD **)(v48 + 24) + 8LL * (v44 >> 8)) + 16LL * (unsigned __int8)v44,
                  0LL);
                KeLeaveCriticalRegion();
              }
              *(_DWORD *)(a5 + 8) = 0;
              *(_QWORD *)a5 = 0LL;
              KeLeaveCriticalRegion();
              if ( a6 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a6 + 12LL));
                *(_QWORD *)a6 = 0LL;
              }
              break;
            }
            v61 = ++v34;
          }
        }
        *(_QWORD *)(v31 + 320) = 0LL;
      }
    }
  }
  if ( !v56 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v15, 0);
  return v56;
}
