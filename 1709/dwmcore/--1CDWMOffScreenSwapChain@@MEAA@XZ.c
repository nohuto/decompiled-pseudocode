/*
 * XREFs of ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1801B0E7C
 * Callers:
 *     ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1801B0FB0 (--_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  ReleaseInterface<IBitmapLock>((__int64 *)this + 52);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 56);
  v2 = (void *)*((_QWORD *)this + 55);
  if ( v2 && *((_QWORD *)this + 64) )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v2);
  }
  v4 = (void *)*((_QWORD *)this + 54);
  if ( v4 )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 66);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 66) = 0LL;
  }
  v6 = *((_QWORD *)this + 67);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 67) = 0LL;
  }
  v7 = (HMODULE)*((_QWORD *)this + 63);
  if ( v7 )
    FreeLibrary(v7);
  CSwapChainBase::~CSwapChainBase(this);
}
