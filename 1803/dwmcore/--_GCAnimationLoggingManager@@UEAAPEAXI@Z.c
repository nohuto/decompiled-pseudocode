/*
 * XREFs of ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x18017FC10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x18017FB2C (--1CAnimationLoggingManager@@UEAA@XZ.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::`scalar deleting destructor'(
        CAnimationLoggingManager *this,
        char a2)
{
  CAnimationLoggingManager::~CAnimationLoggingManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
