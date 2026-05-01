/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEAW4TaskOptions@34@AEAKAEAKAEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@AEAK3AEAPEAUIComPoolTask@56@@Z @ 0x180021CA8
 * Callers:
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180021DD0 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 * Callees:
 *     ?RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4TaskOptions@34@KKPEAUIComPoolTask@34@@Z @ 0x180021B60 (-RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4Tas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CDelayedTask,Windows::Internal::ComTaskPool::CDelayedTask,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &,unsigned long &,unsigned long &,Windows::Internal::IComPoolTask * &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        DWORD *a5,
        __int64 *a6)
{
  __int64 v8; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int v13; // esi
  __int64 v14; // rax

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *a1 = 0LL;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 3) = 1;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v12[2] = 0LL;
    v12[3] = 0LL;
    *v12 = &Windows::Internal::ComTaskPool::CDelayedTask::`vftable';
    v12[4] = 0LL;
    v13 = Windows::Internal::ComTaskPool::CDelayedTask::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
    v14 = *v12;
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(v14 + 8))(v12);
      *a1 = (__int64)v12;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v14 + 16))(v12);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
