/*
 * XREFs of ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1801BF860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801BDB14 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x1801BF168 (--1CMotion@@QEAA@XZ.c)
 */

CWeakReferenceBase **__fastcall CInteractionTrackerScaleAnimation::`vector deleting destructor'(
        CWeakReferenceBase **this,
        char a2)
{
  CMotion::~CMotion((CMotion *)(this + 51));
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly((dataproviderBamoConnection *)this);
    else
      operator delete(this);
  }
  return this;
}
