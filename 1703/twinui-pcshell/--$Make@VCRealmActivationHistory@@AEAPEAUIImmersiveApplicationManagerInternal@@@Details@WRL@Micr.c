/*
 * XREFs of ??$Make@VCRealmActivationHistory@@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRealmActivationHistory@@@12@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004A8F4
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004A1BC (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CRealmActivationHistory **__fastcall Microsoft::WRL::Details::Make<CRealmActivationHistory,IImmersiveApplicationManagerInternal * &>(
        CRealmActivationHistory **a1,
        struct IImmersiveApplicationManagerInternal **a2)
{
  CRealmActivationHistory *v4; // rax
  CRealmActivationHistory *v5; // rdi

  *a1 = 0LL;
  v4 = (CRealmActivationHistory *)operator new(0x180uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CRealmActivationHistory::CRealmActivationHistory(v4, *a2);
    if ( *a1 )
      (*(void (__fastcall **)(CRealmActivationHistory *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
