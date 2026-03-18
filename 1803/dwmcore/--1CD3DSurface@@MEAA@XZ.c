/*
 * XREFs of ??1CD3DSurface@@MEAA@XZ @ 0x1800431B4
 * Callers:
 *     ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x1800434B0 (--_ECD3DSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DSurface::~CD3DSurface(CD3DSurface *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CD3DSurface::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 15) = &CD3DSurface::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 16));
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 25));
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 27));
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
