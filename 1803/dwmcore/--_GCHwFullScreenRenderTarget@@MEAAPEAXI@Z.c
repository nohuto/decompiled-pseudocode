/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800D7E10
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OKA@EAAPEAXI@Z @ 0x1800DE1F0 (--_ECHwFullScreenRenderTarget@@OKA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800D7D7C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 */

CHwFullScreenRenderTarget *__fastcall CHwFullScreenRenderTarget::`scalar deleting destructor'(
        CHwFullScreenRenderTarget *this,
        char a2)
{
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
