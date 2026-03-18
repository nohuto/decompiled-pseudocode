/*
 * XREFs of ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180148C50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x18014883C (--1CDebugFrameCounter@@UEAA@XZ.c)
 */

CDebugFrameCounter *__fastcall CDebugFrameCounter::`vector deleting destructor'(CDebugFrameCounter *this, char a2)
{
  CDebugFrameCounter::~CDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
