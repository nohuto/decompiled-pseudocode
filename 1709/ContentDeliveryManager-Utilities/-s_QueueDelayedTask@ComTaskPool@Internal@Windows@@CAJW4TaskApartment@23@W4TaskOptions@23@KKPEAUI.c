/*
 * XREFs of ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004A10
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004378 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ??$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEAW4TaskOptions@34@AEAKAEAKAEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@AEAK3AEAPEAUIComPoolTask@56@@Z @ 0x1800166D0 (--$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_QueueDelayedTask(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  bool v9; // zf
  unsigned int v10; // edi
  unsigned int v11; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rcx
  int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+78h] [rbp+38h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v6 = a6;
  if ( a6 )
    *a6 = 0LL;
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_9;
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v8 )
  {
    v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    *((_DWORD *)v8 + 3) = 1;
    if ( !v9 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v8 = &Windows::Internal::ComTaskPool::CDelayedTaskLifetime::`vftable';
    v8[2] = 0LL;
    v7 = v8;
  }
  v10 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
LABEL_9:
    a6 = 0LL;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CDelayedTask,Windows::Internal::ComTaskPool::CDelayedTask,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &,unsigned long &,unsigned long &,Windows::Internal::IComPoolTask * &>(
            (unsigned int)&a6,
            (unsigned int)&v16,
            (unsigned int)&v17,
            (unsigned int)&v18,
            (__int64)&v19,
            (__int64)&a5);
    v12 = a6;
    v10 = v11;
    if ( v7 )
    {
      if ( (_QWORD *)v7[2] != a6 )
      {
        v13 = a6;
        if ( a6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*a6 + 8LL))(a6);
          v12 = a6;
        }
        v14 = v7[2];
        v7[2] = v13;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 16LL))(v14, v12);
          v12 = a6;
        }
      }
      *v6 = v7;
    }
    if ( v12 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
  }
  return v10;
}
