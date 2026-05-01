/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f__&___ptr64_ @ 0x18000F4F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___::Run @ 0x180019690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f______ptr64_(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  PVOID v5; // r15
  __int64 v6; // r14
  unsigned int v7; // r12d
  void *v8; // rsi
  _DWORD *v9; // rdi
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // rbp
  void (*v13)(void); // rax
  unsigned int v14; // edi
  __int64 (__fastcall *v15)(void *); // rax
  PVOID v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  PVOID v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h]

  v19 = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v20 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v5 = Ptr;
    v17 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v6 = *a2;
    v18 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (unsigned int)v3[15].Ptr;
    v8 = 0LL;
    v21 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( v9 )
    {
      *(_QWORD *)v9 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      v9[3] = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v13 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v13 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v13();
      }
      *(_QWORD *)v9 = off_180318AF8;
      *((_QWORD *)v9 + 2) = 0LL;
      if ( v9 + 4 != (_DWORD *)&v17 )
      {
        *((_QWORD *)v9 + 2) = Ptr;
        v5 = 0LL;
        v17 = 0LL;
      }
      *((_QWORD *)v9 + 3) = 0LL;
      if ( v9 + 6 != (_DWORD *)&v18 )
      {
        *((_QWORD *)v9 + 3) = v6;
        v6 = 0LL;
        v18 = 0LL;
      }
      v8 = v9;
      v10 = v9;
      v11 = v9;
      v12 = v9;
    }
    if ( v10 )
    {
      v19 = 0LL;
      v14 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v7, v8, -2LL, v8, v17, v18);
      Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v19);
      v11 = v12;
    }
    else
    {
      v14 = -2147024882;
    }
    if ( v11 )
    {
      v15 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL);
      if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
      else
        v15(v8);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v14 = -2147023728;
  }
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v14;
}
