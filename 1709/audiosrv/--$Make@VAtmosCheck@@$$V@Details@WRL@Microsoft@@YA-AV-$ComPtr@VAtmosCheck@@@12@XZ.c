/*
 * XREFs of ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x1800CDC8C
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x1800CE584 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x1800E238C (--0AtmosCheck@@QEAA@XZ.c)
 */

AtmosCheck **__fastcall Microsoft::WRL::Details::Make<AtmosCheck,>(AtmosCheck **a1)
{
  AtmosCheck *v2; // rax
  AtmosCheck *v3; // rdi

  *a1 = 0LL;
  v2 = (AtmosCheck *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = AtmosCheck::AtmosCheck(v2);
    if ( *a1 )
      (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
