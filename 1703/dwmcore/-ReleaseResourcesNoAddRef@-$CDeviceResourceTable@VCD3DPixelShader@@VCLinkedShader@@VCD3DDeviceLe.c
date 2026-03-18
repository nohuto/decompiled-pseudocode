/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1801789A4
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1801788D4 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180178980 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(
        __int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  _QWORD *v4; // rbx

  if ( *(_DWORD *)(a1 + 40) )
  {
    v2 = *(unsigned int *)(a1 + 40);
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD **)(v3 + *(_QWORD *)(a1 + 16));
      (*(void (__fastcall **)(_QWORD *, __int64))(v4[3] + 32LL))(v4 + 3, a1);
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *(_DWORD *)(a1 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 16, 8u);
}
