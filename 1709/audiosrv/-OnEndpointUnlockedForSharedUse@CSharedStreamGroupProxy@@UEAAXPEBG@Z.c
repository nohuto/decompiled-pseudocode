/*
 * XREFs of ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18000CA54 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18002B31C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c1574d5d7a8b6f670ac925b0b327d44d__void_ @ 0x180091928 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_c1574d5d7a8b6f670ac925b0.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x180091990 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 */

void __fastcall CSharedStreamGroupProxy::OnEndpointUnlockedForSharedUse(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2)
{
  char v2; // di
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  GENERIC_EVENT *v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rax
  __int64 *v10; // [rsp+28h] [rbp-19h] BYREF
  __int64 **v11; // [rsp+30h] [rbp-11h] BYREF
  __int64 (__fastcall ***v12[2])(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-9h] BYREF
  _QWORD v13[8]; // [rsp+48h] [rbp+7h] BYREF

  LODWORD(v10) = 0;
  v2 = 0;
  v3 = *((_QWORD *)this + 8);
  if ( v3 && !*(_DWORD *)(v3 + 8) && !*((_QWORD *)this + 53) )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)v12, (__int64)this - 8);
    v10 = 0LL;
    v11 = &v10;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v11);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v12[0], v4) >= 0 )
    {
      v6 = operator new(0x48uLL);
      if ( v6 )
      {
        v11 = (__int64 **)v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64 *))(*v10 + 8))(v10);
        std::function_void___cdecl_void__::function_void___cdecl_void____lambda_c1574d5d7a8b6f670ac925b0b327d44d__void_(
          v13,
          (volatile signed __int32 **)&v11);
        v7 = (GENERIC_EVENT *)GENERIC_EVENT::GENERIC_EVENT(v6, (__int64)v13);
        v2 = 1;
      }
      else
      {
        v7 = 0LL;
      }
      if ( (v2 & 1) != 0 )
        std::_Func_class<void,>::_Tidy(v13, v5);
      if ( v7 )
      {
        if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v7, 0LL) )
          v7 = 0LL;
        if ( v7 )
          GENERIC_EVENT::`vector deleting destructor'(v7, 1);
      }
    }
    v8 = (volatile signed __int32 *)v10;
    if ( v10 )
    {
      v10 = 0LL;
      v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
      if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v8);
      else
        v9(v8);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v12);
  }
}
