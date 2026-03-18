/*
 * XREFs of ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x18015E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18001D908 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

dataproviderBamoConnection *__fastcall LocalMILObject<CImmediateBrushRealizer>::`scalar deleting destructor'(
        dataproviderBamoConnection *this,
        char a2)
{
  *(_QWORD *)this = &CImmediateBrushRealizer::`vftable';
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
