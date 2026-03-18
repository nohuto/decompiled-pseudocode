/*
 * XREFs of GreRestoreDC @ 0x1C00400D0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     vRestoreRegion @ 0x1C003FDF0 (vRestoreRegion.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0040094 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004EAB0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     GreDCSelectBrush @ 0x1C00514D0 (GreDCSelectBrush.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0052070 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00524A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005268C (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0052950 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     GreSelectPalette @ 0x1C006ED50 (GreSelectPalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     HmgLockAllOwners @ 0x1C00738F0 (HmgLockAllOwners.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00DB3A0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreRestoreDC(struct HOBJ__ *a1, int a2)
{
  DC *v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // r12d
  struct OBJECT *v10; // rbx
  __int64 v11; // r14
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r9
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r10
  unsigned int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  __int64 v25; // r10
  __int64 v26; // rcx
  struct _ERESOURCE *v27; // rbx
  __int64 v28; // rcx
  struct _ENTRY *EntryFromObject; // rax
  DC *v30; // rdx
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // r8d
  int v36; // eax
  int v37; // eax
  ULONG v38; // ecx
  unsigned __int64 v39; // rdx
  struct OBJECT *v40; // rcx
  DC *v41[2]; // [rsp+30h] [rbp-40h] BYREF
  DC *v42[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v43; // [rsp+50h] [rbp-20h] BYREF
  int v44; // [rsp+58h] [rbp-18h]
  int v45; // [rsp+C0h] [rbp+50h]
  struct OBJECT *v46; // [rsp+C8h] [rbp+58h] BYREF

  v41[0] = 0LL;
  v41[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v41, (HDC)a1);
  v4 = v41[0];
  v5 = 1;
  if ( !v41[0] )
  {
    v38 = 6;
    goto LABEL_69;
  }
  v6 = *((_QWORD *)v41[0] + 10);
  v7 = *(_DWORD *)(v6 + 8);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v41[0], *(_QWORD *)(v6 + 16));
    v4 = v41[0];
  }
  if ( (v7 & 0x2000) != 0 )
  {
    GreDCSelectPen(v4, *(struct HOBJ__ **)(*((_QWORD *)v4 + 10) + 24LL));
    v4 = v41[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v4 + 29);
  if ( a2 < 1 || a2 >= *((_DWORD *)v4 + 29) )
  {
    v38 = 87;
LABEL_69:
    EngSetLastError(v38);
    v5 = 0;
    goto LABEL_58;
  }
  v8 = *((_QWORD *)v4 + 6);
  if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
  {
    GreLockVisRgn(*((_QWORD *)v4 + 6), v6, (int)v4);
    v4 = v41[0];
  }
  v9 = *((_DWORD *)v4 + 9) & 0x800;
  if ( v9 )
  {
    DC::bMakeInfoDC(v4, 0);
    v4 = v41[0];
  }
  v45 = *(_DWORD *)(*((_QWORD *)v4 + 10) + 308LL);
  while ( 1 )
  {
    v42[1] = 0LL;
    v42[0] = 0LL;
    v42[0] = (DC *)HmgLockAllOwners(*((struct HOBJ__ **)v4 + 16));
    if ( !v42[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v41[0] + 18));
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v41[0] + 19));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v41[0] + 20));
    v10 = (struct OBJECT *)*((_QWORD *)v41[0] + 13);
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v43, v10, 0, 0, 1);
    if ( v44 )
    {
      v11 = v43;
      if ( *(_BYTE *)(v43 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v39 = (unsigned __int16)*(_DWORD *)v10 | ((unsigned __int64)*(unsigned int *)v10 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v39 | ((unsigned int)v39 >> 8) & 0xFF0000);
      }
      TrackHmgrReferenceDecrement(*(_BYTE *)(v11 + 14), v10);
      --*((_DWORD *)v10 + 2);
      v12 = gpHandleManager;
      v13 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
      v14 = *((_QWORD *)v12 + 2);
      v15 = v13;
      v16 = *(_DWORD *)(v14 + 2056);
      if ( v13 >= v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
        goto LABEL_75;
      if ( v13 >= v16 )
        v17 = ((v13 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v14 + 8LL * v17 + 8);
      if ( v17 )
        v15 = ((1 - v17) << 16) - v16 + v13;
      if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
LABEL_75:
        v19 = 0LL;
      else
        v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
      v20 = GdiHandleManager::DecodeIndex(v12, (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000);
      v21 = *((_QWORD *)v12 + 2);
      v22 = v20;
      v23 = *(_DWORD *)(v21 + 2056);
      if ( v20 < v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
      {
        if ( v20 >= v23 )
          v24 = ((v20 - v23) >> 16) + 1;
        else
          v24 = 0;
        v25 = *(_QWORD *)(v21 + 8LL * v24 + 8);
        if ( v24 )
          v22 = ((1 - v24) << 16) - v23 + v20;
        *(_DWORD *)(*(_QWORD *)v25 + 24LL * v22 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v22 >> 8)) + 16LL * (unsigned __int8)v22,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
    }
    vRestoreRegion((__int64)v41);
    if ( (int)IsvRestorePathSupported() >= 0 )
      vRestorePathWrap(v41, (unsigned int)(*((_DWORD *)v41[0] + 29) - 1));
    v26 = *((_QWORD *)v41[0] + 64);
    if ( v26 )
    {
      if ( *((_DWORD *)v41[0] + 8) == 1 )
      {
        hbmSelectBitmap(a1, (struct HOBJ__ *)gahStockObjects[21]);
      }
      else
      {
        v37 = *(_DWORD *)(v26 + 112);
        if ( (v37 & 0x800) != 0 )
        {
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v26, 0LL);
        }
        else if ( v37 >= 0 )
        {
          SURFACE::vDec_cRef((SURFACE *)v26);
        }
      }
    }
    v27 = ghsemPalette;
    if ( ghsemPalette )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v27);
    }
    if ( *((_QWORD *)v41[0] + 11) != *((_QWORD *)v42[0] + 11) )
      GreSelectPalette((HDC)a1);
    if ( *((_QWORD *)v41[0] + 12) != *((_QWORD *)v42[0] + 12) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v46, *((HPALETTE *)v41[0] + 11));
      v40 = v46;
      *((_QWORD *)v42[0] + 12) = v46;
      if ( v40 )
        HmgDecrementShareReferenceCountEx(v40, 0LL);
    }
    v28 = *((_QWORD *)v42[0] + 12);
    if ( (struct PALETTE *)v28 != ppalDefault )
      _InterlockedDecrement((volatile signed __int32 *)(v28 + 56));
    DC::vCopyTo(v42[0], (struct XDCOBJ *)v41);
    XDCOBJ::bDeleteDC((XDCOBJ *)v42, 0);
    if ( v27 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", v27);
      ExReleaseResourceAndLeaveCriticalRegion(v27);
      PsLeavePriorityRegion();
    }
    DCOBJ::~DCOBJ((DCOBJ *)v42);
    v4 = v41[0];
    if ( a2 >= *((_DWORD *)v41[0] + 29) )
      goto LABEL_47;
  }
  EngSetLastError(6u);
  v5 = 0;
  DCOBJ::~DCOBJ((DCOBJ *)v42);
  v4 = v41[0];
LABEL_47:
  if ( v45 != *(_DWORD *)(*((_QWORD *)v4 + 10) + 308LL) )
  {
    *((_DWORD *)v4 + 66) |= 1u;
    v4 = v41[0];
  }
  if ( v9 )
  {
    DC::bMakeInfoDC(v4, 1);
    v4 = v41[0];
  }
  *((_DWORD *)v4 + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, v4);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  DC::vUpdate_VisRect(v41[0], *((struct REGION **)v41[0] + 192));
  *(_DWORD *)(*((_QWORD *)v41[0] + 10) + 8LL) |= 0x12001Fu;
  v30 = v41[0];
  if ( *((_DWORD *)v41[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v41[0]);
    v30 = v41[0];
  }
  v31 = *((_DWORD *)v30 + 9);
  v32 = *((_QWORD *)v30 + 64);
  if ( (v31 & 1) != 0
    || *((_DWORD *)v30 + 8) == 1
    && v32
    && ((v36 = *(_DWORD *)(v32 + 112), (v36 & 0x4000) != 0) || (v36 & 0x800000) != 0 && (*(_BYTE *)(v8 + 32) & 1) != 0) )
  {
    *((_DWORD *)v30 + 9) = v31 | 0x200;
    if ( (*(_DWORD *)(v32 + 112) & 0x200) != 0 )
      *((_DWORD *)v41[0] + 9) |= 0x8000u;
    else
      *((_DWORD *)v41[0] + 9) &= ~0x8000u;
  }
  else
  {
    *((_DWORD *)v30 + 9) = v31 & 0xFFFFFDFF;
  }
  DC::vCalcFillOrigin(v41[0]);
  if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
    GreUnlockVisRgn(v8, v33, v34);
LABEL_58:
  DCOBJ::~DCOBJ((DCOBJ *)v41);
  return v5;
}
