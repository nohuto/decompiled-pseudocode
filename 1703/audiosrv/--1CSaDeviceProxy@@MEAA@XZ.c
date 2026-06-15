/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x180009890
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180009CD0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180045090 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18007CB44 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *i; // rdi
  LPVOID *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  void *v15; // rbx
  ARM_EVENT *v16; // rbp
  LPVOID pv; // [rsp+30h] [rbp-98h] BYREF
  int v18; // [rsp+38h] [rbp-90h]
  void *v19; // [rsp+40h] [rbp-88h]
  __int64 v20; // [rsp+48h] [rbp-80h]
  CSaDeviceProxy *v21; // [rsp+50h] [rbp-78h]
  _QWORD v22[8]; // [rsp+60h] [rbp-68h] BYREF

  v20 = -2LL;
  v21 = this;
  v2 = 0;
  v18 = 0;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, char *))(*(_QWORD *)g_PolicyManager + 144LL))(
    g_PolicyManager,
    (char *)this + 64);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids, this);
  }
  if ( *((_BYTE *)this + 72) )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v12 = **((_QWORD **)this + 6);
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v12 + 2 * v13) );
    if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v11, v10, v12, v13) < 0 )
    {
      v15 = pv;
    }
    else
    {
      v14 = operator new(0x48uLL);
      v19 = v14;
      v15 = pv;
      if ( v14 )
      {
        v22[0] = off_1800DE260;
        v22[1] = pv;
        v22[7] = v22;
        v2 = 1;
        v18 = 1;
        v16 = (ARM_EVENT *)ARM_EVENT::ARM_EVENT(v14, v22);
      }
      else
      {
        v16 = 0LL;
      }
      if ( (v2 & 1) != 0 )
        std::_Func_class<void,>::_Tidy(v22);
      if ( v16 )
      {
        if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v16, 0LL) )
          v15 = 0LL;
        else
          ARM_EVENT::`scalar deleting destructor'(v16, 1u);
      }
    }
    if ( v15 )
      CoTaskMemFree(v15);
  }
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = *(_QWORD **)(*(_QWORD *)(v5 + 40) + 8LL);
    for ( i = v6; !*((_BYTE *)i + 25); v6 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v5 + 40,
        i[2]);
      i = (_QWORD *)*i;
      std::_Deallocate(v6, 1uLL, 0x28uLL);
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL) = *(_QWORD *)(v5 + 40);
    **(_QWORD **)(v5 + 40) = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(v5 + 48) = 0LL;
    std::_Deallocate(*(void **)(v5 + 40), 1uLL, 0x28uLL);
    DeleteCriticalSection((LPCRITICAL_SECTION)v5);
    operator delete((void *)v5, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  v8 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    CoTaskMemFree(v8[3]);
    v8[3] = 0LL;
    CoTaskMemFree(v8[2]);
    v8[2] = 0LL;
    CoTaskMemFree(*v8);
    *v8 = 0LL;
    operator delete(v8, (const struct std::nothrow_t *)0x68);
  }
  *((_QWORD *)this + 6) = 0LL;
  v9 = *((_QWORD *)this + 5);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v9));
}
