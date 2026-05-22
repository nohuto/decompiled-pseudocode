/*
 * XREFs of ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800670F0
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18006677C (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180067530 (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@AEAK@Z @ 0x18006788C (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA-AV-$ComPtr@VS.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180068274 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180068C8C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCRawInputProvider::OnCompositorRunningStateChanged(MPCRawInputProvider *this, char a2)
{
  int *v3; // rsi
  int v4; // eax
  SpectrumListener *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rcx
  int v12; // esi
  int v13; // eax
  char v14; // dl
  SpeechRuntimeListener *v15; // rcx
  SpectrumListener *v16; // rcx
  volatile signed __int32 *v17; // rcx
  SpeechRuntimeListener *v18; // rcx
  int v19; // eax
  int v20[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v23; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp+20h] BYREF

  v21 = -2LL;
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 2681) )
    {
      v3 = (int *)((char *)this + 24);
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, MPCRawInputProvider *))(**((_QWORD **)this + 2) + 40LL))(
             *((_QWORD *)this + 2),
             (char *)this + 24,
             this);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xBC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v4);
        __debugbreak();
      }
      v5 = (SpectrumListener *)*((_QWORD *)this + 331);
      if ( v5 )
        SpectrumListener::Unregister(v5);
      *(_QWORD *)v20 = this;
      v6 = (__int64 *)Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider *,unsigned long &>(
                        &v24,
                        v20,
                        (char *)this + 24);
      v7 = 0LL;
      if ( &v23 != (volatile signed __int32 **)v6 )
      {
        v7 = *v6;
        *v6 = 0LL;
      }
      v23 = (volatile signed __int32 *)*((_QWORD *)this + 331);
      v8 = v23;
      *((_QWORD *)this + 331) = v7;
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 32LL))(v23, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v9 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v10 = (volatile signed __int32 *)operator new(0x58uLL);
      v23 = v10;
      v11 = *((_QWORD *)this + 2);
      v12 = *v3;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 9) = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_DWORD *)v10 + 20) = v12;
      v13 = SpeechRuntimeListener::InitializeCoreMessaging((SpeechRuntimeListener *)v10);
      if ( v13 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
          (const char *)(unsigned int)v13);
      v15 = (SpeechRuntimeListener *)*((_QWORD *)this + 332);
      *((_QWORD *)this + 332) = v10;
      if ( v15 )
        SpeechRuntimeListener::`scalar deleting destructor'(v15, v14);
      *((_BYTE *)this + 2681) = 1;
    }
  }
  else if ( *((_BYTE *)this + 2681) )
  {
    v16 = (SpectrumListener *)*((_QWORD *)this + 331);
    if ( v16 )
      SpectrumListener::Unregister(v16);
    v17 = (volatile signed __int32 *)*((_QWORD *)this + 331);
    if ( v17 )
    {
      *((_QWORD *)this + 331) = 0LL;
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 32LL))(v17, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v18 = (SpeechRuntimeListener *)*((_QWORD *)this + 332);
    *((_QWORD *)this + 332) = 0LL;
    if ( v18 )
      SpeechRuntimeListener::`scalar deleting destructor'(v18, a2);
    v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 56LL))(
            *((_QWORD *)this + 2),
            (char *)this + 24);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    *((_BYTE *)this + 2681) = 0;
  }
}
