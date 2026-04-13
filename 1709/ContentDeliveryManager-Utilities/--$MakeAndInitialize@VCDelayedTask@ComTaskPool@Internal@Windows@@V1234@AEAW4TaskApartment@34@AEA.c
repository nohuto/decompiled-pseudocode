/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEAW4TaskOptions@34@AEAKAEAKAEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@AEAK3AEAPEAUIComPoolTask@56@@Z @ 0x1800166D0
 * Callers:
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004A10 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 * Callees:
 *     ?RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4TaskOptions@34@KKPEAUIComPoolTask@34@@Z @ 0x180004844 (-RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4Tas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
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
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  int v13; // esi
  bool v14; // zf
  __int64 v15; // rax

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *a1 = 0LL;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v14 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( !v14 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *(_QWORD *)v11 = &Windows::Internal::ComTaskPool::CDelayedTask::`vftable';
    *((_QWORD *)v11 + 4) = 0LL;
    v13 = Windows::Internal::ComTaskPool::CDelayedTask::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    v15 = *(_QWORD *)v12;
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v15 + 8))(v12);
      *a1 = (__int64)v12;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
      return 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v15 + 16))(v12);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
