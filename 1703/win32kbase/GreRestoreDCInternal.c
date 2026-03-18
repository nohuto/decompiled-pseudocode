/*
 * XREFs of GreRestoreDCInternal @ 0x1C00A0C40
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDC @ 0x1C0095FF0 (GreRestoreDC.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002CB3C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x1C0030630 (HmgPentryFromPobj.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003195C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00397F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0039AE4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0039E3C (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectPalette @ 0x1C0042400 (GreSelectPalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00771F0 (GreDCSelectBrush.c)
 *     HmgLockAllOwners @ 0x1C007B9E0 (HmgLockAllOwners.c)
 *     vRestoreRegion @ 0x1C007C950 (vRestoreRegion.c)
 *     hbmSelectBitmap @ 0x1C007E7E0 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3)
{
  int v6; // r8d
  DC *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // r15d
  int v13; // r13d
  int *v14; // rcx
  int v15; // eax
  DC *v16; // rdx
  int *v17; // rcx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rax
  DC *v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  int v23; // eax
  ULONG v24; // ecx
  HSEMAPHORE v26; // [rsp+20h] [rbp-30h] BYREF
  DC *v27[2]; // [rsp+28h] [rbp-28h] BYREF
  DC *v28[3]; // [rsp+38h] [rbp-18h] BYREF
  int *v29; // [rsp+98h] [rbp+48h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v7 = v27[0];
  v8 = 1;
  if ( !v27[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v27[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v24 = 6;
    goto LABEL_57;
  }
  v9 = *((_QWORD *)v7 + 10);
  v10 = *(_DWORD *)(v9 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v7, *(_QWORD *)(v9 + 16));
    v7 = v27[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen((struct HOBJ__ ***)v7, *(struct HOBJ__ **)(*((_QWORD *)v7 + 10) + 24LL));
    v7 = v27[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v7 + 29);
  if ( a2 < 1 || a2 >= *((_DWORD *)v7 + 29) )
  {
    v24 = 87;
LABEL_57:
    EngSetLastError(v24);
    v8 = 0;
    goto LABEL_58;
  }
  v11 = *((_QWORD *)v7 + 6);
  if ( (*(_DWORD *)(v11 + 32) & 1) != 0 )
  {
    GreLockVisRgn(*((_QWORD *)v7 + 6), v9, v6);
    v7 = v27[0];
  }
  v12 = *((_DWORD *)v7 + 9) & 0x800;
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 0);
    v7 = v27[0];
  }
  v13 = *(_DWORD *)(*((_QWORD *)v7 + 10) + 308LL);
  while ( 1 )
  {
    v28[1] = 0LL;
    v28[0] = 0LL;
    v28[0] = (DC *)HmgLockAllOwners(*((_QWORD *)v7 + 16), 1);
    if ( !v28[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v27[0] + 18));
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v27[0] + 19));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v27[0] + 20));
    DEC_SHARE_REF_CNT(*((int **)v27[0] + 13));
    vRestoreRegion((__int64)v27);
    if ( (int)IsvRestorePathSupported() >= 0 )
      vRestorePathWrap(v27, (unsigned int)(*((_DWORD *)v27[0] + 29) - 1));
    v14 = (int *)*((_QWORD *)v27[0] + 64);
    if ( v14 )
    {
      if ( *((_DWORD *)v27[0] + 8) == 1 )
      {
        hbmSelectBitmap(a1);
      }
      else
      {
        v15 = v14[28];
        if ( (v15 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT(v14);
        }
        else if ( v15 >= 0 )
        {
          SURFACE::vDec_cRef((SURFACE *)v14);
        }
      }
    }
    v26 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v16 = v27[0];
    if ( *((_QWORD *)v27[0] + 11) != *((_QWORD *)v28[0] + 11) )
    {
      GreSelectPalette(a1, *((HPALETTE *)v28[0] + 11), 1);
      v16 = v27[0];
    }
    if ( *((_QWORD *)v16 + 12) != *((_QWORD *)v28[0] + 12) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v29, *((HPALETTE *)v16 + 11));
      v17 = v29;
      *((_QWORD *)v28[0] + 12) = v29;
      if ( v17 )
        DEC_SHARE_REF_CNT(v17);
    }
    v18 = (volatile signed __int32 *)*((_QWORD *)v28[0] + 12);
    if ( v18 != WPP_MAIN_CB.Reserved )
      _InterlockedDecrement(v18 + 14);
    DC::vCopyTo(v28[0], v27);
    XDCOBJ::bDeleteDC(v28, 0);
    SEMOBJ::vUnlock((PERESOURCE *)&v26);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v28);
    v7 = v27[0];
    if ( a2 >= *((_DWORD *)v27[0] + 29) )
      goto LABEL_37;
  }
  EngSetLastError(6u);
  v8 = 0;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v28);
  v7 = v27[0];
LABEL_37:
  if ( v13 != *(_DWORD *)(*((_QWORD *)v7 + 10) + 308LL) )
  {
    *((_DWORD *)v7 + 66) |= 1u;
    v7 = v27[0];
  }
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 1);
    v7 = v27[0];
  }
  *((_DWORD *)v7 + 9) |= 0x10u;
  v19 = HmgPentryFromPobj(v7);
  *(_BYTE *)(v19 + 15) |= 4u;
  DC::vUpdate_VisRect(v27[0], *((struct REGION **)v27[0] + 192));
  *(_DWORD *)(*((_QWORD *)v27[0] + 10) + 8LL) |= 0x12001Fu;
  v20 = v27[0];
  if ( *((_DWORD *)v27[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v27[0]);
    v20 = v27[0];
  }
  v21 = *((_DWORD *)v20 + 9);
  v22 = *((_QWORD *)v20 + 64);
  if ( (v21 & 1) != 0
    || *((_DWORD *)v20 + 8) == 1
    && v22
    && ((v23 = *(_DWORD *)(v22 + 112), (v23 & 0x4000) != 0) || (v23 & 0x800000) != 0 && (*(_DWORD *)(v11 + 32) & 1) != 0) )
  {
    *((_DWORD *)v20 + 9) = v21 | 0x200;
    if ( (*(_DWORD *)(v22 + 112) & 0x200) != 0 )
      *((_DWORD *)v27[0] + 9) |= 0x8000u;
    else
      *((_DWORD *)v27[0] + 9) &= ~0x8000u;
  }
  else
  {
    *((_DWORD *)v20 + 9) = v21 & 0xFFFFFDFF;
  }
  DC::vCalcFillOrigin(v27[0]);
  if ( (*(_DWORD *)(v11 + 32) & 1) != 0 )
    GreUnlockVisRgn(v11);
LABEL_58:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  return v8;
}
