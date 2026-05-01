/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800F0270
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F01E0 (-CreateInstance@-$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1800EEC1C (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v2[7] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IPenWorkspaceLayoutPolicyManager>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &PWSLayoutPolicyManager::`vftable';
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    VariantInit((VARIANTARG *)(v3 + 20));
    *((_QWORD *)v3 + 13) = 0LL;
    *((_QWORD *)v3 + 14) = 0LL;
    *((_QWORD *)v3 + 15) = 0LL;
    v4 = PWSLayoutPolicyManager::RuntimeClassInitialize((PWSLayoutPolicyManager *)v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
