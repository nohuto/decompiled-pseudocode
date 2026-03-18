/*
 * XREFs of ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x1801AC6D0
 * Callers:
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJPEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1801AC238 (-Append_Convert@ScanPipelineBuilder@@QEAAJPEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNearestInterchangeFormat(enum DXGI_FORMAT a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( a1 != DXGI_FORMAT_R32G32B32A32_FLOAT && a1 != DXGI_FORMAT_R16G16B16A16_FLOAT )
  {
    result = 11LL;
    if ( a1 != DXGI_FORMAT_R16G16B16A16_UNORM && a1 != DXGI_FORMAT_R10G10B10A2_UNORM )
      return 87LL;
  }
  return result;
}
