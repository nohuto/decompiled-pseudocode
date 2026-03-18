/*
 * XREFs of ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180152E80
 * Callers:
 *     ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801530E0 (--_EDataProviderRegistrarConnection@@UEAAPEAXI@Z.c)
 *     ??_GdataproviderBamoConnection@@UEAAPEAXI@Z @ 0x180153140 (--_GdataproviderBamoConnection@@UEAAPEAXI@Z.c)
 *     ??_GBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180153180 (--_GBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C93FC (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl(
        Microsoft::BamoImpl::BamoConnectionImpl *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = (wil::details *)*((_QWORD *)this + 10);
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 8);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
