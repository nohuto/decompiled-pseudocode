/*
 * XREFs of ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18001C0E0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18001AD30 (-CreateInstance@-$SimpleClassFactory@VCApplicationManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??0CApplicationManager@@QEAA@XZ @ 0x1800079D8 (--0CApplicationManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,IUnknown,>(_QWORD *a1)
{
  CApplicationManager *v2; // rax
  int v3; // edi
  IUnknown *v4; // rbx

  *a1 = 0LL;
  v2 = (CApplicationManager *)operator new(0x388uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (IUnknown *)CApplicationManager::CApplicationManager(v2);
    v3 = CApplicationManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))v4->lpVtbl->QueryInterface)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
