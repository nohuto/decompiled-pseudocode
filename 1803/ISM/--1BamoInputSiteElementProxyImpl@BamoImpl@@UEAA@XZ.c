/*
 * XREFs of ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x18000DD38
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18000DCB0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 *     ??_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18000DDD0 (--_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl(
        BamoImpl::BamoInputSiteElementProxyImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v6 )
    (**v6)(v6);
}
