/*
 * XREFs of ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x1801EAD60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800D875C (--1CDWMSwapChain@@MEAA@XZ.c)
 */

CDWMSwapChainDDA *__fastcall CDWMSwapChainDDA::`scalar deleting destructor'(CDWMSwapChainDDA *this, char a2)
{
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
