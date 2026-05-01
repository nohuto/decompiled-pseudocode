/*
 * XREFs of ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18001AE4C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180019FA0 (-CreateInstance@-$SimpleClassFactory@VCApplicationManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??0CApplicationManager@@QEAA@XZ @ 0x180007628 (--0CApplicationManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18000FBE4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,IUnknown>(_QWORD *a1)
{
  IUnknown *v2; // rbx
  CApplicationManager *v3; // rax
  int v4; // edi

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (CApplicationManager *)operator new(0x338uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = (IUnknown *)CApplicationManager::CApplicationManager(v3);
    v4 = CApplicationManager::RuntimeClassInitialize(v2);
    if ( v4 >= 0 )
      v4 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))v2->lpVtbl->QueryInterface)(
             v2,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
  }
  else
  {
    v4 = -2147024882;
  }
  if ( v2 )
    ((void (__fastcall *)(IUnknown *))v2->lpVtbl->Release)(v2);
  return (unsigned int)v4;
}
