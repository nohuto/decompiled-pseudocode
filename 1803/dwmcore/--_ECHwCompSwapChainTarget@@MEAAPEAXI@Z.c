/*
 * XREFs of ??_ECHwCompSwapChainTarget@@MEAAPEAXI@Z @ 0x1801E44A0
 * Callers:
 *     ??_ECHwCompSwapChainTarget@@OKA@EAAPEAXI@Z @ 0x1800DDE30 (--_ECHwCompSwapChainTarget@@OKA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x1801E4458 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 */

CHwCompSwapChainTarget *__fastcall CHwCompSwapChainTarget::`vector deleting destructor'(
        CHwCompSwapChainTarget *this,
        char a2)
{
  CHwCompSwapChainTarget::~CHwCompSwapChainTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
