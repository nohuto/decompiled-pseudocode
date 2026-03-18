/*
 * XREFs of ??1CManipulationManager@@EEAA@XZ @ 0x1801955EC
 * Callers:
 *     ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x1801958E0 (--_ECManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180130154 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x180195768 (--1MCCollections@@QEAA@XZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x1801983D4 (-ShutDownManipulationThread@CManipulationManager@@AEAAXXZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  char *v2; // rbx
  __int64 v3; // rbp
  char *v4; // rcx
  __int64 v5; // rax
  int i; // ebx

  *(_QWORD *)this = &CManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 33);
  v2 = (char *)this + 200;
  do
  {
    v3 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v4 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 != v2 )
    {
      v3 = *((_QWORD *)v4 + 2);
      WPF::ProcessHeapImpl::Free(v4);
      --*((_DWORD *)this + 54);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( *((_QWORD *)this + 23) )
  {
    for ( i = 0; i < *((_DWORD *)this + 48); ++i )
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*((_QWORD *)this + 23) + 8LL * i));
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
