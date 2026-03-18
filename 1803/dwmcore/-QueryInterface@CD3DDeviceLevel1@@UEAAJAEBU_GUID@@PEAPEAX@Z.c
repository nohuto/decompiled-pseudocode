/*
 * XREFs of ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800768D0
 * Callers:
 *     ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180078D10 (-GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801C8ABC (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x1800765D0 (-AddRef@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::QueryInterface(CD3DDeviceLevel1 *this, const struct _GUID *a2, void **a3)
{
  int v3; // ebx
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
      goto LABEL_13;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data4;
    if ( v5 )
    {
      v3 = -2147467262;
      this = 0LL;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    *a3 = this;
    if ( v3 >= 0 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)this + 8LL);
      if ( (char *)v6 == (char *)CD3DDeviceLevel1::AddRef )
        CD3DDeviceLevel1::AddRef(this);
      else
        v6();
    }
  }
  return (unsigned int)v3;
}
