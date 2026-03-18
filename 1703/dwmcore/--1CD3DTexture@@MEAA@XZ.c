/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x180045C50
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x18007D1E0 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x180195E30 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  bool v1; // zf
  CMILPoolResource *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 25) == 0LL;
  *(_QWORD *)this = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  if ( !v1 )
  {
    while ( *((_DWORD *)this + 48) )
    {
      v3 = *(CMILPoolResource **)(*((_QWORD *)this + 25) + 8LL * (unsigned int)--*((_DWORD *)this + 48));
      if ( v3 )
        CMILPoolResource::Release(v3);
    }
    --*((_DWORD *)this + 48);
    WPF::ProcessHeapImpl::Free(*((void **)this + 25));
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 16));
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 27));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 30));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 31));
  CD3DResource::~CD3DResource(this);
}
