/*
 * XREFs of ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094330
 * Callers:
 *     <none>
 * Callees:
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_a7a871fc25f557e11998827eb9df152a__void_ @ 0x1800918C0 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_a7a871fc25f557e11998827e.c)
 */

__int64 __fastcall CMMNotificationDelegator::OnDefaultDeviceChanged(
        Microsoft::WRL::Details::WeakReferenceImpl **this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  char v4; // si
  volatile signed __int32 **v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  GENERIC_EVENT *v9; // rdi
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rax
  CProcessSubmixProxy *v12; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v14[8]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v12 = 0LL;
  if ( a2 == *((_DWORD *)this + 11) && *((_DWORD *)this + 10) == a3 )
  {
    v5 = (volatile signed __int32 **)(this + 4);
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(this + 4, (struct IInspectable **)&v12) >= 0 )
    {
      if ( v12 )
      {
        v6 = *v5;
        if ( v6 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
        v8 = operator new(0x48uLL);
        if ( v8 )
        {
          v13 = v6;
          if ( v6 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
          std::function_void___cdecl_void__::function_void___cdecl_void____lambda_a7a871fc25f557e11998827eb9df152a__void_(
            v14,
            &v13);
          v9 = (GENERIC_EVENT *)GENERIC_EVENT::GENERIC_EVENT(v8, (__int64)v14);
          v4 = 1;
        }
        else
        {
          v9 = 0LL;
        }
        if ( (v4 & 1) != 0 )
          std::_Func_class<void,>::_Tidy(v14, v7);
        if ( v9 )
        {
          if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v9, 0LL) )
            v9 = 0LL;
          if ( v9 )
            GENERIC_EVENT::`vector deleting destructor'(v9, 1);
        }
        if ( v6 )
        {
          v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL);
          if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v6);
          else
            v10(v6);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
  return 0LL;
}
