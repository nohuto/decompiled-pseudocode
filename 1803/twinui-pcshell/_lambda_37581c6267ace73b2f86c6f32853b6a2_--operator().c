/*
 * XREFs of _lambda_37581c6267ace73b2f86c6f32853b6a2_::operator() @ 0x180115800
 * Callers:
 *     ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x180115CA0 (-GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_37581c6267ace73b2f86c6f32853b6a2_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // si
  struct IUnknown *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 == 0;
  if ( v4 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
    (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL))(a2, &v7);
    v5 = (unsigned int)SHIsSameObject(v7, *(struct IUnknown **)(a1 + 8)) != 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
  }
  if ( v5 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(*(__int64 **)(a1 + 16), a2);
  return **(_QWORD **)(a1 + 16) == 0LL;
}
