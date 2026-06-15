/*
 * XREFs of ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@@Z @ 0x1800C0118
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0CHybridPropertyStore@@QEAA@XZ @ 0x1800C01DC (--0CHybridPropertyStore@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@@Z @ 0x1800C05AC (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &>(
        _QWORD *a1,
        struct IMMDevice **a2)
{
  CHybridPropertyStore *v4; // rbx
  CHybridPropertyStore *v5; // rax
  int v6; // edi

  *a1 = 0LL;
  v4 = 0LL;
  v5 = (CHybridPropertyStore *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v4 = CHybridPropertyStore::CHybridPropertyStore(v5);
    v6 = CHybridPropertyStore::RuntimeClassInitialize(v4, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(CHybridPropertyStore *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             a1);
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v4 )
    (*(void (__fastcall **)(CHybridPropertyStore *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v6;
}
