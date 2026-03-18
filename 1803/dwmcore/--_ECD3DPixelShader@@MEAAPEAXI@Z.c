/*
 * XREFs of ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x18001F650
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18001F5FC (--1CD3DPixelShader@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CD3DPixelShader *__fastcall CD3DPixelShader::`vector deleting destructor'(CD3DPixelShader *this, char a2)
{
  CD3DPixelShader::~CD3DPixelShader(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
