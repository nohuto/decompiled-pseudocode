/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550
 * Callers:
 *     bDeleteRegion @ 0x1C001F530 (bDeleteRegion.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     EngDeleteRgn @ 0x1C00FC5B0 (EngDeleteRgn.c)
 * Callees:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00438D0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C004ED70 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     HmgFreeObjectAttr @ 0x1C00630B8 (HmgFreeObjectAttr.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(__int64 **this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  _DWORD *v6; // r15
  __int64 *v7; // r12
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rbp
  unsigned int v15; // edx
  __int64 v16; // r8
  __int64 *v17; // rdx
  __int64 result; // rax
  unsigned int v19; // ebx
  GdiHandleManager *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // r10d
  unsigned int v25; // ecx
  __int64 v26; // r9
  _DWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  __int64 v33; // rdx
  struct REGION *v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+38h] [rbp-40h]

  v2 = 0LL;
  if ( *this )
  {
    v3 = **this;
    v36 = 0LL;
    v37 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v36, (unsigned __int16)v3 | ((unsigned int)v3 >> 8) & 0xFF0000, 1, 0, 0);
    v5 = v37;
    if ( v37 )
    {
      v6 = (_DWORD *)v36;
      if ( *(_BYTE *)(v36 + 14) != 4 || *(_WORD *)(v36 + 12) != WORD1(v3) )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v36);
        v5 = v37;
        v6 = (_DWORD *)v36;
      }
      if ( v5 )
      {
        v7 = *this;
        v8 = (unsigned __int16)*(_DWORD *)*this;
        v9 = v8 | (*(_DWORD *)*this >> 8) & 0xFF0000;
        if ( v9 >= 0x10000 )
        {
          v4 = (__int64)gpHandleManager;
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v35 = (unsigned __int16)v8;
            v4 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v8,
                                        1)
                 + 13);
            if ( (_DWORD)v4 == HIWORD(v9) )
              v9 = v35;
          }
          else
          {
            v9 = (unsigned __int16)v8;
          }
        }
        v10 = *((_QWORD *)gpHandleManager + 2);
        v11 = *(_DWORD *)(v10 + 2056);
        if ( v9 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
        {
          v14 = 0LL;
        }
        else
        {
          if ( v9 >= v11 )
            v4 = ((v9 - v11) >> 16) + 1;
          else
            v4 = 0LL;
          v12 = *(_QWORD *)(v10 + 8LL * (unsigned int)v4 + 8);
          if ( (_DWORD)v4 )
            v13 = v9 + ((1 - (_DWORD)v4) << 16) - v11;
          else
            v13 = v9;
          v14 = 0LL;
          if ( v13 < *(_DWORD *)(v12 + 20) )
          {
            v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                           + 16LL * (unsigned __int8)v13
                           + 8);
            if ( v4 )
            {
              v4 = 3LL * v13;
              v14 = *(_QWORD *)v12 + 24LL * v13;
            }
          }
        }
        if ( v9 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v4 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v9,
                                        1)
                 + 13);
            if ( (_DWORD)v4 == HIWORD(v9) )
              v9 = (unsigned __int16)v9;
          }
          else
          {
            v9 = (unsigned __int16)v9;
          }
        }
        v15 = *(_DWORD *)(v10 + 2056);
        if ( v9 >= v15 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
          goto LABEL_67;
        if ( v9 >= v15 )
          v4 = ((v9 - v15) >> 16) + 1;
        else
          v4 = 0LL;
        v16 = *(_QWORD *)(v10 + 8LL * (unsigned int)v4 + 8);
        if ( (_DWORD)v4 )
          v9 += ((1 - (_DWORD)v4) << 16) - v15;
        if ( v9 >= *(_DWORD *)(v16 + 20) )
        {
LABEL_67:
          v17 = 0LL;
        }
        else
        {
          v4 = 2LL * (unsigned __int8)v9;
          v17 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                            + 16LL * (unsigned __int8)v9
                            + 8);
        }
        if ( v17 != v7 )
          v14 = 0LL;
        v2 = *(_QWORD *)(v14 + 16);
        if ( v2 )
        {
          result = bPEBCacheHandle(v4, 2LL, v2, v14, &v36, this);
          v19 = result;
          if ( (_DWORD)result )
          {
            if ( v37 )
            {
              HANDLELOCK::vUnlock((HANDLELOCK *)&v36);
              return v19;
            }
            return result;
          }
          v6 = (_DWORD *)v36;
        }
        v20 = gpHandleManager;
        v21 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
        v22 = *((_QWORD *)v20 + 2);
        v23 = v21;
        v24 = *(_DWORD *)(v22 + 2056);
        if ( v21 >= v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
          goto LABEL_70;
        if ( v21 >= v24 )
          v25 = ((v21 - v24) >> 16) + 1;
        else
          v25 = 0;
        v26 = *(_QWORD *)(v22 + 8LL * v25 + 8);
        if ( v25 )
          v23 = ((1 - v25) << 16) - v24 + v21;
        if ( (unsigned int)v23 >= *(_DWORD *)(v26 + 20) )
LABEL_70:
          v27 = 0LL;
        else
          v27 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8);
        v28 = GdiHandleManager::DecodeIndex(v20, (unsigned __int16)*v27 | (*v27 >> 8) & 0xFF0000);
        v29 = *((_QWORD *)v20 + 2);
        v30 = v28;
        v31 = *(_DWORD *)(v29 + 2056);
        if ( v28 < v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
        {
          if ( v28 >= v31 )
            v32 = ((v28 - v31) >> 16) + 1;
          else
            v32 = 0;
          v33 = *(_QWORD *)(v29 + 8LL * v32 + 8);
          if ( v32 )
            v30 = ((1 - v32) << 16) - v31 + v28;
          *(_DWORD *)(*(_QWORD *)v33 + 24 * v30 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v30 >> 8)) + 16LL * (unsigned __int8)v30,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this) )
    return 0LL;
  v34 = (struct REGION *)*this;
  if ( *this && v34 != prgnDefault )
    FreeObject(v34, 4LL);
  *this = 0LL;
  if ( v2 )
    HmgFreeObjectAttr(v2);
  return 1LL;
}
