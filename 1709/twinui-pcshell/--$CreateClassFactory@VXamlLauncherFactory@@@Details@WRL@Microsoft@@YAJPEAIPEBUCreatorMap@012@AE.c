/*
 * XREFs of ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180184120
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006330 (-QueryInterface@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJ.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800063E0 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<XamlLauncherFactory>(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  void *v7; // rax
  __int64 v8; // rbx
  signed __int32 v9; // eax
  int Interface; // eax
  unsigned int v11; // edi

  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 3) = 1;
    *((_DWORD *)v7 + 5) = 4;
    *(_QWORD *)v7 = &XamlLauncherFactory::`vftable';
    v9 = _InterlockedIncrement((volatile signed __int32 *)v7 + 3);
    if ( (*(_BYTE *)(v8 + 20) & 6) == 0 && v9 == 2 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v8);
    *(_DWORD *)(v8 + 20) = *a1;
    Interface = Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
                  v8,
                  a3,
                  a4);
    v11 = Interface;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( Interface < 0 )
      {
        *(_DWORD *)(v8 + 20) &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v8 = 0LL;
      }
    }
    if ( v8 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v11;
}
