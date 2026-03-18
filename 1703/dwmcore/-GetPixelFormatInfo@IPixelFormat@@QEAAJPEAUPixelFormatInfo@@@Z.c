/*
 * XREFs of ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800CB044
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18006D020 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B7858 (-EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IPixelFormat::GetPixelFormatInfo(IPixelFormat *this, struct PixelFormatInfo *a2)
{
  int v4; // edi

  v4 = (*(__int64 (__fastcall **)(IPixelFormat *))(*(_QWORD *)this + 24LL))(this);
  if ( v4 >= 0 )
  {
    *((_DWORD *)a2 + 1) = (*(__int64 (__fastcall **)(IPixelFormat *))(*(_QWORD *)this + 32LL))(this);
    *((_DWORD *)a2 + 2) = (*(__int64 (__fastcall **)(IPixelFormat *))(*(_QWORD *)this + 40LL))(this);
  }
  return (unsigned int)v4;
}
