/*
 * XREFs of GreCreateDisplayDC @ 0x1C002C340
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C0026B64 (UserGetDesktopDC.c)
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C0089080 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     GreSetupDCAttributes @ 0x1C002BFCC (GreSetupDCAttributes.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0037088 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00372D0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038EA8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0039270 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00397F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003A694 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     GreValidateVisrgn @ 0x1C007BB98 (GreValidateVisrgn.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

HDC __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, int a3)
{
  HDC v6; // rsi
  int v7; // r9d
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v12; // rax
  DC *v13; // rcx
  int v14; // edx
  unsigned int v15; // edx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  DC *v18[2]; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v7 = (int)ghsemDynamicModeChange;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(a1, &LockAcquireShared);
  v20 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v18, a2, a3, v7);
  if ( v18[0] )
  {
    *((_QWORD *)v18[0] + 6) = a1;
    *((_DWORD *)v18[0] + 18) = *(_DWORD *)(a1 + 1840);
    *((_DWORD *)v18[0] + 19) = *(_DWORD *)(a1 + 2144);
    *((_QWORD *)v18[0] + 3) = *(_QWORD *)(a1 + 1816);
    *((_QWORD *)v18[0] + 8) = *(_QWORD *)(a1 + 40);
    if ( a2 == 1 )
    {
      v17[0] = 0x100000001LL;
      *((_QWORD *)v18[0] + 66) = 0x100000001LL;
    }
    else
    {
      v12 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v20);
      *((_QWORD *)v18[0] + 66) = *v12;
      if ( a2 )
        goto LABEL_8;
      if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
        *((_DWORD *)v18[0] + 9) |= 0x200u;
      else
        *((_DWORD *)v18[0] + 9) &= ~0x200u;
      if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
        *((_DWORD *)v18[0] + 9) |= 1u;
      else
        *((_DWORD *)v18[0] + 9) &= ~1u;
      if ( (*(_DWORD *)(a1 + 32) & 0x400) != 0 )
        *((_DWORD *)v18[0] + 9) |= 0x1000u;
      else
        *((_DWORD *)v18[0] + 9) &= ~0x1000u;
      if ( (*(_DWORD *)(a1 + 32) & 0x80u) != 0 )
        goto LABEL_8;
      v13 = v18[0];
      *((_QWORD *)v18[0] + 64) = *(_QWORD *)(a1 + 2568);
      DC::vInheritSurfaceDpiScale(v13);
      v14 = *((_DWORD *)v18[0] + 9);
      if ( (v14 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2568) + 112LL) & 0x200) != 0 )
        v15 = v14 | 0x8000;
      else
        v15 = v14 & 0xFFFF7FFF;
      *((_DWORD *)v18[0] + 9) = v15;
    }
    *((_QWORD *)v18[0] + 8) = ghsemGreLock;
LABEL_8:
    if ( (unsigned int)DC::bSetDefaultRegion(v18[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v18, *(_DWORD *)(a1 + 32) & 1);
      DC::vUpdate_VisRect(v18[0], *((struct REGION **)v18[0] + 192));
      v8 = 0;
      if ( (unsigned int)GreSetupDCAttributes(*(HDC *)v18[0]) )
      {
        v8 = 1;
        if ( a1 == *((_QWORD *)gpDispInfo + 4) )
          *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 8LL) |= 0x10000u;
        v19 = 1;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v20);
        v17[0] = *(_QWORD *)(a1 + 24);
        v9 = v17[0];
        *((_QWORD *)v18[0] + 7) = 0LL;
        if ( v9
          && (*(_DWORD *)(a1 + 32) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v20)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v17) )
        {
          *((_QWORD *)v18[0] + 7) = v16;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)v17);
        }
        v6 = *(HDC *)v18[0];
      }
      if ( !v8 )
      {
        DC::vReleaseVis(v18[0]);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v18[0] + 20));
      }
    }
    if ( v6 )
    {
      GreValidateVisrgn(v6);
    }
    else
    {
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v18[0] + 18));
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v18[0] + 19));
      HmgDecrementShareReferenceCount(*((_QWORD *)v18[0] + 13));
    }
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v18);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v10, &LockRelease);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v6;
}
