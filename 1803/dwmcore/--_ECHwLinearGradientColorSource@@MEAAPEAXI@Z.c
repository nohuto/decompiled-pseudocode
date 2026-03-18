/*
 * XREFs of ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x1801F71F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CHwLinearGradientColorSource *__fastcall CHwLinearGradientColorSource::`vector deleting destructor'(
        CHwLinearGradientColorSource *this,
        char a2)
{
  CMILPoolResource *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHwLinearGradientColorSource::`vftable';
  ReleaseInterfaceNoNULL<CD3DSurface>(*((_QWORD *)this + 18));
  v4 = (CMILPoolResource *)*((_QWORD *)this + 19);
  if ( v4 )
    CMILPoolResource::Release(v4);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
