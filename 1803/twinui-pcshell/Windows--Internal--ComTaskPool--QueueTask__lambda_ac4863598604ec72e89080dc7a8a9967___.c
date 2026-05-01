/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x180016210
 * Callers:
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ??_E?$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800037F0 (--_E-$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_G?$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001D470 (--_G-$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_E?$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001DA30 (--_E-$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??_E?$CTaskWrapper@V_lambda_212ff9793df855e45456e1ed2b184a0d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180054700 (--_E-$CTaskWrapper@V_lambda_212ff9793df855e45456e1ed2b184a0d_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800547E0 (--_E-$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  void (*v9)(void); // rax
  _QWORD *v10; // rsi
  __int64 result; // rax
  volatile int *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 (__fastcall *v16)(void *); // rax
  __int64 (__fastcall *v17)(void *); // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v22; // rcx

  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v9 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      else
        v9();
    }
    *v8 = off_18031F0E8;
    v8[2] = 0LL;
    if ( v8 + 2 != a4 )
    {
      v8[2] = *a4;
      *a4 = 0LL;
    }
    v8[3] = a4[1];
    v10 = a4 + 2;
    v8[4] = 0LL;
    if ( v8 + 4 != v10 )
    {
      v8[4] = *v10;
      *v10 = 0LL;
    }
    v6 = v8;
  }
  result = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, a3);
  v15 = result;
  if ( v6 )
  {
    v16 = *(__int64 (__fastcall **)(void *))(*v6 + 16LL);
    if ( v16 != Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
    {
      v22 = (struct Microsoft::WRL::Details::ModuleBase *)v6;
      goto LABEL_43;
    }
    if ( Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v6 + 12), v12) )
      return v15;
    v17 = *(__int64 (__fastcall **)(void *))(*v6 + 32LL);
    if ( v17 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_323d14d606b14d2939124d398e1f4aa2_>::`scalar deleting destructor' )
    {
      v18 = v6[2];
      if ( v18 )
      {
        v6[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      *((_DWORD *)v6 + 3) = -1073741823;
      operator delete(v6, (const struct std::nothrow_t *)0x20);
LABEL_39:
      v22 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v16 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        v12 = (volatile int *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount;
        if ( (char *)v16 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        {
          _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          return v15;
        }
LABEL_43:
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *, __int64, __int64, _QWORD *))v16)(
          v22,
          v12,
          v13,
          v14,
          v6);
        return v15;
      }
      return v15;
    }
    if ( v17 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_33ae1f57d3bf46c1270e08142e9d9c0c_>::`vector deleting destructor' )
    {
      v19 = v6[3];
      if ( v19 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      if ( v17 != Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac4863598604ec72e89080dc7a8a9967_>::`vector deleting destructor' )
      {
        if ( v17 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor' )
        {
          Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor'(v6);
        }
        else if ( v17 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_212ff9793df855e45456e1ed2b184a0d_>::`vector deleting destructor' )
        {
          Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_212ff9793df855e45456e1ed2b184a0d_>::`vector deleting destructor'(v6);
        }
        else if ( v17 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c35d5355421e51b91e1b7dc40faf7951_>::`scalar deleting destructor' )
        {
          Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c35d5355421e51b91e1b7dc40faf7951_>::`scalar deleting destructor'(v6);
        }
        else if ( v17 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor' )
        {
          Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(v6);
        }
        else if ( (char *)v17 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor' )
        {
          Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor'(
            v6,
            1);
        }
        else
        {
          ((void (__fastcall *)(_QWORD *, __int64))v17)(v6, 1LL);
        }
        goto LABEL_39;
      }
      v20 = v6[4];
      if ( v20 )
      {
        v6[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = v6[2];
      if ( v21 )
      {
        v6[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    *((_DWORD *)v6 + 3) = -1073741823;
    operator delete(v6, (const struct std::nothrow_t *)0x28);
    goto LABEL_39;
  }
  return result;
}
