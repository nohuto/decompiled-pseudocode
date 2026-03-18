/*
 * XREFs of ??_GCPlaneCaptureRenderTarget@@EEAAPEAXI@Z @ 0x18016E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CPlaneCaptureRenderTarget *__fastcall CPlaneCaptureRenderTarget::`scalar deleting destructor'(
        CPlaneCaptureRenderTarget *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CPlaneCaptureRenderTarget::`vftable';
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
