/*
 * XREFs of ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x180156A90
 * Callers:
 *     ??$emplace_back@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAXAEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@Z @ 0x1801554E4 (--$emplace_back@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UDXGIReso.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r15

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)(v4 + 8));
        v4 += 16LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate((char *)v4, (a1[2] - v4) >> 4, 0x10uLL);
  }
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  *a1 = a2;
}
