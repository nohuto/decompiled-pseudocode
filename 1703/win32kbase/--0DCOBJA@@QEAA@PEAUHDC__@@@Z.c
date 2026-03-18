/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0
 * Callers:
 *     GreGetDCOrgEx @ 0x1C0028640 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C0028A30 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0028AD0 (GreSetDCOrg.c)
 *     GreIsRendering @ 0x1C002A1F0 (GreIsRendering.c)
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     GreValidateVisrgn @ 0x1C007BB98 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x1C00980A0 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int16 v2; // esi^2
  __int64 v3; // rdi
  int v5; // ebx
  _DWORD *v6; // r14
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  signed int v12; // ecx
  __int64 v13; // rax
  GdiHandleManager *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  signed int v19; // ecx
  __int64 v20; // rax
  _DWORD *v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // r10
  unsigned int v24; // edx
  signed int v25; // ecx
  __int64 v26; // r10
  DCOBJA *result; // rax
  __int64 v28; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+28h] [rbp-30h]

  *(_QWORD *)this = 0LL;
  v2 = WORD1(a2);
  *((_DWORD *)this + 2) = 0;
  v3 = 0LL;
  v28 = 0LL;
  v29 = 0;
  *((_DWORD *)this + 3) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v28, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 0, 0);
  v5 = v29;
  if ( !v29 )
    goto LABEL_29;
  v6 = (_DWORD *)v28;
  if ( v28 )
  {
    if ( *(_BYTE *)(v28 + 14) != 1 || *(_WORD *)(v28 + 12) != v2 )
    {
LABEL_13:
      v14 = gpHandleManager;
      v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v6 & 0xFFFFFF);
      v16 = *((_QWORD *)v14 + 2);
      v17 = v15;
      v18 = *(_DWORD *)(v16 + 2056);
      if ( v15 < v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      {
        if ( v15 >= v18 )
        {
          v19 = ((v15 - v18) >> 16) + 1;
          if ( (v15 - v18) >> 16 == -2 )
            goto LABEL_33;
        }
        else
        {
          v19 = 0;
        }
        v20 = *(_QWORD *)(v16 + 8LL * v19 + 8);
        if ( v19 )
          v17 = (_DWORD)v17 - (v19 << 16) - v18 + 0x10000;
        if ( (unsigned int)v17 < *(_DWORD *)(v20 + 20) )
        {
          v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
          goto LABEL_20;
        }
      }
LABEL_33:
      v21 = 0LL;
LABEL_20:
      v22 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)v14,
              (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000u);
      GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v14, v22);
      v23 = *((_QWORD *)v14 + 2);
      v24 = *(_DWORD *)(v23 + 2056);
      if ( v22 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
      {
        if ( v22 < v24 )
        {
          v25 = 0;
LABEL_23:
          v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
          if ( v25 )
            v22 = v22 - (v25 << 16) - v24 + 0x10000;
          *(_DWORD *)(*(_QWORD *)v26 + 24LL * v22 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v22 >> 8)) + 16LL * (unsigned __int8)v22,
            0LL);
          KeLeaveCriticalRegion();
          goto LABEL_26;
        }
        v25 = ((v22 - v24) >> 16) + 1;
        if ( (v22 - v24) >> 16 != -2 )
          goto LABEL_23;
      }
LABEL_26:
      v5 = 0;
      v28 = 0LL;
      v29 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v28 & 0xFFFFFF);
    v9 = *((_QWORD *)v7 + 2);
    v10 = v8;
    v11 = *(_DWORD *)(v9 + 2056);
    if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      if ( v8 < v11 )
      {
        v12 = 0;
LABEL_8:
        v13 = *(_QWORD *)(v9 + 8LL * v12 + 8);
        if ( v12 )
          v10 = (_DWORD)v10 - (v12 << 16) - v11 + 0x10000;
        if ( (unsigned int)v10 < *(_DWORD *)(v13 + 20) )
          v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
        goto LABEL_12;
      }
      v12 = ((v8 - v11) >> 16) + 1;
      if ( (v8 - v11) >> 16 != -2 )
        goto LABEL_8;
    }
LABEL_12:
    ++*(_DWORD *)(v3 + 8);
    goto LABEL_13;
  }
LABEL_27:
  if ( v5 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
LABEL_29:
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
