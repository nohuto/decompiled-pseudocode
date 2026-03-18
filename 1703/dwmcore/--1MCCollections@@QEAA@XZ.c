/*
 * XREFs of ??1MCCollections@@QEAA@XZ @ 0x180189FD8
 * Callers:
 *     ??1CManipulationManager@@EEAA@XZ @ 0x180189DE0 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18018A09C (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall MCCollections::~MCCollections(MCCollections *this)
{
  void *v2; // rcx
  void *v3; // rcx
  int i; // edi
  int j; // edi
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  if ( *((_QWORD *)this + 3) )
  {
    for ( i = 0; i < *((_DWORD *)this + 8); ++i )
      Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'(*((_QWORD *)this + 3) + 8LL * i);
    WPF::ProcessHeapImpl::Free(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  if ( *(_QWORD *)this )
  {
    for ( j = 0; j < *((_DWORD *)this + 4); ++j )
      Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'(*((_QWORD *)this + 1) + 8LL * j);
    WPF::ProcessHeapImpl::Free(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
