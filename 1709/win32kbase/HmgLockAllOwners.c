/*
 * XREFs of HmgLockAllOwners @ 0x1C00738F0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgLockAllOwners(struct HOBJ__ *a1, char a2)
{
  __int16 v3; // esi^2
  __int64 v4; // rbx
  _DWORD *v5; // rax
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int16 v13; // cx
  GdiHandleManager *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // r9
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // r10
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // r10
  __int64 v29; // [rsp+30h] [rbp-28h] BYREF
  int v30; // [rsp+38h] [rbp-20h]

  v3 = WORD1(a1);
  v4 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v29, a1, 0, 0, 0);
  if ( v30 )
  {
    v5 = (_DWORD *)v29;
    if ( *(_BYTE *)(v29 + 14) == a2 && *(_WORD *)(v29 + 12) == v3 )
    {
      v6 = gpHandleManager;
      v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v29 & 0xFFFFFF);
      v8 = *((_QWORD *)v6 + 2);
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 2056);
      if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        goto LABEL_30;
      if ( v7 >= v10 )
        v11 = ((v7 - v10) >> 16) + 1;
      else
        v11 = 0;
      v12 = *(_QWORD *)(v8 + 8LL * v11 + 8);
      if ( v11 )
        v9 = ((1 - v11) << 16) - v10 + v7;
      if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_30:
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
      v13 = *(_WORD *)(v4 + 12);
      if ( !v13 || *(struct _KTHREAD **)(v4 + 16) == KeGetCurrentThread() )
      {
        *(_WORD *)(v4 + 12) = v13 + 1;
        *(_QWORD *)(v4 + 16) = KeGetCurrentThread();
      }
      else
      {
        v4 = 0LL;
      }
      v5 = (_DWORD *)v29;
    }
    v14 = gpHandleManager;
    v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v5 & 0xFFFFFF);
    v16 = *((_QWORD *)v14 + 2);
    v17 = v15;
    v18 = *(_DWORD *)(v16 + 2056);
    if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      goto LABEL_34;
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0;
    v20 = *(_QWORD *)(v16 + 8LL * v19 + 8);
    if ( v19 )
      v17 = ((1 - v19) << 16) - v18 + v15;
    if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
LABEL_34:
      v21 = 0LL;
    else
      v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
    v22 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v14,
            (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000u);
    v23 = *((_QWORD *)v14 + 2);
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( v22 >= v25 )
        v26 = ((v22 - v25) >> 16) + 1;
      else
        v26 = 0;
      v27 = *(_QWORD *)(v23 + 8LL * v26 + 8);
      if ( v26 )
        v24 = ((1 - v26) << 16) - v25 + v22;
      *(_DWORD *)(*(_QWORD *)v27 + 24LL * v24 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v24 >> 8)) + 16LL * (unsigned __int8)v24,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v4;
}
