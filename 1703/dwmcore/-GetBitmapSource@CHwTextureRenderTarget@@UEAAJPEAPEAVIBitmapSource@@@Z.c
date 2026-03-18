/*
 * XREFs of ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180049410
 * Callers:
 *     ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180046FB0 (-GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B1EEC (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800B25D8 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapSource(CHwTextureRenderTarget *this, struct IBitmapSource **a2)
{
  struct CBitmapOfDeviceBitmaps *v2; // rbx
  unsigned int v3; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  struct CBitmapOfDeviceBitmaps *v12; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v13[4]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0LL;
  v3 = 0;
  v12 = 0LL;
  if ( *((_QWORD *)this + 8) )
    goto LABEL_2;
  v7 = *((_DWORD *)this - 42);
  v8 = *((_DWORD *)this - 41);
  v13[0] = 0;
  v13[1] = 0;
  v13[2] = v7;
  v13[3] = v8;
  v9 = CBitmapOfDeviceBitmaps::Create(v7, v8, (CHwTextureRenderTarget *)((char *)this + 40), &v12);
  v3 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x249u);
    v2 = v12;
  }
  else
  {
    v2 = v12;
    v11 = CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
            v12,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL),
            v10,
            *((unsigned int *)this - 15),
            v13,
            *((_QWORD *)this + 4));
    v3 = v11;
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 8) = v2;
      v2 = 0LL;
LABEL_2:
      *a2 = (struct IBitmapSource *)((*((_QWORD *)this + 8) + 16LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL));
      CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)this + 8));
      goto LABEL_3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x24Fu);
  }
LABEL_3:
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v3;
}
