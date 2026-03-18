/*
 * XREFs of HmgLockEx @ 0x1C004D1C0
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001EB10 (-vCleanupRegions@@YAXK@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C001EBA0 (GreMakeBitmapNonStock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C008FA40 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCED0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00FCFE0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00FD010 (EngUnlockDriverObj.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgLockEx(struct HOBJ__ *a1, char a2, int a3)
{
  __int16 v5; // ebx^2
  __int64 v6; // rdi
  _DWORD *v7; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // r8
  __int16 v14; // ax
  unsigned int v15; // esi
  GdiHandleManager *v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // r9
  _DWORD *v21; // rdx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // r10
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned __int16 *v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]

  v5 = WORD1(a1);
  v6 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v32, a1, 1, a3, 0);
  if ( v33 )
  {
    v7 = v32;
    if ( *((_BYTE *)v32 + 14) == a2 && v32[6] == v5 && (!a3 || (*((_BYTE *)v32 + 15) & 0x20) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = v32;
      v9 = *(_DWORD *)v32 & 0xFFFFFF;
      if ( v9 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v29 = *v32;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v29,
                                      1)
               + 13) == HIWORD(v9) )
            v9 = v29;
        }
        else
        {
          v9 = *v32;
        }
      }
      v10 = *((_QWORD *)gpHandleManager + 2);
      v11 = *(_DWORD *)(v10 + 2056);
      if ( v9 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
        goto LABEL_46;
      if ( v9 >= v11 )
        v12 = ((v9 - v11) >> 16) + 1;
      else
        v12 = 0;
      v13 = *(_QWORD *)(v10 + 8LL * v12 + 8);
      if ( v12 )
        v9 += ((1 - v12) << 16) - v11;
      if ( v9 >= *(_DWORD *)(v13 + 20) )
LABEL_46:
        v6 = 0LL;
      else
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                       + 16LL * (unsigned __int8)v9
                       + 8);
      v14 = *(_WORD *)(v6 + 12);
      if ( !v14 || *(struct _KTHREAD **)(v6 + 16) == CurrentThread )
      {
        *(_QWORD *)(v6 + 16) = CurrentThread;
        *(_WORD *)(v6 + 12) = v14 + 1;
      }
      else
      {
        v6 = 0LL;
      }
    }
    v15 = *v7 & 0xFFFFFF;
    if ( v15 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v30 = *(unsigned __int16 *)v7;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v30,
                                    1)
             + 13) == HIWORD(v15) )
          v15 = v30;
      }
      else
      {
        v15 = *(unsigned __int16 *)v7;
      }
    }
    v16 = gpHandleManager;
    v17 = *((_QWORD *)gpHandleManager + 2);
    v18 = *(_DWORD *)(v17 + 2056);
    if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
      goto LABEL_51;
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0;
    v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
    if ( v19 )
      v15 += ((1 - v19) << 16) - v18;
    if ( v15 >= *(_DWORD *)(v20 + 20) )
LABEL_51:
      v21 = 0LL;
    else
      v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                       + 16LL * (unsigned __int8)v15
                       + 8);
    v22 = (unsigned __int16)*v21;
    v23 = v22 | (*v21 >> 8) & 0xFF0000u;
    if ( (unsigned int)v23 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v31 = (unsigned __int16)v22;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v22,
                                    1)
             + 13) == WORD1(v23) )
          v23 = v31;
      }
      else
      {
        v23 = (unsigned __int16)v22;
      }
    }
    v24 = *((_QWORD *)v16 + 2);
    v25 = *(_DWORD *)(v24 + 2056);
    if ( (unsigned int)v23 < v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v23 >= v25 )
        v26 = (((unsigned int)v23 - v25) >> 16) + 1;
      else
        v26 = 0;
      v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
      if ( v26 )
        v23 = ((1 - v26) << 16) - v25 + (unsigned int)v23;
      *(_DWORD *)(*(_QWORD *)v27 + 24 * v23 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)(unsigned int)v23 >> 8))
      + 16LL * (unsigned __int8)v23,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v6;
}
