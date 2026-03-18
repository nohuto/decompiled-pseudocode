/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x18019242C
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180192634 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x1800CC214 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1801925C0 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  int i; // edi
  void *v4; // rcx
  int j; // edi
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBase'};
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 15);
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = 0; i < *((_DWORD *)this + 26); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 12) + 16LL * i));
    WPF::ProcessHeapImpl::Free(*((void **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
  if ( *((_QWORD *)this + 8) )
  {
    for ( j = 0; j < *((_DWORD *)this + 20); ++j )
      Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*((_QWORD *)this + 9) + 8LL * j);
    WPF::ProcessHeapImpl::Free(*((void **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 20) = 0;
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
