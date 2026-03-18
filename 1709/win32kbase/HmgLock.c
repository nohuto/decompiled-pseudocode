/*
 * XREFs of HmgLock @ 0x1C004CF70
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreLockRegion @ 0x1C00FCE90 (GreLockRegion.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgLock(struct HOBJ__ *a1, char a2)
{
  __int16 v3; // esi^2
  __int64 v4; // r14
  _DWORD *v5; // rdi
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // r8
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // ecx
  __int64 v19; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  GdiHandleManager *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned int v26; // r9d
  unsigned int v27; // edx
  __int64 v28; // r8
  __int16 v29; // ax
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+38h] [rbp-30h]

  v3 = WORD1(a1);
  v4 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v30, a1, 1, 0, 0);
  if ( v31 )
  {
    v5 = (_DWORD *)v30;
    if ( *(_BYTE *)(v30 + 14) == a2 && *(_WORD *)(v30 + 12) == v3 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (_DWORD *)v30;
      v22 = gpHandleManager;
      v23 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v30 & 0xFFFFFF);
      v24 = *((_QWORD *)v22 + 2);
      v25 = v23;
      v26 = *(_DWORD *)(v24 + 2056);
      if ( v23 < v26 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
      {
        if ( v23 >= v26 )
          v27 = ((v23 - v26) >> 16) + 1;
        else
          v27 = 0;
        v28 = *(_QWORD *)(v24 + 8LL * v27 + 8);
        if ( v27 )
          v25 = v23 + ((1 - v27) << 16) - v26;
        if ( (unsigned int)v25 < *(_DWORD *)(v28 + 20) )
          v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
      }
      v29 = *(_WORD *)(v4 + 12);
      if ( !v29 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
      {
        *(_QWORD *)(v4 + 16) = CurrentThread;
        *(_WORD *)(v4 + 12) = v29 + 1;
      }
      else
      {
        v4 = 0LL;
      }
    }
    v6 = gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *v5 & 0xFFFFFF);
    v8 = *((_QWORD *)v6 + 2);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      goto LABEL_32;
    if ( v7 >= v10 )
      v11 = ((v7 - v10) >> 16) + 1;
    else
      v11 = 0;
    v12 = *(_QWORD *)(v8 + 8LL * v11 + 8);
    if ( v11 )
      v9 = ((1 - v11) << 16) - v10 + v7;
    if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_32:
      v13 = 0LL;
    else
      v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
    v14 = GdiHandleManager::DecodeIndex(v6, (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000);
    v15 = *((_QWORD *)v6 + 2);
    v16 = v14;
    v17 = *(_DWORD *)(v15 + 2056);
    if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      if ( v14 >= v17 )
        v18 = ((v14 - v17) >> 16) + 1;
      else
        v18 = 0;
      v19 = *(_QWORD *)(v15 + 8LL * v18 + 8);
      if ( v18 )
        v16 = ((1 - v18) << 16) - v17 + v14;
      *(_DWORD *)(*(_QWORD *)v19 + 24 * v16 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v4;
}
