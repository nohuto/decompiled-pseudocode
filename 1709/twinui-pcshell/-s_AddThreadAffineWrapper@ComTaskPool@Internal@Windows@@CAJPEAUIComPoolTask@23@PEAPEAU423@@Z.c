/*
 * XREFs of ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180021878
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x18002176C (-RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(
        IUnknown *a1,
        struct Windows::Internal::IComPoolTask **a2)
{
  Windows::Internal::ComTaskPool::CRemoteTask *v4; // rax
  Windows::Internal::ComTaskPool::CRemoteTask *v5; // rbx
  int v6; // edi
  struct Windows::Internal::IComPoolTask *v7; // rcx
  __int64 v9; // rax
  struct Windows::Internal::IComPoolTask *v10; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v10 = 0LL;
  v4 = (Windows::Internal::ComTaskPool::CRemoteTask *)operator new(
                                                        0x20uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_3:
    v7 = v10;
    goto LABEL_4;
  }
  *(_QWORD *)v4 = &IAppViewDataSourceAdapter::`vftable';
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  *((_DWORD *)v4 + 3) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = &Windows::Internal::ComTaskPool::CRemoteTask::`vftable';
  *((_QWORD *)v5 + 2) = 0LL;
  *((_QWORD *)v5 + 3) = 0LL;
  v6 = Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(v5, a1);
  v9 = *(_QWORD *)v5;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CRemoteTask *))(v9 + 8))(v5);
    v10 = v5;
    (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CRemoteTask *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CRemoteTask *))(v9 + 16))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  v7 = 0LL;
  *a2 = v10;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
