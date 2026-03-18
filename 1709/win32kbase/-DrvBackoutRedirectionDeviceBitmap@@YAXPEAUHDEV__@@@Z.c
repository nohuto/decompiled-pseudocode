/*
 * XREFs of ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1C00F6004
 * Callers:
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F5DD8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0020360 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 */

void __fastcall DrvBackoutRedirectionDeviceBitmap(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 Objt; // rax
  SURFACE *v4; // rbx
  char i; // si
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  struct SFMLOGICALSURFACE *v7; // rdi

  LODWORD(v2) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v2, 5);
    v4 = (SURFACE *)Objt;
    if ( !Objt )
      break;
    v2 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 40) == a1[227]
      && (*(_DWORD *)(Objt + 116) & 1) != 0
      && (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
    {
      for ( i = 0; ; i = 1 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf(v4);
        v7 = FirstLSurf;
        if ( !FirstLSurf )
          break;
        vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v4 + 6), FirstLSurf, 0LL);
        if ( (int)IsUserReleaseRedirectionBitmapSupported() >= 0 )
          UserReleaseRedirectionBitmap(*((_QWORD *)v7 + 34));
      }
      if ( !i && !byte_1C01968F0 )
      {
        byte_1C01968F0 = 1;
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, v4, a1, 0LL, 0LL, 0LL, 0);
      }
    }
  }
}
