/*
 * XREFs of ??_GCCoRenderVisualProxy@@EEAAPEAXI@Z @ 0x18014AF50
 * Callers:
 *     ??_ECCoRenderVisualProxy@@G7EAAPEAXI@Z @ 0x1800DD450 (--_ECCoRenderVisualProxy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCoRenderVisualProxy *__fastcall CCoRenderVisualProxy::`scalar deleting destructor'(
        CCoRenderVisualProxy *this,
        char a2)
{
  *(_QWORD *)this = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
  *((_QWORD *)this + 1) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
