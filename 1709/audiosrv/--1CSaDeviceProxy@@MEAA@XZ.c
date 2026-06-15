/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000E3C4
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18000E750 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000C5D0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@.c)
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x18000D4A8 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  char v2; // r14
  LPVOID *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  const unsigned __int16 *v6; // r8
  unsigned __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  void *v10; // rdi
  GENERIC_EVENT *v11; // rbx
  __int64 v12; // [rsp+28h] [rbp-59h]
  LPVOID pv; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+40h] [rbp-41h]
  __int64 v15; // [rsp+48h] [rbp-39h]
  CSaDeviceProxy *v16; // [rsp+50h] [rbp-31h]
  _QWORD *v17; // [rsp+58h] [rbp-29h]
  _QWORD v18[8]; // [rsp+68h] [rbp-19h] BYREF

  v15 = -2LL;
  v16 = this;
  v2 = 0;
  v14 = 0;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((char *)this + 80);
  (*(void (__fastcall **)(struct IAudioPolicyManager *, char *))(*(_QWORD *)g_PolicyManager + 144LL))(
    g_PolicyManager,
    (char *)this + 64);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_9c6016c0d7cb367d67baf4bee7e000df_Traceguids, this);
  }
  if ( *((_BYTE *)this + 72) )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v6 = (const unsigned __int16 *)**((_QWORD **)this + 6);
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v5, v4, v6, v7, v12, (unsigned __int16 **)&pv) < 0 )
    {
      v10 = pv;
    }
    else
    {
      v8 = operator new(0x48uLL);
      v17 = v8;
      v10 = pv;
      if ( v8 )
      {
        v18[0] = off_1800F43C8;
        v18[1] = pv;
        v18[7] = v18;
        v2 = 1;
        v14 = 1;
        v11 = (GENERIC_EVENT *)GENERIC_EVENT::GENERIC_EVENT(v8, (__int64)v18);
      }
      else
      {
        v11 = 0LL;
      }
      if ( (v2 & 1) != 0 )
        std::_Func_class<void,>::_Tidy(v18, v9);
      if ( v11 )
      {
        if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v11, 0LL) )
        {
          v11 = 0LL;
          v10 = 0LL;
        }
        if ( v11 )
          GENERIC_EVENT::`vector deleting destructor'(v11, 1);
      }
    }
    if ( v10 )
      CoTaskMemFree(v10);
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease((char *)this + 112);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((char *)this + 80);
  ATL::CAutoPtr<CResourcePriorityTracker>::Free((__int64 *)this + 7);
  v3 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CoTaskMemFree(v3[3]);
    v3[3] = 0LL;
    CoTaskMemFree(v3[2]);
    v3[2] = 0LL;
    CoTaskMemFree(*v3);
    *v3 = 0LL;
    operator delete(v3, (const struct std::nothrow_t *)0x68);
  }
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>((__int64)this);
}
