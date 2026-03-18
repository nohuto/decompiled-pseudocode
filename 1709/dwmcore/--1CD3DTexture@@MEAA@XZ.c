/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x180082194
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x180081A40 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1801A8AF0 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 24) == 0LL;
  *(_QWORD *)this = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  if ( !v1 )
  {
    while ( *((_DWORD *)this + 46) )
      ReleaseInterfaceNoNULL<CD3DSurface>(*(_QWORD *)(*((_QWORD *)this + 24)
                                                    + 8LL * (unsigned int)--*((_DWORD *)this + 46)));
    --*((_DWORD *)this + 46);
    WPF::ProcessHeapImpl::Free(*((void **)this + 24));
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 15));
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 27);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 26));
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 28));
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 29));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
