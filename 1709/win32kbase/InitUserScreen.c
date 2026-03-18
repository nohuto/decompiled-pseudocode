/*
 * XREFs of InitUserScreen @ 0x1C00926DC
 * Callers:
 *     InitVideo @ 0x1C00A6740 (InitVideo.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     CreateEmptyRgnPublic @ 0x1C0056A80 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C0057050 (CreateCacheDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     xxxODI_ColorInit @ 0x1C0060120 (xxxODI_ColorInit.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063E68 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreGetSystemFont @ 0x1C0092B60 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x1C0092B88 (GreMarkDCUnreadable.c)
 *     CreateProfileUserName @ 0x1C0092E90 (CreateProfileUserName.c)
 */

__int64 InitUserScreen()
{
  __int64 ProfileUserName; // rax
  _DWORD *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  _WORD *v10; // rbx
  unsigned __int16 v11; // ax
  __int16 v12; // ax
  unsigned int v13; // ebx
  bool v14; // di
  char v15; // di
  bool v16; // bl
  char v17; // bl
  bool v18; // di
  char v19; // di
  bool v20; // bl
  char v21; // bl
  bool v22; // di
  char v23; // di
  bool v24; // bl
  char v25; // bl
  bool v26; // di
  char v27; // di
  bool v28; // bl
  char v29; // bl
  bool v30; // di
  char v31; // di
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rbx
  __int64 v35; // rdx
  int v36; // r8d
  _BYTE v38[40]; // [rsp+20h] [rbp-28h] BYREF
  char v39; // [rsp+50h] [rbp+8h] BYREF

  ProfileUserName = CreateProfileUserName(v38);
  v1 = gpsi;
  v2 = ProfileUserName;
  *((_DWORD *)gpsi + 1275) = 1;
  v1[1301] = 1;
  *((_QWORD *)v1 + 640) = GreGetSystemFont(1LL);
  *((_QWORD *)v1 + 653) = GreGetSystemFont(0LL);
  *(_QWORD *)(gpDispInfo + 48) = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 32), 0, 0);
  v3 = *(_QWORD *)(gpDispInfo + 48);
  if ( !v3 )
    goto LABEL_34;
  GreSelectFont(v3, *((_QWORD *)v1 + 640));
  GreSetDCOwnerEx(*(struct HOBJ__ **)(gpDispInfo + 48), 0LL, 0LL, 1LL);
  *(_QWORD *)(gpDispInfo + 56) = GreCreateCompatibleDC(*(struct HOBJ__ **)(gpDispInfo + 48));
  v4 = *(_QWORD *)(gpDispInfo + 56);
  if ( !v4 )
    goto LABEL_34;
  GreSelectFont(v4, *((_QWORD *)v1 + 640));
  GreSetDCOwnerEx(*(struct HOBJ__ **)(gpDispInfo + 56), 0LL, 0LL, 1LL);
  ghdcMem = GreCreateCompatibleDC(*(struct HOBJ__ **)(gpDispInfo + 48));
  v5 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(struct HOBJ__ **)(gpDispInfo + 48));
  v6 = v5 && ghdcMem2 != 0LL;
  if ( !v6 )
    goto LABEL_31;
  GreSetDCOwnerEx((struct HOBJ__ *)ghdcMem, 0LL, 0LL, 1LL);
  GreSetDCOwnerEx((struct HOBJ__ *)ghdcMem2, 0LL, 0LL, 1LL);
  if ( CreateCachedMonitor() )
  {
    v9 = gpsi;
    *((_WORD *)gpsi + 4987) = gdmLogPixels;
    v10 = gpsi;
    *(_WORD *)(PsGetCurrentProcessWin32Process(v9, v7, v8) + 284) = v10[4987];
    v11 = *((_WORD *)gpsi + 4987);
    if ( v11 >= 0x90u )
    {
      if ( v11 >= 0xC0u )
      {
        if ( v11 >= 0x120u )
          v12 = v11 < 0x180u ? 96 : 128;
        else
          v12 = 64;
      }
      else
      {
        v12 = 48;
      }
    }
    else
    {
      v12 = 32;
    }
    *((_WORD *)gpsi + 4988) = v12;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v39);
    if ( (int)UpdateUserScreen() < 0 )
    {
      v6 = 0;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v39);
    }
    else
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v39);
      ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
      v13 = ghrgnInv0 != 0LL ? v6 : 0;
      ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
      v14 = ghrgnInv1 != 0LL;
      ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnInv2 )
        v15 = v13 & v14;
      else
        v15 = 0;
      ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
      v16 = ghrgnSPB1 != 0LL;
      ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnSPB2 )
        v17 = v15 & v16;
      else
        v17 = 0;
      ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
      v18 = ghrgnSCR != 0LL;
      ghrgnSW = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnSW )
        v19 = v17 & v18;
      else
        v19 = 0;
      ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
      v20 = ghrgnScrl1 != 0LL;
      ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnScrl2 )
        v21 = v19 & v20;
      else
        v21 = 0;
      ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
      v22 = ghrgnScrlVis != 0LL;
      ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnScrlSrc )
        v23 = v21 & v22;
      else
        v23 = 0;
      ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
      v24 = ghrgnScrlDst != 0LL;
      ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnScrlValid )
        v25 = v23 & v24;
      else
        v25 = 0;
      ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
      v26 = ghrgnInvalidSum != 0LL;
      ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnVisNew )
        v27 = v25 & v26;
      else
        v27 = 0;
      ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
      v28 = ghrgnSWP1 != 0LL;
      ghrgnValid = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnValid )
        v29 = v27 & v28;
      else
        v29 = 0;
      ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
      v30 = ghrgnValidSum != 0LL;
      ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
      if ( ghrgnInvalid )
        v31 = v29 & v30;
      else
        v31 = 0;
      ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
      LOBYTE(v6) = (ghrgnGDC != 0LL) & v31;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), v32, v33);
      v34 = 5LL;
      do
      {
        v6 = (CreateCacheDC(0LL, 0x802u, 0LL) != 0) & (unsigned __int8)v6;
        --v34;
      }
      while ( v34 );
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v35, v36);
      if ( v6 )
      {
        GreMarkDCUnreadable(*(HDC *)(gpDispInfo + 48));
        *((_DWORD *)gpsi + 492) = 0;
        *((_DWORD *)gpsi + 537) = InitSafeBootMode;
        *((_DWORD *)gpsi + 543) = 0;
        xxxODI_ColorInit(v2);
        if ( (int)IsPaintScreenBackgroundSupported() >= 0 )
          PaintScreenBackground();
      }
    }
  }
  else
  {
LABEL_34:
    v6 = 0;
  }
LABEL_31:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v38);
  return v6;
}
