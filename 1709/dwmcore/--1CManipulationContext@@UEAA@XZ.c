/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x1801A0EC8
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x1801A10AC (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18016AB58 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x1801A10DC (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  int i; // edi
  void *v5; // rcx
  int j; // edi
  void *v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBase'};
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 15);
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = 0; i < *((_DWORD *)this + 26); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 12) + 16LL * i), v3);
    WPF::ProcessHeapImpl::Free(*((void **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
  if ( *((_QWORD *)this + 8) )
  {
    for ( j = 0; j < *((_DWORD *)this + 20); ++j )
      Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 9) + 8LL * j));
    WPF::ProcessHeapImpl::Free(*((void **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 9);
  if ( v7 )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 20) = 0;
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
