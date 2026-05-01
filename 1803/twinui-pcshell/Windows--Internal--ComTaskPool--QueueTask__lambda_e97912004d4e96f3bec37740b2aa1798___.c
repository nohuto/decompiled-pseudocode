/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___ @ 0x180010C00
 * Callers:
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180013CD0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  void *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  void (*v10)(void); // rax
  _QWORD *v11; // rsi
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 (__fastcall *v14)(void *); // rax

  v6 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    *v7 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v10 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v10();
    }
    *v8 = off_180318B88;
    v8[2] = 0LL;
    if ( v8 + 2 != a4 )
    {
      v8[2] = *a4;
      *a4 = 0LL;
    }
    v8[3] = a4[1];
    v8[4] = a4[2];
    v11 = a4 + 3;
    v8[5] = 0LL;
    if ( v8 + 5 != v11 )
    {
      v8[5] = *v11;
      *v11 = 0LL;
    }
    v6 = v8;
    v9 = v8;
  }
  result = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, a3);
  v13 = result;
  if ( v9 )
  {
    v14 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL);
    if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
    else
      v14(v6);
    return v13;
  }
  return result;
}
