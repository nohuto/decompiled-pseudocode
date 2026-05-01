/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147820
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180147900 (-Release@-$RuntimeClass@U-$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@D.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180147970 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Micros.c)
 *     ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x180147CB4 (--0VirtualTouchpadUriHandler@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  VirtualTouchpadUriHandler *v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

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
    v8 = (VirtualTouchpadUriHandler *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = VirtualTouchpadUriHandler::VirtualTouchpadUriHandler(v8);
      v9 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLExecuteCommandBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
             v10,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v11);
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLExecuteCommandBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
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
