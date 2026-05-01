/*
 * XREFs of ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180020C88
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ??$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@12@AEAPEAUIComPoolTask@Internal@Windows@@@Z @ 0x180020B0C (--$Make@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@34@@Details@WRL@Mi.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180020BE8 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(
        IUnknown *a1,
        struct Windows::Internal::IComPoolTask **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  signed int v6; // edi
  struct Windows::Internal::IComPoolTask *v7; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  char v15; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Internal::IComPoolTask *v16; // [rsp+68h] [rbp+38h]
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  IUnknown *v18; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_3:
    v7 = v16;
    goto LABEL_4;
  }
  *v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_DWORD *)v4 + 3) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v18 = a1;
  *v5 = &Windows::Internal::ComTaskPool::CRemoteTask::`vftable';
  v5[2] = 0LL;
  v5[3] = 0LL;
  v9 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CRemoteReleaseStub,Windows::Internal::IComPoolTask * &>(
                 (__int64)&v17,
                 &v18);
  v10 = 0LL;
  if ( &v15 != v9 )
  {
    v10 = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
  }
  v11 = v5[3];
  v5[3] = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 16LL))(v11 + 16);
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 16LL))(v12 + 16);
  }
  v13 = v5[3];
  v6 = v13 == 0 ? 0x8007000E : 0;
  if ( v13 )
    v6 = AgileGitPtr::Initialize(
           (AgileGitPtr *)(v5 + 2),
           &GUID_00000000_0000_0000_c000_000000000046,
           (struct IUnknown *)((v13 + 16) & -(__int64)(v13 != 0)));
  v14 = *v5;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(v14 + 8))(v5);
    v16 = (struct Windows::Internal::IComPoolTask *)v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(v14 + 16))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  v7 = 0LL;
  *a2 = v16;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
