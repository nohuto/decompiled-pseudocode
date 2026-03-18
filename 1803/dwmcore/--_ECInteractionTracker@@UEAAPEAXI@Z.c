/*
 * XREFs of ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x1801934F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180193288 (--1CInteractionTracker@@UEAA@XZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::`vector deleting destructor'(CInteractionTracker *this, char a2)
{
  CInteractionTracker::~CInteractionTracker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
