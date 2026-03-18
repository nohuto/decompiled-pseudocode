/*
 * XREFs of ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x180185540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801854E0 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 */

CCompositionSkyBoxBrush *__fastcall CCompositionSkyBoxBrush::`scalar deleting destructor'(
        CCompositionSkyBoxBrush *this,
        char a2)
{
  CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
