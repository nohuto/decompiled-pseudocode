/*
 * XREFs of ?_Tidy@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D7244
 * Callers:
 *     ??_GCAppSubmixClientContext@@QEAAPEAXI@Z @ 0x1800D65BC (--_GCAppSubmixClientContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::unique_ptr<CAppSubmixClient>>::_Tidy(__int64 a1)
{
  __int64 **v1; // rbx
  __int64 **v3; // rbp
  __int64 *v4; // rsi

  v1 = *(__int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 ***)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*v1);
          operator delete(v4, (const struct std::nothrow_t *)0x10);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(__int64 ***)a1;
    }
    std::_Deallocate(v1, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
