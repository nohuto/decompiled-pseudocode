/*
 * XREFs of ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x18002176C
 * Callers:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180021878 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800216CC (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(
        Windows::Internal::ComTaskPool::CRemoteTask *this,
        IUnknown *a2)
{
  IUnknown **v2; // rdi
  IUnknown **v5; // rbx
  __int64 v6; // rax
  struct IUnknown *v7; // r8
  __int64 result; // rax

  v2 = 0LL;
  v5 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = (IUnknown *)&CThreadRefTaker::`vftable';
    SHGetThreadRef(v5 + 1);
    *((_DWORD *)v5 + 7) = 1;
    v5[2] = (IUnknown *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
    v5[2] = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
    v5[4] = a2;
    if ( a2 )
      ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    *((_BYTE *)v5 + 40) = 0;
    v2 = v5;
  }
  v6 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v2;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 16LL))(v6 + 16);
  v7 = (struct IUnknown *)*((_QWORD *)this + 3);
  result = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    return AgileGitPtr::Initialize(
             (Windows::Internal::ComTaskPool::CRemoteTask *)((char *)this + 16),
             &GUID_00000000_0000_0000_c000_000000000046,
             v7 + 2);
  return result;
}
