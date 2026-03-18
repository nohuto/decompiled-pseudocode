/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800286B8
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x1800DDC70 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800285B0 (--1CInteraction@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
