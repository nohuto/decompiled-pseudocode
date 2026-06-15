/*
 * XREFs of ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x1800EE6F0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0CHybridPropertyStore@@QEAA@XZ @ 0x1800EE918 (--0CHybridPropertyStore@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x1800EED54 (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
        _QWORD *a1,
        struct IMMDevice **a2,
        unsigned int *a3,
        const struct _tagpropertykey **a4)
{
  CHybridPropertyStore *v8; // rax
  int v9; // edi
  CHybridPropertyStore *v10; // rbx

  *a1 = 0LL;
  v8 = (CHybridPropertyStore *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CHybridPropertyStore::CHybridPropertyStore(v8);
    v9 = CHybridPropertyStore::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(CHybridPropertyStore *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             a1);
    if ( v10 )
      (*(void (__fastcall **)(CHybridPropertyStore *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
