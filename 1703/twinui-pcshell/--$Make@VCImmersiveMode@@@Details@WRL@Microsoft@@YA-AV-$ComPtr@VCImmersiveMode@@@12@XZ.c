/*
 * XREFs of ??$Make@VCImmersiveMode@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveMode@@@12@XZ @ 0x180032860
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x1800302F0 (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveMode **__fastcall Microsoft::WRL::Details::Make<CImmersiveMode>(CImmersiveMode **a1)
{
  CImmersiveMode *v2; // rax
  CImmersiveMode *v3; // rdi

  *a1 = 0LL;
  v2 = (CImmersiveMode *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CImmersiveMode::CImmersiveMode(v2);
    if ( *a1 )
      (*(void (__fastcall **)(CImmersiveMode *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
