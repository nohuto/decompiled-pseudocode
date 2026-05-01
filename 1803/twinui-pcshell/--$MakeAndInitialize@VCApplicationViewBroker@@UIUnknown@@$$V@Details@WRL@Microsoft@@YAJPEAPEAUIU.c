/*
 * XREFs of ??$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008EA20
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008E9A0 (-CreateInstance@-$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewBroker@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008EB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18008EB30.c)
 *     ??0CApplicationViewBroker@@QEAA@XZ @ 0x18008EBA8 (--0CApplicationViewBroker@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationViewBroker,IUnknown,>(
        CApplicationViewBroker **a1)
{
  CApplicationViewBroker *v2; // rax
  CApplicationViewBroker *v3; // rax
  CApplicationViewBroker *v4; // rbx
  _DWORD *v5; // rcx
  unsigned int v6; // edi

  *a1 = 0LL;
  v2 = (CApplicationViewBroker *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CApplicationViewBroker::CApplicationViewBroker(v2);
    *a1 = 0LL;
    v4 = v3;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v4;
      (*(void (__fastcall **)(CApplicationViewBroker *))(*(_QWORD *)v4 + 8LL))(v4);
      v6 = 0;
    }
    else if ( InlineIsEqualGUID(v5, &GUID_d4351e8c_208e_4c24_88ac_6e2add5f4bb1) )
    {
      *a1 = v4;
      v6 = 0;
      (*(void (__fastcall **)(CApplicationViewBroker *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewBroker>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
