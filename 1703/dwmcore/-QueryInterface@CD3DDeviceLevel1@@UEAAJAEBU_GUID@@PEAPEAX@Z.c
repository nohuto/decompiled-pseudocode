/*
 * XREFs of ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077700
 * Callers:
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18001C59C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180049A8C (-GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18019A73C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x180078E90 (-AddRef@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::QueryInterface(CD3DDeviceLevel1 *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  void (*v6)(void); // rax

  v3 = -2147024809;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_8:
      *a3 = this;
      v3 = 0;
      v6 = *(void (**)(void))(*(_QWORD *)this + 8LL);
      if ( (char *)v6 == (char *)CD3DDeviceLevel1::AddRef )
        CD3DDeviceLevel1::AddRef(this);
      else
        v6();
    }
  }
  return v3;
}
