/*
 * XREFs of ??1CManipulationManager@@EEAA@XZ @ 0x180189DE0
 * Callers:
 *     ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x18018A0C0 (--_ECManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18014448C (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x180189FD8 (--1MCCollections@@QEAA@XZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x18018B520 (-ShutDownManipulationThread@CManipulationManager@@AEAAXXZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 **v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rcx
  __int64 v11; // rax
  int i; // ebx

  *(_QWORD *)this = &CManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  v2 = *((_QWORD *)this + 49);
  if ( v2 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 46);
  if ( v4 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 45);
  if ( v5 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 43);
  if ( v6 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 42);
  if ( v7 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 33);
  v8 = (__int64 **)((char *)this + 200);
  do
  {
    v9 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v10 = *v8;
    v11 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v8 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v8;
    if ( v10 != (__int64 *)v8 )
    {
      v9 = v10[2];
      WPF::ProcessHeapImpl::Free(v10);
      --*((_DWORD *)this + 54);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  }
  while ( v9 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( *((_QWORD *)this + 23) )
  {
    for ( i = 0; i < *((_DWORD *)this + 48); ++i )
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)(*((_QWORD *)this + 23) + 8LL * i));
    WPF::ProcessHeapImpl::Free(*((void **)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 120));
  CMmcssTask::UnloadRuntime((CManipulationManager *)((char *)this + 40));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
