/*
 * XREFs of ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x1801A62C4
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18002C320 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(
        CD3DDeviceLevel1 *this,
        struct CD3DSurface *a2,
        LONG *a3,
        __int64 a4,
        int a5,
        int a6)
{
  LONG v6; // eax
  signed int v10; // eax
  unsigned int v11; // ebx
  struct CD3DSurface *v13; // [rsp+30h] [rbp-20h] BYREF
  struct tagPOINT v14; // [rsp+38h] [rbp-18h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  v6 = *a3;
  v13 = 0LL;
  v15.left = v6;
  v15.top = a3[1];
  v15.right = a3[2];
  v15.bottom = a3[3];
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
  v10 = (*(__int64 (__fastcall **)(__int64, struct CD3DSurface **, int *, int *))(*(_QWORD *)a4 + 48LL))(
          a4,
          &v13,
          &v16,
          &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x8F9u);
  }
  else
  {
    v14.x = v16 + a5;
    v14.y = v17 + a6;
    CD3DDeviceLevel1::CopySurfaceRect(this, a2, &v15, v13, &v14);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
  return v11;
}
