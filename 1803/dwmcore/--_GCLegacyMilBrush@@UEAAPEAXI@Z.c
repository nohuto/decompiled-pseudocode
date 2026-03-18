/*
 * XREFs of ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x18016E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CLegacyMilBrush@@UEAA@XZ @ 0x1800B8C5C (--1CLegacyMilBrush@@UEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CLegacyMilBrush *__fastcall CLegacyMilBrush::`scalar deleting destructor'(CLegacyMilBrush *this, char a2)
{
  CLegacyMilBrush::~CLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
