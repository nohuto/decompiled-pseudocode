/*
 * XREFs of ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x180004544
 * Callers:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x1800046A4 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180004224 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(
        Windows::Internal::ComTaskPool::CRemoteTask *this,
        IUnknown *a2)
{
  IUnknown **v2; // rdi
  IUnknown **v5; // rbx
  bool v6; // zf
  __int64 v7; // rax
  struct IUnknown *v8; // r8
  __int64 result; // rax

  v2 = 0LL;
  v5 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v5 )
  {
    *v5 = (IUnknown *)&CThreadRefTaker::`vftable';
    SHGetThreadRef(v5 + 1);
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v5[2] = (IUnknown *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    *((_DWORD *)v5 + 7) = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v5 = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
    v5[2] = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
    v5[4] = a2;
    if ( a2 )
      ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    *((_BYTE *)v5 + 40) = 0;
    v2 = v5;
  }
  v7 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 16LL))(v7 + 16);
  v8 = (struct IUnknown *)*((_QWORD *)this + 3);
  result = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
    return AgileGitPtr::Initialize(
             (Windows::Internal::ComTaskPool::CRemoteTask *)((char *)this + 16),
             &GUID_00000000_0000_0000_c000_000000000046,
             v8 + 2);
  return result;
}
