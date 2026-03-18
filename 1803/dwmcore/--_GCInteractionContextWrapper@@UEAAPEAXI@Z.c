/*
 * XREFs of ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x180025370
 * Callers:
 *     ??_ECInteractionContextWrapper@@W7EAAPEAXI@Z @ 0x1800DDDD0 (--_ECInteractionContextWrapper@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800252B4 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
