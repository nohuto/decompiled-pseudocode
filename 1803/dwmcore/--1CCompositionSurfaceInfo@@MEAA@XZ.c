/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180081074
 * Callers:
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1800805C0 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x1800824A4 (-TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180082BA8 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rdi
  PVOID v5; // rax
  void *v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 5);
    v4 = *((_QWORD *)this + 3);
    v7[1] = 0LL;
    v7[0] = v3;
    v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v4 + 8), v7);
    if ( v5 )
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v4 + 8), v5);
    CloseHandle(*((HANDLE *)this + 4));
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 360);
  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
  CCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry((CCompositionSurfaceInfo *)((char *)this + 48));
  v6 = (void *)*((_QWORD *)this + 42);
  if ( v6 )
    operator delete(v6);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
