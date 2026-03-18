/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x1800216A8
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x180024F10 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1801E3F80 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 *     ??_ECD3DLockableTexture@@MEAAPEAXI@Z @ 0x1801EB240 (--_ECD3DLockableTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  void *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx

  *(_QWORD *)this = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 46);
    if ( v3 )
    {
      do
      {
        ReleaseInterfaceNoNULL<CD3DSurface>(*(_QWORD *)(*((_QWORD *)this + 24)
                                                      + 8LL * (unsigned int)--*((_DWORD *)this + 46)));
        v3 = *((_DWORD *)this + 46);
      }
      while ( v3 );
      v2 = (void *)*((_QWORD *)this + 24);
    }
    *((_DWORD *)this + 46) = v3 - 1;
    operator delete(v2);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 15));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 25));
  v4 = *((_QWORD *)this + 27);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 26));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 28));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 29));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
