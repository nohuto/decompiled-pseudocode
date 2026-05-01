/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VCImmersiveShellBuilder@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E04C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<CImmersiveShellBuilder,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v9; // edi
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD *); // rcx
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v11 = 0LL;
    v7 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      v7[3] = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellBuilder>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v8 = &CImmersiveShellBuilder::`vftable';
      v9 = ((__int64 (__fastcall *)(_DWORD *, GUID *, _QWORD))CImmersiveShellBuilder::`vftable')(
             v8,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v11);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v9 >= 0 )
        v9 = (**v11)(v11, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    v10 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v10)[2])(v10);
    }
    return (unsigned int)v9;
  }
}
