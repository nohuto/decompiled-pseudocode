/*
 * XREFs of ?IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BB470
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::IssueSurfaceNotifications(__int64 a1, CDrawingContext *a2, __int128 *a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned int v8; // edi
  int (__fastcall ***v9)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  int (__fastcall **v10)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rax
  CCompositionSurfaceBitmap *v11; // [rsp+50h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v8 = *(_DWORD *)(result + 108);
  if ( v8 )
  {
    do
    {
      result = (int)v4;
      v9 = (int (__fastcall ***)(_QWORD, GUID *, CCompositionSurfaceBitmap **))(*(_QWORD *)(a1 + 8LL * (int)v4 + 24) & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v9 )
      {
        v10 = *v9;
        v11 = 0LL;
        if ( (*v10)(v9, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v11) >= 0 )
          CDrawingContext::RecordBitmapContentInfo(a2, v11, v11, a3, 0LL);
        result = Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v11);
      }
      ++v4;
    }
    while ( v4 < v8 );
  }
  return result;
}
