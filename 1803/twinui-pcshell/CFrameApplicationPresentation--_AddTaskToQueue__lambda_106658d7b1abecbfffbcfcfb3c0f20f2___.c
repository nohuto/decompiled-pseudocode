/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0f20f2___ @ 0x180011EE8
 * Callers:
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180013EA0 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0f20f2___(
        _DWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // r13
  _DWORD *v5; // r12
  __int64 v6; // r14
  void *v7; // rbx
  _DWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // r15
  void (*v11)(void); // rax
  signed int v12; // edi
  __int64 (__fastcall *v13)(void *); // rax
  void (__fastcall *v14)(_DWORD *); // rax
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-69h]
  __int64 v18; // [rsp+20h] [rbp-69h]
  unsigned int v19; // [rsp+28h] [rbp-61h]
  __int64 v20; // [rsp+30h] [rbp-59h]
  _QWORD v21[3]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  char v23; // [rsp+58h] [rbp-31h]
  char v24; // [rsp+59h] [rbp-30h]
  char v25; // [rsp+60h] [rbp-29h]
  __int64 v26; // [rsp+68h] [rbp-21h]
  __int64 v27; // [rsp+70h] [rbp-19h]
  _DWORD *v28; // [rsp+78h] [rbp-11h]
  __int64 v29; // [rsp+80h] [rbp-9h]
  void *v30; // [rsp+88h] [rbp-1h]
  __int64 v31; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v33; // [rsp+F0h] [rbp+67h]
  char v34; // [rsp+100h] [rbp+77h]
  char v35; // [rsp+108h] [rbp+7Fh]

  v27 = -2LL;
  v4 = a2 + 1;
  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    return 2147947423LL;
  }
  else
  {
    v28 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = a1;
    v21[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v21[1] = a1;
    v18 = *a2;
    v21[2] = *a2;
    v6 = *v4;
    v22 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v33 = *((_BYTE *)a2 + 16);
    v23 = v33;
    v34 = *((_BYTE *)a2 + 17);
    v24 = v34;
    v35 = *((_BYTE *)a2 + 24);
    v25 = v35;
    v20 = a2[4];
    v26 = v20;
    v19 = a1[12];
    v7 = 0LL;
    v29 = 0LL;
    v8 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    v10 = 0LL;
    if ( v8 )
    {
      *(_QWORD *)v8 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      v8[3] = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v11 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v11 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v11();
      }
      *v9 = off_18031D5A0;
      v9[2] = 0LL;
      if ( v9 + 2 != v21 )
      {
        v9[2] = a1;
        v5 = 0LL;
        v21[0] = 0LL;
      }
      v9[3] = a1;
      v9[4] = v18;
      v9[5] = 0LL;
      if ( v9 + 5 != &v22 )
      {
        v9[5] = v6;
        v6 = 0LL;
        v22 = 0LL;
      }
      *((_BYTE *)v9 + 48) = v33;
      *((_BYTE *)v9 + 49) = v34;
      *((_BYTE *)v9 + 56) = v35;
      v9[8] = v20;
      v7 = v9;
      v10 = v9;
    }
    v30 = v7;
    v12 = v10 == 0LL ? 0x8007000E : 0;
    if ( v10 )
    {
      v31 = 0LL;
      v12 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v19, v7, v18);
      v13 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL);
      if ( v13 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
      else
        v13(v7);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v12 >= 0 )
      ++a1[51];
    v14 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(a1);
    else
      v14(a1);
    v15 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return (unsigned int)v12;
  }
}
