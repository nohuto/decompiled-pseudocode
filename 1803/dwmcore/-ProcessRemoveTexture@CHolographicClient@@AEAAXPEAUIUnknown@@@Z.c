/*
 * XREFs of ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFF5C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD9C (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18020024C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveTexture(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v3) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), v3);
    if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((char *)this + 40, &v3) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    ReleaseInterfaceNoNULL<IWICBitmap>(v3);
  }
}
