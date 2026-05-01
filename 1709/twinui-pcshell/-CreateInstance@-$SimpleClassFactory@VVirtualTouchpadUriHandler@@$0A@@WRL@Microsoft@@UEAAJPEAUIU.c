/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18017C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017C610 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecu.c)
 *     ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x18017C924 (--0VirtualTouchpadUriHandler@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<VirtualTouchpadUriHandler,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  VirtualTouchpadUriHandler *v8; // rax
  int v9; // edi
  volatile signed __int32 *v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = (VirtualTouchpadUriHandler *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = (volatile signed __int32 *)VirtualTouchpadUriHandler::VirtualTouchpadUriHandler(v8);
      v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::QueryInterface(
             v10,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v11);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 33, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 80LL))(v10, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v7 = v11;
      if ( v9 >= 0 )
        v9 = (**v11)(v11, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
    return (unsigned int)v9;
  }
}
