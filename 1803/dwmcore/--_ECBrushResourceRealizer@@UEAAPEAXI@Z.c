/*
 * XREFs of ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x1801C2270
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18001D908 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CBrushResourceRealizer *__fastcall CBrushResourceRealizer::`vector deleting destructor'(
        CBrushResourceRealizer *this,
        char a2)
{
  *(_QWORD *)this = &CBrushResourceRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
