/*
 * XREFs of ??_ECColorKeyBitmapRealization@@MEAAPEAXI@Z @ 0x180213490
 * Callers:
 *     ??_ECColorKeyBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800DE7C0 (--_ECColorKeyBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x180213424 (--1CColorKeyBitmapRealization@@MEAA@XZ.c)
 */

CColorKeyBitmapRealization *__fastcall CColorKeyBitmapRealization::`vector deleting destructor'(
        CColorKeyBitmapRealization *this,
        char a2)
{
  CColorKeyBitmapRealization::~CColorKeyBitmapRealization(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
