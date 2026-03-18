/*
 * XREFs of ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x180148C00
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::`vector deleting destructor'(
        CCrossThreadComposition *this,
        char a2)
{
  CComposition::~CComposition(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
