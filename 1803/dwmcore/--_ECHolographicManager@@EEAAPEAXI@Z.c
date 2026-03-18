/*
 * XREFs of ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1801F7B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1801F7A8C (--1CHolographicManager@@EEAA@XZ.c)
 */

CHolographicManager *__fastcall CHolographicManager::`vector deleting destructor'(CHolographicManager *this, char a2)
{
  CHolographicManager::~CHolographicManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
