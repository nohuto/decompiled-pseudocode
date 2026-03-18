/*
 * XREFs of ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x1801FA980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1801FA58C (--1CHolographicInteropTexture@@MEAA@XZ.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::`scalar deleting destructor'(
        CHolographicInteropTexture *this,
        char a2)
{
  CHolographicInteropTexture::~CHolographicInteropTexture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
