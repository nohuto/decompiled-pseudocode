/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002FF24
 * Callers:
 *     GreValidateVisrgn @ 0x1C0031910 (GreValidateVisrgn.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0031AA0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C0033740 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C00615B0 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0063710 (GreSetDCOrg.c)
 *     GreSelectVisRgnShared @ 0x1C0072E20 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int16 v2; // esi^2
  __int64 v3; // rbx
  _DWORD *v5; // r14
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r10
  GdiHandleManager *v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r9
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // edx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // r10
  DCOBJA *result; // rax
  __int64 v28; // [rsp+30h] [rbp-28h] BYREF
  int v29; // [rsp+38h] [rbp-20h]

  *(_QWORD *)this = 0LL;
  v2 = WORD1(a2);
  *((_DWORD *)this + 2) = 0;
  v3 = 0LL;
  v28 = 0LL;
  v29 = 0;
  *((_DWORD *)this + 3) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v28, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v29 )
  {
    v5 = (_DWORD *)v28;
    if ( *(_BYTE *)(v28 + 14) == 1 && *(_WORD *)(v28 + 12) == v2 )
    {
      v6 = gpHandleManager;
      v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v28 & 0xFFFFFF);
      v8 = *((_QWORD *)v6 + 2);
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 2056);
      if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        goto LABEL_28;
      if ( v7 >= v10 )
        v11 = ((v7 - v10) >> 16) + 1;
      else
        v11 = 0LL;
      v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
      if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_28:
        v3 = 0LL;
      else
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
      ++*(_DWORD *)(v3 + 8);
    }
    v13 = gpHandleManager;
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v5 & 0xFFFFFF);
    v15 = *((_QWORD *)v13 + 2);
    v16 = v14;
    v17 = *(_DWORD *)(v15 + 2056);
    if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      goto LABEL_30;
    if ( v14 >= v17 )
      v18 = ((v14 - v17) >> 16) + 1;
    else
      v18 = 0LL;
    v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
    if ( (_DWORD)v18 )
      v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
    if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
LABEL_30:
      v20 = 0LL;
    else
      v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
    v21 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v13,
            (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000u);
    v22 = *((_QWORD *)v13 + 2);
    v23 = v21;
    v24 = *(_DWORD *)(v22 + 2056);
    if ( v21 < v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
    {
      if ( v21 >= v24 )
        v25 = ((v21 - v24) >> 16) + 1;
      else
        v25 = 0LL;
      v26 = *(_QWORD *)(v22 + 8 * v25 + 8);
      if ( (_DWORD)v25 )
        v23 = ((1 - (_DWORD)v25) << 16) - v24 + v21;
      *(_DWORD *)(*(_QWORD *)v26 + 24LL * v23 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v23 >> 8)) + 16LL * (unsigned __int8)v23,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
