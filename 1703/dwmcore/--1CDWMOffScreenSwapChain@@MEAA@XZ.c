/*
 * XREFs of ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800CEA8C
 * Callers:
 *     ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1800CEC30 (--_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(CDWMOffScreenSwapChain *this)
{
  void *v2; // rdi
  HANDLE CurrentProcess; // rax
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  HMODULE v7; // rcx

  *(_QWORD *)this = &CDWMOffScreenSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 37);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 50);
  v2 = (void *)*((_QWORD *)this + 49);
  if ( v2 && *((_QWORD *)this + 58) )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v2);
  }
  v4 = (void *)*((_QWORD *)this + 48);
  if ( v4 )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 60);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 60) = 0LL;
  }
  v6 = *((_QWORD *)this + 61);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 61) = 0LL;
  }
  v7 = (HMODULE)*((_QWORD *)this + 57);
  if ( v7 )
    FreeLibrary(v7);
  CSwapChainBase::~CSwapChainBase(this);
}
