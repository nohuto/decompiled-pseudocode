/*
 * XREFs of ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801D9BAC
 * Callers:
 *     ??_ECInteractionRoot@@W7EAAPEAXI@Z @ 0x1800DDDE0 (--_ECInteractionRoot@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180025008 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x180028CB0 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CNaturalAnimationScalarForceAdapater **__fastcall CInteractionRoot::`scalar deleting destructor'(
        CNaturalAnimationScalarForceAdapater **this,
        char a2)
{
  CInteractionProcessor::~CInteractionProcessor(this + 4);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this + 3);
  this[1] = (CNaturalAnimationScalarForceAdapater *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly((dataproviderBamoConnection *)this);
    else
      operator delete(this);
  }
  return this;
}
