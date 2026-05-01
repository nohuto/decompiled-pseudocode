/*
 * XREFs of ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18006B50C
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006B324 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(
        CFrameApplicationPresentation *this)
{
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  int v4; // eax
  DWORD v5; // ebp
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx
  DWORD v12; // [rsp+90h] [rbp+8h] BYREF
  IUnknown *v13; // [rsp+98h] [rbp+10h]
  CFrameApplicationPresentation *v14; // [rsp+A0h] [rbp+18h]
  __int64 v15; // [rsp+A8h] [rbp+20h]

  if ( *(_DWORD *)dword_1802B8F94 == -1 )
  {
    v12 = 4;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
               L"SuppressedSplashScreenTimeout",
               0x10u,
               0LL,
               dword_1802B8F94,
               &v12);
    v3 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v3 = ValueW;
    v4 = *(_DWORD *)dword_1802B8F94;
    if ( v3 < 0 )
      v4 = 400;
    *(_DWORD *)dword_1802B8F94 = v4;
  }
  v14 = this;
  if ( this )
  {
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  }
  v5 = *(_DWORD *)dword_1802B8F94;
  v6 = 0LL;
  v15 = 0LL;
  v7 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v7[1].lpVtbl) = 1;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)off_1801FEF80;
    v8[2].lpVtbl = (struct IUnknownVtbl *)this;
    if ( this )
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v8[3].lpVtbl = (struct IUnknownVtbl *)this;
    v6 = v8;
  }
  v13 = v6;
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v5, v6, 0LL);
  if ( v6 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  }
  if ( this )
  {
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
    v14 = 0LL;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  return v10;
}
