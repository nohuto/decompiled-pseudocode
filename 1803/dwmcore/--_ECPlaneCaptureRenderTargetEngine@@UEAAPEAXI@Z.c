/*
 * XREFs of ??_ECPlaneCaptureRenderTargetEngine@@UEAAPEAXI@Z @ 0x18015B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18000D6E8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CPlaneCaptureRenderTargetEngine *__fastcall CPlaneCaptureRenderTargetEngine::`vector deleting destructor'(
        CPlaneCaptureRenderTargetEngine *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 60);
  if ( v4 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 59);
  if ( v5 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
