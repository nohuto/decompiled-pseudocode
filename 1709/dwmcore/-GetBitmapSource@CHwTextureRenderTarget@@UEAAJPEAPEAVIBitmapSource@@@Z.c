/*
 * XREFs of ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18008FC20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18007DBD8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x18007DF74 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapSource(CHwTextureRenderTarget *this, struct IBitmapSource **a2)
{
  CMILCOMBase *v2; // rbx
  unsigned int v3; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  signed int v8; // eax
  __int64 v9; // r8
  signed int v10; // eax
  struct CBitmapOfDeviceBitmaps *v12; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0LL;
  v3 = 0;
  v12 = 0LL;
  if ( *((_QWORD *)this + 8) )
    goto LABEL_5;
  v6 = *((_DWORD *)this - 46);
  v7 = *((_DWORD *)this - 45);
  v13.left = 0;
  v13.top = 0;
  v13.right = v6;
  v13.bottom = v7;
  v8 = CBitmapOfDeviceBitmaps::Create(v6, v7, (CHwTextureRenderTarget *)((char *)this + 40), &v12);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x222u);
    v2 = v12;
  }
  else
  {
    v2 = v12;
    v10 = CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
            (__int64)v12,
            *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 80LL),
            v9,
            *((_DWORD *)this - 19),
            &v13,
            *((_QWORD *)this + 4));
    v3 = v10;
    if ( v10 >= 0 )
    {
      *((_QWORD *)this + 8) = v2;
      v2 = 0LL;
LABEL_5:
      *a2 = (struct IBitmapSource *)((*((_QWORD *)this + 8) + 16LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL));
      CMILCOMBase::InternalAddRef(*((CMILCOMBase **)this + 8));
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x228u);
  }
LABEL_6:
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v3;
}
