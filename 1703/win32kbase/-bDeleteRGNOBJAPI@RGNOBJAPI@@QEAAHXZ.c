/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     bDeleteRegion @ 0x1C0041BA0 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C00FC050 (EngDeleteRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C003E990 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003F184 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(RGNOBJAPI *this)
{
  _DWORD *v1; // rax
  RGNOBJAPI *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rax
  GdiHandleManager *v9; // rbp
  unsigned int v10; // esi
  __int64 v11; // rbx
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // rbx
  char v15; // bp
  __int64 v16; // r12
  GdiHandleManager *v17; // r14
  __int64 v18; // rcx
  unsigned int v19; // r8d
  signed int v20; // edx
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r15
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // rbp
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ebx
  unsigned int v38; // edi
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  int v40; // [rsp+38h] [rbp-60h]
  int v41; // [rsp+3Ch] [rbp-5Ch]
  __int64 v43; // [rsp+B0h] [rbp+18h]
  int v44; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_DWORD **)this;
  v2 = this;
  v3 = 0LL;
  if ( !*(_QWORD *)this )
    goto LABEL_64;
  v4 = *(_QWORD *)v1;
  v5 = (unsigned __int16)*(_QWORD *)v1;
  v39 = 0LL;
  v6 = v5 | ((unsigned int)v4 >> 8) & 0xFF0000;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v44);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v43 = *(_QWORD *)(v8 + 72);
  else
    v43 = 0LL;
  v9 = gpHandleManager;
  v10 = v6;
  v40 = 1;
  if ( (unsigned int)v6 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v6,
                                  1)
           + 13) == WORD1(v6) )
        v10 = (unsigned __int16)v6;
    }
    else
    {
      v10 = (unsigned __int16)v6;
    }
  }
  v11 = *((_QWORD *)v9 + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_101;
  if ( v10 >= v12 )
  {
    v13 = ((v10 - v12) >> 16) + 1;
    if ( (v10 - v12) >> 16 == -2 )
    {
LABEL_101:
      v40 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_102;
    }
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  if ( v13 )
    v10 = v10 - (v13 << 16) - v12 + 0x10000;
  v15 = 0;
  if ( v10 >= *(_DWORD *)(v14 + 20) )
    goto LABEL_101;
  v16 = *(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v10 >> 8)) + 16LL * (unsigned __int8)v10;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  if ( v10 < *(_DWORD *)(v14 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                 + 16LL * (unsigned __int8)v10
                 + 8) )
  {
    v15 = 1;
    *(_DWORD *)(*(_QWORD *)v14 + 24LL * v10 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v15 )
    goto LABEL_101;
  v17 = gpHandleManager;
  if ( (unsigned int)v6 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v6,
                                  1)
           + 13) == WORD1(v6) )
        v6 = (unsigned __int16)v6;
    }
    else
    {
      v6 = (unsigned __int16)v6;
    }
  }
  v18 = *((_QWORD *)v17 + 2);
  v19 = *(_DWORD *)(v18 + 2056);
  if ( (unsigned int)v6 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    goto LABEL_83;
  if ( (unsigned int)v6 >= v19 )
  {
    v20 = (((unsigned int)v6 - v19) >> 16) + 1;
    if ( ((unsigned int)v6 - v19) >> 16 != -2 )
      goto LABEL_24;
LABEL_83:
    v22 = 0LL;
    goto LABEL_29;
  }
  v20 = 0;
LABEL_24:
  v21 = *(_QWORD *)(v18 + 8LL * v20 + 8);
  if ( v20 )
    v6 = (_DWORD)v6 - (v20 << 16) - v19 + 0x10000;
  v22 = 0LL;
  if ( (unsigned int)v6 < *(_DWORD *)(v21 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)(unsigned int)v6 >> 8))
                 + 16LL * (unsigned __int8)v6
                 + 8) )
  {
    v22 = *(_QWORD *)v21 + 24 * v6;
  }
LABEL_29:
  v39 = v22;
  _m_prefetchw((const void *)(v22 + 8));
  v41 = *(_DWORD *)(v22 + 8);
  v23 = v44 & 0xFFFFFFFC;
  v24 = v41 & 0xFFFFFFFE;
  if ( (v41 & 0xFFFFFFFE) != (_DWORD)v23 && v24 && ((v23 = v43) == 0 || v24 != *(_DWORD *)(v43 + 8))
    || (*(_BYTE *)(v22 + 15) & 0x20) != 0 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v39);
    if ( v40 )
    {
      v22 = v39;
      v17 = gpHandleManager;
      goto LABEL_31;
    }
LABEL_102:
    v2 = this;
LABEL_70:
    v36 = 0;
    goto LABEL_58;
  }
LABEL_31:
  if ( *(_BYTE *)(v22 + 14) != 4 || *(_WORD *)(v22 + 12) != WORD1(v4) )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v39);
    v22 = v39;
    v17 = gpHandleManager;
  }
  v2 = this;
  if ( !v40 || !v22 )
    goto LABEL_70;
  v25 = *(_QWORD *)this;
  v26 = (unsigned __int16)**(_DWORD **)this;
  v27 = v26 | (**(_DWORD **)this >> 8) & 0xFF0000;
  if ( v27 >= 0x10000 )
  {
    if ( *(_DWORD *)v17 > 0x10000u )
    {
      v38 = (unsigned __int16)v26;
      v23 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)v17 + 2),
                                   (unsigned __int16)v26,
                                   1)
            + 13);
      if ( (_DWORD)v23 == HIWORD(v27) )
        v27 = v38;
      v2 = this;
    }
    else
    {
      v27 = (unsigned __int16)v26;
    }
  }
  v28 = *((_QWORD *)v17 + 2);
  v29 = *(_DWORD *)(v28 + 2056);
  if ( v27 >= v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
    goto LABEL_93;
  if ( v27 >= v29 )
  {
    v23 = ((v27 - v29) >> 16) + 1;
    if ( (v27 - v29) >> 16 != -2 )
      goto LABEL_41;
LABEL_93:
    v32 = 0LL;
    goto LABEL_46;
  }
  v23 = 0LL;
LABEL_41:
  v30 = *(_QWORD *)(v28 + 8LL * (int)v23 + 8);
  v31 = v27;
  if ( (_DWORD)v23 )
  {
    v23 = (unsigned int)((_DWORD)v23 << 16);
    v31 = v27 - v23 - v29 + 0x10000;
  }
  v32 = 0LL;
  if ( v31 < *(_DWORD *)(v30 + 20) )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                    + 16LL * (unsigned __int8)v31
                    + 8);
    if ( v23 )
    {
      v23 = 3LL * v31;
      v32 = *(_QWORD *)v30 + 24LL * v31;
    }
  }
LABEL_46:
  if ( v27 >= 0x10000 )
  {
    if ( *(_DWORD *)v17 > 0x10000u )
    {
      v23 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)v17 + 2),
                                   (unsigned __int16)v27,
                                   1)
            + 13);
      if ( (_DWORD)v23 == HIWORD(v27) )
        v27 = (unsigned __int16)v27;
      v2 = this;
    }
    else
    {
      v27 = (unsigned __int16)v27;
    }
  }
  v33 = *(_DWORD *)(v28 + 2056);
  if ( v27 >= v33 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
    goto LABEL_100;
  if ( v27 >= v33 )
  {
    v23 = ((v27 - v33) >> 16) + 1;
    if ( (v27 - v33) >> 16 == -2 )
    {
LABEL_100:
      v35 = 0LL;
      goto LABEL_54;
    }
  }
  else
  {
    v23 = 0LL;
  }
  v34 = *(_QWORD *)(v28 + 8LL * (int)v23 + 8);
  if ( (_DWORD)v23 )
  {
    v23 = (unsigned int)((_DWORD)v23 << 16);
    v27 = v27 - v23 - v33 + 0x10000;
  }
  if ( v27 >= *(_DWORD *)(v34 + 20) )
    goto LABEL_100;
  v23 = 2LL * (unsigned __int8)v27;
  v35 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v27 >> 8))
                  + 16LL * (unsigned __int8)v27
                  + 8);
LABEL_54:
  if ( v35 != v25 )
    v32 = 0LL;
  v3 = *(_QWORD *)(v32 + 16);
  if ( v3 )
  {
    v36 = bPEBCacheHandle(v23, 2LL, v3, v32, &v39, v2);
    if ( v36 )
      goto LABEL_58;
  }
  else
  {
    v36 = 0;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v39);
LABEL_58:
  if ( v40 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v39);
  if ( v36 )
    return v36;
LABEL_64:
  if ( !(unsigned int)RGNOBJAPI::bDeleteHandle(v2) )
    return 0LL;
  REGION::vDeleteREGION(*(REGION **)v2);
  *(_QWORD *)v2 = 0LL;
  if ( v3 )
    HmgFreeObjectAttr(v3);
  return 1LL;
}
