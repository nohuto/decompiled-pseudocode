/*
 * XREFs of ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1C00F4FE4
 * Callers:
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F4DB8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C002C9D0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 */

void __fastcall DrvBackoutRedirectionDeviceBitmap(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 Objt; // rax
  SURFACE *v4; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  struct SFMLOGICALSURFACE *v6; // rdi

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
      while ( 1 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf(v4);
        v6 = FirstLSurf;
        if ( !FirstLSurf )
          break;
        vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v4 + 6), FirstLSurf, 0LL);
        if ( (int)IsUserReleaseRedirectionBitmapSupported() >= 0 )
          UserReleaseRedirectionBitmap(*((_QWORD *)v6 + 34));
      }
    }
  }
}
