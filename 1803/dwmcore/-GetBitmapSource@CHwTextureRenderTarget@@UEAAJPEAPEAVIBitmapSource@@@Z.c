/*
 * XREFs of ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180078490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800CC310 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800CC840 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapSource(CHwTextureRenderTarget *this, struct IBitmapSource **a2)
{
  __int64 v2; // rax
  struct CBitmapOfDeviceBitmaps *v3; // rbx
  unsigned int v4; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  struct CBitmapOfDeviceBitmaps *v13; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-30h] BYREF

  v2 = *((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = 0;
  v13 = 0LL;
  if ( v2 )
    goto LABEL_5;
  v7 = *((_DWORD *)this - 52);
  v8 = *((_DWORD *)this - 51);
  v14[0] = 0;
  v14[1] = 0;
  v14[2] = v7;
  v14[3] = v8;
  v9 = CBitmapOfDeviceBitmaps::Create(v7, v8, (CHwTextureRenderTarget *)((char *)this + 40), &v13);
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x217u);
    v3 = v13;
  }
  else
  {
    v3 = v13;
    v11 = CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
            v13,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 80LL),
            v10,
            *((unsigned int *)this - 25),
            v14,
            *((_QWORD *)this + 4));
    v4 = v11;
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 8) = v3;
      v3 = 0LL;
      v2 = *((_QWORD *)this + 8);
LABEL_5:
      *a2 = (struct IBitmapSource *)((v2 + 16) & -(__int64)(v2 != 0));
      CMILCOMBase::InternalAddRef(*((CMILCOMBase **)this + 8));
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x21Du);
  }
LABEL_6:
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  return v4;
}
