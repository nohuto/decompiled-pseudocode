/*
 * XREFs of bDeleteBrush @ 0x1C0062D60
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C0062D00 (-vCleanupBrushes@@YAXK@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C004DC58 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C004ED70 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     HmgFreeObjectAttr @ 0x1C00630B8 (HmgFreeObjectAttr.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0063810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00A2590 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00FDFA4 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2)
{
  int v2; // r13d
  unsigned int v4; // r15d
  int v5; // r14d
  _DWORD *v6; // rsi
  int v7; // r13d
  _DWORD *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  struct HOBJ__ *v21; // rcx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // r8d
  volatile signed __int32 *v25; // rcx
  _QWORD v26[3]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v27; // [rsp+58h] [rbp-50h] BYREF
  int v28; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v4 = 1;
  v5 = 1;
  v6 = 0LL;
  if ( a2 )
    goto LABEL_22;
  v27 = 0LL;
  v28 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v27, a1, 16);
  if ( !v28 )
    goto LABEL_22;
  v7 = 1;
  v8 = v27;
  v9 = gpHandleManager;
  v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v27 & 0xFFFFFF);
  v11 = *((_QWORD *)v9 + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_53;
  if ( v10 >= v12 )
    v13 = ((v10 - v12) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  v26[2] = v14;
  if ( v13 )
    v10 += ((1 - v13) << 16) - v12;
  if ( v10 >= *(_DWORD *)(v14 + 20) )
LABEL_53:
    v15 = 0LL;
  else
    v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v26[0] = v15;
  v6 = (_DWORD *)*((_QWORD *)v8 + 2);
  if ( (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v27) )
  {
    **(_DWORD **)(v15 + 56) = 2;
LABEL_38:
    v5 = 0;
    goto LABEL_18;
  }
  if ( v6 )
  {
    if ( (*v6 & 1) == 0 )
    {
      v16 = *(_DWORD *)(v15 + 48) & 0x400;
      if ( (*(_DWORD *)(v15 + 48) & 0x10) != 0
        && (!(_DWORD)v16 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
        && (unsigned int)bPEBCacheHandle(v16, (*(_DWORD *)(v15 + 48) & 0x400) != 0, v6, v27, (__int64)&v27, 0LL) )
      {
        v5 = 0;
      }
      v7 = v5;
      goto LABEL_18;
    }
    goto LABEL_38;
  }
LABEL_18:
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  v2 = 0;
  if ( v28 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
LABEL_22:
  if ( v5 )
  {
    v18 = HmgRemoveObject(a1, 0, 0, 0, 16, 0LL);
    v19 = (__int64)v18;
    if ( v18 )
    {
      v20 = v18[12];
      if ( (v20 & 0x400) != 0 )
      {
        v23 = *(_QWORD *)(v19 + 176);
        if ( v23 )
        {
          if ( (v20 & 0x4000) == 0 )
            Win32FreePool(v23);
        }
      }
      v21 = *(struct HOBJ__ **)(v19 + 32);
      if ( v21 )
        bDeleteSurface(v21);
      if ( *(_DWORD *)(v19 + 108) != -1 )
      {
        v22 = *(_DWORD *)(v19 + 48);
        if ( v22 >= 0 )
        {
          v24 = v22 & 0x40000000;
          v25 = *(volatile signed __int32 **)(v19 + 128);
          if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v25, v24 != 0);
          *(_QWORD *)(v19 + 128) = 0LL;
        }
      }
      if ( (*(_DWORD *)(v19 + 48) & 0x80u) != 0 )
        BRUSH::vDeleteIcmDIBs((BRUSH *)v19);
      if ( *(_QWORD *)(v19 + 152) )
        ReleaseReferenceCountedObjectHandle(2LL);
      FreeObject(v19, 16);
      if ( !v2 && v6 )
        HmgFreeObjectAttr(v6);
    }
    else
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v26, (HBRUSH)a1);
      if ( !v26[0] || (*(_DWORD *)(v26[0] + 48LL) & 0x200) == 0 )
        v4 = 0;
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
    }
  }
  return v4;
}
