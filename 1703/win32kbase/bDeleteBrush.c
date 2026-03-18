/*
 * XREFs of bDeleteBrush @ 0x1C0058800
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C00587A4 (-vCleanupBrushes@@YAXK@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0059600 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0031144 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003F184 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00591BC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005A6A0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00984A8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00FDC84 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
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
  unsigned int v10; // eax
  unsigned int v11; // r9d
  __int64 v12; // r10
  unsigned int v13; // edx
  signed int v14; // ecx
  __int64 v15; // r10
  __int64 v16; // rbx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r8d
  volatile signed __int32 *v25; // rcx
  _QWORD v27[3]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v28; // [rsp+58h] [rbp-50h] BYREF
  int v29; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v4 = 1;
  v5 = 1;
  v6 = 0LL;
  if ( a2 )
    goto LABEL_28;
  v28 = 0LL;
  v29 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v28, a1, 16);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v28) )
  {
    v7 = 1;
    v8 = v28;
    v9 = gpHandleManager;
    v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v28 & 0xFFFFFF);
    v11 = v10;
    v12 = *((_QWORD *)v9 + 2);
    v13 = *(_DWORD *)(v12 + 2056);
    if ( v10 < v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    {
      if ( v10 >= v13 )
      {
        v14 = ((v10 - v13) >> 16) + 1;
        if ( (v10 - v13) >> 16 == -2 )
          goto LABEL_11;
      }
      else
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)(v12 + 8LL * v14 + 8);
      v27[2] = v15;
      if ( v14 )
        v11 = v10 - (v14 << 16) - v13 + 0x10000;
      if ( v11 < *(_DWORD *)(v15 + 20) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
        goto LABEL_12;
      }
    }
LABEL_11:
    v16 = 0LL;
LABEL_12:
    v27[0] = v16;
    v6 = (_DWORD *)*((_QWORD *)v8 + 2);
    if ( (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v28) )
    {
      **(_DWORD **)(v16 + 56) = 2;
    }
    else
    {
      if ( !v6 )
      {
LABEL_23:
        if ( v7 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
        v2 = 0;
        goto LABEL_26;
      }
      if ( (*v6 & 1) == 0 )
      {
        v17 = *(_DWORD *)(v16 + 48) & 0x400;
        if ( (*(_DWORD *)(v16 + 48) & 0x10) != 0
          && (!(_DWORD)v17 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(v17, (*(_DWORD *)(v16 + 48) & 0x400) != 0, v6, v28, (HANDLELOCK *)&v28, 0LL) )
        {
          v5 = 0;
        }
        v7 = v5;
        goto LABEL_23;
      }
    }
    v5 = 0;
    goto LABEL_23;
  }
LABEL_26:
  if ( v29 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
LABEL_28:
  if ( v5 )
  {
    v18 = HmgRemoveObjectImpl(a1, 0, 0, 0, 16, 0LL);
    v19 = (__int64)v18;
    if ( v18 )
    {
      v20 = v18[12];
      if ( (v20 & 0x400) != 0 )
      {
        v21 = *(_QWORD *)(v19 + 176);
        if ( v21 )
        {
          if ( (v20 & 0x4000) == 0 )
            Win32FreePool(v21);
        }
      }
      v22 = *(_QWORD *)(v19 + 32);
      if ( v22 )
        bDeleteSurface(v22);
      if ( *(_DWORD *)(v19 + 108) != -1 )
      {
        v23 = *(_DWORD *)(v19 + 48);
        if ( v23 >= 0 )
        {
          v24 = v23 & 0x40000000;
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
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v27, (HBRUSH)a1);
      if ( !v27[0] || (*(_DWORD *)(v27[0] + 48LL) & 0x200) == 0 )
        v4 = 0;
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v27);
    }
  }
  return v4;
}
