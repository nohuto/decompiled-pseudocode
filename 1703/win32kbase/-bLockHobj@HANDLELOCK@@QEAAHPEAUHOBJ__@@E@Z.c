/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkLazyDelete @ 0x1C007C340 (HmgMarkLazyDelete.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  int v3; // r14d
  __int64 v5; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  GdiHandleManager *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // r15d
  unsigned int v13; // edx
  signed int v14; // ecx
  __int64 v15; // rdi
  char v16; // r13
  GdiHandleManager *v17; // r15
  __int64 v18; // r9
  unsigned int v19; // edx
  signed int v20; // ecx
  __int64 v21; // r9
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  _DWORD v26[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h]
  __int64 v29; // [rsp+88h] [rbp+20h]

  v3 = (int)a2;
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  v5 = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v26);
  v7 = 0LL;
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v29 = *(_QWORD *)(v8 + 72);
  else
    v29 = 0LL;
  *((_DWORD *)this + 2) = 1;
  v9 = gpHandleManager;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
  v11 = *((_QWORD *)v9 + 2);
  v12 = v10;
  v13 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_37;
  if ( v10 >= v13 )
  {
    v14 = ((v10 - v13) >> 16) + 1;
    if ( (v10 - v13) >> 16 == -2 )
      goto LABEL_37;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
  if ( v14 )
    v12 = v10 - (v14 << 16) - v13 + 0x10000;
  v16 = 0;
  if ( v12 < *(_DWORD *)(v15 + 20) )
  {
    v27 = *(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v12 >> 8)) + 16LL * (unsigned __int8)v12;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v27, 0LL);
    if ( v12 < *(_DWORD *)(v15 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                   + 16LL * (unsigned __int8)v12
                   + 8) )
    {
      v16 = 1;
      *(_DWORD *)(*(_QWORD *)v15 + 24LL * v12 + 8) |= 1u;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v16 )
    {
      v17 = gpHandleManager;
      if ( (unsigned int)v5 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v3,
                                      1)
               + 13) == WORD1(v5) )
            v5 = (unsigned __int16)v3;
        }
        else
        {
          v5 = (unsigned __int16)v5;
        }
      }
      v18 = *((_QWORD *)v17 + 2);
      v19 = *(_DWORD *)(v18 + 2056);
      if ( (unsigned int)v5 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
        goto LABEL_26;
      if ( (unsigned int)v5 >= v19 )
      {
        v20 = (((unsigned int)v5 - v19) >> 16) + 1;
        if ( ((unsigned int)v5 - v19) >> 16 == -2 )
        {
LABEL_26:
          *(_QWORD *)this = v7;
          _m_prefetchw((const void *)(v7 + 8));
          v22 = *(_DWORD *)(v7 + 8);
          v23 = v26[0];
          *((_DWORD *)this + 3) = v22;
          v24 = v22 & 0xFFFFFFFE;
          if ( v24 != (v23 & 0xFFFFFFFC) && v24 && (!v29 || v24 != *(_DWORD *)(v29 + 8))
            || (*(_BYTE *)(v7 + 15) & 0x20) != 0 )
          {
            HANDLELOCK::vUnlock(this);
          }
          goto LABEL_30;
        }
      }
      else
      {
        v20 = 0;
      }
      v21 = *(_QWORD *)(v18 + 8LL * v20 + 8);
      if ( v20 )
        v5 = (_DWORD)v5 - (v20 << 16) - v19 + 0x10000;
      if ( (unsigned int)v5 < *(_DWORD *)(v21 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)(unsigned int)v5 >> 8))
                     + 16LL * (unsigned __int8)v5
                     + 8) )
      {
        v7 = *(_QWORD *)v21 + 24 * v5;
      }
      goto LABEL_26;
    }
  }
LABEL_37:
  *((_DWORD *)this + 2) = 0;
  KeLeaveCriticalRegion();
LABEL_30:
  if ( *((_DWORD *)this + 2)
    && (*(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(*(_QWORD *)this + 12LL) != HIWORD(v3)) )
  {
    HANDLELOCK::vUnlock(this);
  }
  return *((unsigned int *)this + 2);
}
