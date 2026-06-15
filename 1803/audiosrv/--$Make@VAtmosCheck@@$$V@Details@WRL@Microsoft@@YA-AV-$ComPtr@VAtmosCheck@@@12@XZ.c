/*
 * XREFs of ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x18004F168
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x18004F024 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18004F324 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

AtmosCheck **__fastcall Microsoft::WRL::Details::Make<AtmosCheck,>(AtmosCheck **a1)
{
  AtmosCheck *v2; // rax
  AtmosCheck *v3; // rdi

  *a1 = 0LL;
  v2 = (AtmosCheck *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = AtmosCheck::AtmosCheck(v2);
    if ( *a1 )
      (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
