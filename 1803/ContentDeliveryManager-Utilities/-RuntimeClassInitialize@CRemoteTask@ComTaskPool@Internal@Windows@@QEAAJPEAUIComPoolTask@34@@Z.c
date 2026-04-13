/*
 * XREFs of ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x1800047F8
 * Callers:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180004954 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180004500 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(
        Windows::Internal::ComTaskPool::CRemoteTask *this,
        IUnknown *a2)
{
  IUnknown **v4; // rax
  struct IUnknown *v5; // r8
  IUnknown **v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 result; // rax

  v4 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    *v4 = (IUnknown *)&CThreadRefTaker::`vftable';
    SHGetThreadRef(v4 + 1);
    v7 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v6[2] = (IUnknown *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    *((_DWORD *)v6 + 7) = 1;
    if ( !v7 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v6 = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
    v6[2] = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
    v6[4] = a2;
    if ( a2 )
      ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    *((_BYTE *)v6 + 40) = 0;
    v5 = (struct IUnknown *)v6;
  }
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v5;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 16) + 16LL))(v8 + 16);
    v5 = (struct IUnknown *)*((_QWORD *)this + 3);
  }
  result = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
    return AgileGitPtr::Initialize(
             (Windows::Internal::ComTaskPool::CRemoteTask *)((char *)this + 16),
             &GUID_00000000_0000_0000_c000_000000000046,
             v5 + 2);
  return result;
}
