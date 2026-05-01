/*
 * XREFs of ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802BB1D4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCDesktopPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802BB760 (-CreateInstance@-$SimpleClassFactory@VCDesktopPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1802BB3CC (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1802C01EC (-RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDesktopPositioner,IUnknown,>(_QWORD *a1)
{
  CDesktopPositioner *v2; // rax
  int v3; // edi
  CDesktopPositioner *v4; // rbx

  *a1 = 0LL;
  v2 = (CDesktopPositioner *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CDesktopPositioner::CDesktopPositioner(v2);
    v3 = CDesktopPositioner::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(CDesktopPositioner *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
