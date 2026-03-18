/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180076F7C
 * Callers:
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x180076570 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x180075D2C (-TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18007641C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x1800C3FD8 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  bool v1; // zf
  void *v3; // rcx

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 43);
  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
  CCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry((LPCWSTR *)this + 6);
  v3 = (void *)*((_QWORD *)this + 42);
  if ( v3 )
    WPF::ProcessHeapImpl::Free(v3);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 10);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
