/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x18016E790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x18016D9D0 (--1CInk@@UEAA@XZ.c)
 */

CInk *__fastcall CInk::`vector deleting destructor'(CInk *this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
