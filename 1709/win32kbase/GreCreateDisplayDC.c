/*
 * XREFs of GreCreateDisplayDC @ 0x1C0055870
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     CreateCacheDC @ 0x1C0057050 (CreateCacheDC.c)
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C005C284 (UserGetDesktopDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C008E550 (NtGdiCreateMetafileDC.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x1C001DBCC (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C001E0A0 (HmgFreeDcAttr.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003DFBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042BE8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0051F48 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00524A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0054F7C (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00551C0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1C00552A4 (GreValidateVisrgn.c)
 *     ?GreSetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C007067C (-GreSetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 */

HDC __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, int a3)
{
  HDC v6; // rsi
  __int64 v7; // rdx
  DC *v8; // r8
  _QWORD *v9; // rax
  DC *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _DC_ATTR *DcAttr; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v22[3]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  DC *v24[2]; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+58h] [rbp-20h]
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v26);
  v21 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v24, a2, a3);
  if ( !v24[0] )
    goto LABEL_35;
  *((_QWORD *)v24[0] + 6) = a1;
  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v21);
  *((_DWORD *)v24[0] + 18) = *(_DWORD *)(a1 + 1840);
  *((_DWORD *)v24[0] + 19) = *(_DWORD *)(a1 + 2144);
  *((_QWORD *)v24[0] + 3) = *(_QWORD *)(a1 + 1816);
  *((_QWORD *)v24[0] + 8) = *(_QWORD *)(a1 + 40);
  if ( a2 == 1 )
  {
    v26 = 0x100000001LL;
    *((_QWORD *)v24[0] + 66) = 0x100000001LL;
  }
  else
  {
    v9 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v21, &v23);
    *((_QWORD *)v24[0] + 66) = *v9;
    if ( a2 )
      goto LABEL_21;
    if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
      *((_DWORD *)v24[0] + 9) |= 0x200u;
    else
      *((_DWORD *)v24[0] + 9) &= ~0x200u;
    if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
      *((_DWORD *)v24[0] + 9) |= 1u;
    else
      *((_DWORD *)v24[0] + 9) &= ~1u;
    if ( (*(_DWORD *)(a1 + 32) & 0x400) != 0 )
      *((_DWORD *)v24[0] + 9) |= 0x1000u;
    else
      *((_DWORD *)v24[0] + 9) &= ~0x1000u;
    if ( (*(_DWORD *)(a1 + 32) & 0x80u) != 0 )
      goto LABEL_21;
    v10 = v24[0];
    *((_QWORD *)v24[0] + 64) = *(_QWORD *)(a1 + 2568);
    DC::vInheritSurfaceDpiScale(v10);
    v8 = v24[0];
    v7 = *((unsigned int *)v24[0] + 9);
    if ( (v7 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2568) + 112LL) & 0x200) != 0 )
      LODWORD(v7) = v7 | 0x8000;
    else
      LODWORD(v7) = v7 & 0xFFFF7FFF;
    *((_DWORD *)v24[0] + 9) = v7;
  }
  *((_QWORD *)v24[0] + 8) = ghsemGreLock;
LABEL_21:
  if ( (unsigned int)DC::bSetDefaultRegion(v24[0], v7, (__int64)v8) )
  {
    if ( (int)IsXDCOBJ_vSetDefaultFontSupported(v11) >= 0 )
      XDCOBJ_vSetDefaultFontWrap(v24, *(_DWORD *)(a1 + 32) & 1);
    DC::vUpdate_VisRect(v24[0], *((struct REGION **)v24[0] + 192));
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr(v13, v12, v14, v15);
    v22[2] = DcAttr;
    if ( DcAttr )
    {
      if ( a1 == *(_QWORD *)(gpDispInfo + 32) )
        *(_DWORD *)(*((_QWORD *)v24[0] + 10) + 8LL) |= 0x10000u;
      v25 = 1;
      GreSetupDCAttributes(v24[0], DcAttr);
      v22[0] = *(_QWORD *)(a1 + 24);
      v17 = v22[0];
      *((_QWORD *)v24[0] + 7) = 0LL;
      if ( v17
        && (*(_DWORD *)(a1 + 32) & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21)
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v22) )
      {
        *((_QWORD *)v24[0] + 7) = v18;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)v22);
      }
      v6 = *(HDC *)v24[0];
    }
  }
  if ( v6 )
    GreValidateVisrgn(v6, 1);
LABEL_35:
  DCMEMOBJ::~DCMEMOBJ(v24);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return v6;
}
