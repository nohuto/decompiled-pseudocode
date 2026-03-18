/*
 * XREFs of InitUserScreen @ 0x1C00631F8
 * Callers:
 *     InitVideo @ 0x1C009C744 (InitVideo.c)
 * Callees:
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 *     GreGetStockObject @ 0x1C002B5C0 (GreGetStockObject.c)
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     CreateEmptyRgnPublic @ 0x1C00425D0 (CreateEmptyRgnPublic.c)
 *     GreMarkDCUnreadable @ 0x1C006362C (GreMarkDCUnreadable.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063698 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreGetDpiStockObject @ 0x1C00637D0 (GreGetDpiStockObject.c)
 *     CreateProfileUserName @ 0x1C0063B50 (CreateProfileUserName.c)
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     xxxODI_ColorInit @ 0x1C00737A0 (xxxODI_ColorInit.c)
 */

__int64 InitUserScreen()
{
  __int64 ProfileUserName; // rax
  _DWORD *v1; // rbx
  const UNICODE_STRING *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // bl
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v12; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // ebx
  int v16; // edi
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  int v20; // edi
  int v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rbx
  _BYTE v29[56]; // [rsp+20h] [rbp-38h] BYREF
  char v30; // [rsp+60h] [rbp+8h] BYREF

  ProfileUserName = CreateProfileUserName(v29);
  v1 = gpsi;
  v2 = (const UNICODE_STRING *)ProfileUserName;
  *((_DWORD *)gpsi + 1354) = 1;
  v1[1386] = 1;
  *((_QWORD *)v1 + 683) = GreGetStockObject(13);
  *((_QWORD *)v1 + 699) = GreGetDpiStockObject(13LL, 0LL);
  *((_QWORD *)gpDispInfo + 6) = GreCreateDisplayDC(*((_QWORD *)gpDispInfo + 4), 0, 0);
  v3 = *((_QWORD *)gpDispInfo + 6);
  if ( !v3 )
    goto LABEL_16;
  GreSelectFont(v3, *((_QWORD *)v1 + 683));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 6), 0, 0, 1);
  *((_QWORD *)gpDispInfo + 7) = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 6));
  v4 = *((_QWORD *)gpDispInfo + 7);
  if ( !v4 )
    goto LABEL_16;
  GreSelectFont(v4, *((_QWORD *)v1 + 683));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 7), 0, 0, 1);
  ghdcMem = (HDC)GreCreateCompatibleDC(*((HDC *)gpDispInfo + 6));
  v5 = ghdcMem != 0LL;
  ghdcMem2 = (HDC)GreCreateCompatibleDC(*((HDC *)gpDispInfo + 6));
  v6 = v5 && ghdcMem2 != 0LL;
  if ( !v6 )
    goto LABEL_13;
  GreSetDCOwnerEx((unsigned int)ghdcMem, 0, 0, 1);
  GreSetDCOwnerEx((unsigned int)ghdcMem2, 0, 0, 1);
  if ( CreateCachedMonitor() )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
    v30 = 0;
    UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v30);
    if ( (int)UpdateUserScreen(1) < 0 )
    {
      v6 = 0;
      if ( !v30 )
      {
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v30);
      }
    }
    else
    {
      if ( !v30 )
      {
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v30);
      }
      ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
      v7 = ghrgnInv0 != 0LL ? v6 : 0;
      ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
      v8 = (unsigned __int8)v7 & (ghrgnInv1 != 0LL);
      ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
      v9 = ghrgnInv2 != 0LL ? v8 : 0;
      ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
      v10 = (unsigned __int8)v9 & (ghrgnSPB1 != 0LL);
      ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
      v11 = ghrgnSPB2 != 0LL ? v10 : 0;
      ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
      v12 = (unsigned __int8)v11 & (ghrgnSCR != 0LL);
      ghrgnSW = (HRGN)CreateEmptyRgnPublic();
      v13 = ghrgnSW != 0LL ? v12 : 0;
      ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
      v14 = (unsigned __int8)v13 & (ghrgnScrl1 != 0LL);
      ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
      v15 = ghrgnScrl2 != 0LL ? v14 : 0;
      ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
      v16 = (unsigned __int8)v15 & (ghrgnScrlVis != 0LL);
      ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
      v17 = ghrgnScrlSrc != 0LL ? v16 : 0;
      ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
      v18 = (unsigned __int8)v17 & (ghrgnScrlDst != 0LL);
      ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
      v19 = ghrgnScrlValid != 0LL ? v18 : 0;
      ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
      v20 = (unsigned __int8)v19 & (ghrgnInvalidSum != 0LL);
      ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
      v21 = ghrgnVisNew != 0LL ? v20 : 0;
      ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
      v22 = (unsigned __int8)v21 & (ghrgnSWP1 != 0LL);
      ghrgnValid = (HRGN)CreateEmptyRgnPublic();
      v23 = ghrgnValid != 0LL ? v22 : 0;
      ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
      v24 = (unsigned __int8)v23 & (ghrgnValidSum != 0LL);
      ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
      v6 = ghrgnInvalid != 0LL ? v24 : 0;
      ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
      LOBYTE(v6) = (ghrgnGDC != 0LL) & v6;
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 4), v25, v26);
      v27 = 5LL;
      do
      {
        v6 = (CreateCacheDC(0LL, 0x802u, 0LL) != 0) & (unsigned __int8)v6;
        --v27;
      }
      while ( v27 );
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
      if ( v6 )
      {
        GreMarkDCUnreadable(*((_QWORD *)gpDispInfo + 6));
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
LABEL_16:
    v6 = 0;
  }
LABEL_13:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v29);
  return v6;
}
