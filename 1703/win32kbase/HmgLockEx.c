/*
 * XREFs of HmgLockEx @ 0x1C00325B0
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C0078230 (GreMakeBitmapNonStock.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0080354 (-vCleanupRegions@@YAXK@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0089028 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCA60 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00FCB70 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00FCBA0 (EngUnlockDriverObj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgLockEx(unsigned int a1, char a2, int a3)
{
  __int16 v3; // r12d^2
  signed int v4; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  GdiHandleManager *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // rdi
  char v15; // r13
  GdiHandleManager *v16; // r14
  unsigned int v17; // eax
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  signed int v21; // edx
  __int64 v22; // r9
  unsigned __int16 *v23; // r15
  int v24; // eax
  unsigned int v25; // eax
  int v26; // edi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v29; // edi
  __int64 v30; // rcx
  unsigned int v31; // r8d
  signed int v32; // edx
  __int64 v33; // rax
  __int16 v34; // ax
  unsigned int v35; // edi
  __int64 v36; // rcx
  unsigned int v37; // r8d
  signed int v38; // edx
  __int64 v39; // rax
  _DWORD *v40; // rdx
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rcx
  unsigned int v44; // edx
  __int64 v45; // r10
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  int v49; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 *v50; // [rsp+28h] [rbp-60h] BYREF
  int v51; // [rsp+30h] [rbp-58h]
  int v52; // [rsp+34h] [rbp-54h]
  __int64 v53; // [rsp+90h] [rbp+8h]
  __int64 v56; // [rsp+A8h] [rbp+20h]

  v3 = HIWORD(a1);
  v4 = 0;
  v50 = 0LL;
  v5 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v49);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v56 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  else
    v56 = 0LL;
  v8 = gpHandleManager;
  v51 = 1;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_33;
  if ( v9 < v12 )
  {
    v13 = 0;
    goto LABEL_7;
  }
  v13 = ((v9 - v12) >> 16) + 1;
  if ( (v9 - v12) >> 16 == -2 )
  {
LABEL_33:
    v26 = 0;
    v51 = 0;
    KeLeaveCriticalRegion();
LABEL_27:
    if ( v26 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v50);
    return v6;
  }
LABEL_7:
  v14 = *(_QWORD *)(v10 + 8LL * v13 + 8);
  if ( v13 )
    v11 = v9 - (v13 << 16) - v12 + 0x10000;
  v15 = 0;
  if ( v11 >= *(_DWORD *)(v14 + 20) )
    goto LABEL_33;
  v53 = *(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v11 >> 8)) + 16LL * (unsigned __int8)v11;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v53, 0LL);
  if ( v11 < *(_DWORD *)(v14 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                 + 16LL * (unsigned __int8)v11
                 + 8) )
  {
    v15 = 1;
    *(_DWORD *)(*(_QWORD *)v14 + 24LL * v11 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v53, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v15 )
    goto LABEL_33;
  v16 = gpHandleManager;
  v17 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
  v18 = *((_QWORD *)v16 + 2);
  v19 = v17;
  v20 = *(_DWORD *)(v18 + 2056);
  if ( v17 >= v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    goto LABEL_75;
  if ( v17 >= v20 )
  {
    v21 = ((v17 - v20) >> 16) + 1;
    if ( (v17 - v20) >> 16 != -2 )
      goto LABEL_17;
LABEL_75:
    v23 = 0LL;
    goto LABEL_22;
  }
  v21 = 0;
LABEL_17:
  v22 = *(_QWORD *)(v18 + 8LL * v21 + 8);
  if ( v21 )
    v19 = v17 - (v21 << 16) - v20 + 0x10000;
  v23 = 0LL;
  if ( v19 < *(_DWORD *)(v22 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                 + 16LL * (unsigned __int8)v19
                 + 8) )
  {
    v23 = (unsigned __int16 *)(*(_QWORD *)v22 + 24LL * v19);
  }
LABEL_22:
  v50 = v23;
  _m_prefetchw(v23 + 4);
  v24 = *((_DWORD *)v23 + 2);
  v52 = v24;
  if ( a3
    || ((v25 = v24 & 0xFFFFFFFE, v25 == (v49 & 0xFFFFFFFC)) || !v25 || v56 && v25 == *(_DWORD *)(v56 + 8))
    && (*((_BYTE *)v23 + 15) & 0x20) == 0 )
  {
    v26 = v51;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v50);
    v26 = v51;
    if ( !v51 )
      return v6;
    v23 = v50;
    v16 = gpHandleManager;
  }
  if ( !v23 )
    goto LABEL_27;
  if ( *((_BYTE *)v23 + 14) == a2 && v23[6] == v3 && (!a3 || (*((_BYTE *)v23 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = v50;
    v16 = gpHandleManager;
    v29 = *(_DWORD *)v50 & 0xFFFFFF;
    if ( v29 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v46 = *v50;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v46,
                                    1)
             + 13) == HIWORD(v29) )
          v29 = v46;
      }
      else
      {
        v29 = *v50;
      }
    }
    v30 = *((_QWORD *)v16 + 2);
    v31 = *(_DWORD *)(v30 + 2056);
    if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
      goto LABEL_47;
    if ( v29 >= v31 )
    {
      v32 = ((v29 - v31) >> 16) + 1;
      if ( (v29 - v31) >> 16 == -2 )
      {
LABEL_47:
        v34 = *(_WORD *)(v6 + 12);
        if ( !v34 || *(struct _KTHREAD **)(v6 + 16) == CurrentThread )
        {
          *(_QWORD *)(v6 + 16) = CurrentThread;
          *(_WORD *)(v6 + 12) = v34 + 1;
          v16 = gpHandleManager;
        }
        else
        {
          v6 = 0LL;
        }
        goto LABEL_49;
      }
    }
    else
    {
      v32 = 0;
    }
    v33 = *(_QWORD *)(v30 + 8LL * v32 + 8);
    if ( v32 )
      v29 = v29 - (v32 << 16) - v31 + 0x10000;
    if ( v29 < *(_DWORD *)(v33 + 20) )
      v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                     + 16LL * (unsigned __int8)v29
                     + 8);
    goto LABEL_47;
  }
LABEL_49:
  v35 = *(_DWORD *)v23 & 0xFFFFFF;
  if ( v35 >= 0x10000 )
  {
    if ( *(_DWORD *)v16 > 0x10000u )
    {
      v47 = *v23;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v16 + 2), v47, 1) + 13) == HIWORD(v35) )
        v35 = v47;
    }
    else
    {
      v35 = *v23;
    }
  }
  v36 = *((_QWORD *)v16 + 2);
  v37 = *(_DWORD *)(v36 + 2056);
  if ( v35 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
    goto LABEL_91;
  if ( v35 >= v37 )
  {
    v38 = ((v35 - v37) >> 16) + 1;
    if ( (v35 - v37) >> 16 == -2 )
    {
LABEL_91:
      v40 = 0LL;
      goto LABEL_59;
    }
  }
  else
  {
    v38 = 0;
  }
  v39 = *(_QWORD *)(v36 + 8LL * v38 + 8);
  if ( v38 )
    v35 = v35 - (v38 << 16) - v37 + 0x10000;
  if ( v35 >= *(_DWORD *)(v39 + 20) )
    goto LABEL_91;
  v40 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                   + 16LL * (unsigned __int8)v35
                   + 8);
LABEL_59:
  v41 = (unsigned __int16)*v40;
  v42 = v41 | (*v40 >> 8) & 0xFF0000u;
  if ( (unsigned int)v42 >= 0x10000 )
  {
    if ( *(_DWORD *)v16 > 0x10000u )
    {
      v48 = (unsigned __int16)v41;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v16 + 2),
                                  (unsigned __int16)v41,
                                  1)
           + 13) == WORD1(v42) )
        v42 = v48;
    }
    else
    {
      v42 = (unsigned __int16)v41;
    }
    if ( (unsigned int)v42 >= 0x10000 && *(_DWORD *)v16 > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v16 + 2), (unsigned __int16)v42, 1);
  }
  v43 = *((_QWORD *)v16 + 2);
  v44 = *(_DWORD *)(v43 + 2056);
  if ( (unsigned int)v42 < v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v42 < v44 || (v4 = (((unsigned int)v42 - v44) >> 16) + 1, ((unsigned int)v42 - v44) >> 16 != -2) )
    {
      v45 = *(_QWORD *)(v43 + 8LL * v4 + 8);
      if ( v4 )
        v42 = (_DWORD)v42 - (v4 << 16) - v44 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v45 + 24 * v42 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)(unsigned int)v42 >> 8))
      + 16LL * (unsigned __int8)v42,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
  return v6;
}
