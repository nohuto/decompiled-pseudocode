/*
 * XREFs of ?HasSwapChainContent@CSurfaceBrush@@UEBA_NXZ @ 0x1801A5B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSurfaceBrush::HasSwapChainContent(CSurfaceBrush *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rax
  bool v2; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v2 = 0;
  v5 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(CSurfaceBrush *))v1[30])(this) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v5);
    v2 = (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
           &v5) >= 0;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v5);
  return v2;
}
