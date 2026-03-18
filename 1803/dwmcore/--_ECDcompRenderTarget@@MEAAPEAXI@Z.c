/*
 * XREFs of ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800DA450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800DA48C (--1CDcompRenderTarget@@MEAA@XZ.c)
 */

CDcompRenderTarget *__fastcall CDcompRenderTarget::`vector deleting destructor'(CDcompRenderTarget *this, char a2)
{
  CDcompRenderTarget::~CDcompRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
