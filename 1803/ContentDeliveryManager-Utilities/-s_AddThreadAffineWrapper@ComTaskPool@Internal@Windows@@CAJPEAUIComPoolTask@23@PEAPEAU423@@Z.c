/*
 * XREFs of ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180004954
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000462C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x1800047F8 (-RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(
        IUnknown *a1,
        struct Windows::Internal::IComPoolTask **a2)
{
  struct Windows::Internal::IComPoolTask *v4; // rax
  struct Windows::Internal::IComPoolTask *v5; // rbx
  int v6; // edi
  struct Windows::Internal::IComPoolTask *v7; // rcx
  bool v9; // zf
  __int64 v10; // rax
  struct Windows::Internal::IComPoolTask *v11; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v11 = 0LL;
  v4 = (struct Windows::Internal::IComPoolTask *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_3:
    v7 = v11;
    goto LABEL_4;
  }
  v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  *((_DWORD *)v4 + 3) = 1;
  if ( !v9 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v4 = &Windows::Internal::ComTaskPool::CRemoteTask::`vftable';
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  v6 = Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(v4, a1);
  v10 = *(_QWORD *)v5;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(v10 + 8))(v5);
    v11 = v5;
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(v10 + 16))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  v7 = 0LL;
  *a2 = v11;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
