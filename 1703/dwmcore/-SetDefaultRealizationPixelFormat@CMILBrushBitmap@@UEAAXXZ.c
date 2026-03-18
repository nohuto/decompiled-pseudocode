/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180054480
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18004A840 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180041DC0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800563D0 (-GetColorSpace@CBitmap@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180056420 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180056490 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrushBitmap::SetDefaultRealizationPixelFormat(CMILBrushBitmap *this)
{
  enum DXGI_FORMAT *v1; // rdi
  CBitmap *v3; // rcx
  __int64 (__fastcall *v4)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  float v6; // xmm1_4
  int v7; // eax
  CBitmap *v8; // rcx
  enum DXGI_ALPHA_MODE (__fastcall *v9)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE v10; // eax
  CBitmap *v11; // rcx
  __int64 (*v12)(void); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  CBitmap *v14; // rcx
  __int64 (*v15)(void); // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax

  v1 = (enum DXGI_FORMAT *)((char *)this + 8);
  v3 = (CBitmap *)*((_QWORD *)this + 21);
  v4 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v3 + 24LL);
  if ( v4 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v3, v1);
  else
    PixelFormat = v4(v3, v1);
  if ( PixelFormat < 0 )
  {
    CMILBrush::SetDefaultRealizationPixelFormat(this);
  }
  else
  {
    v6 = *((float *)this + 59);
    if ( v6 < 1.0000001
      && v6 > 0.99999988
      && ((v7 = *((_DWORD *)this + 58), (v7 & 1) != 0)
       || (v7 & 2) == 0
       && ((v8 = (CBitmap *)*((_QWORD *)this + 21),
            v9 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)v8 + 32LL),
            v9 != CBitmap::GetAlphaMode)
         ? (v10 = ((unsigned int (*)(void))v9)())
         : (v10 = CBitmap::GetAlphaMode(v8)),
           v10 == DXGI_ALPHA_MODE_IGNORE))
      || !(unsigned int)HasAlphaChannel(*v1) )
    {
      *((_DWORD *)this + 3) = 3;
    }
    else
    {
      v11 = (CBitmap *)*((_QWORD *)this + 21);
      v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 32LL);
      if ( (char *)v12 == (char *)CBitmap::GetAlphaMode )
        AlphaMode = CBitmap::GetAlphaMode(v11);
      else
        AlphaMode = (unsigned int)v12();
      *((_DWORD *)this + 3) = AlphaMode;
    }
    v14 = (CBitmap *)*((_QWORD *)this + 21);
    v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 40LL);
    if ( (char *)v15 == (char *)CBitmap::GetColorSpace )
      ColorSpace = CBitmap::GetColorSpace(v14);
    else
      ColorSpace = (unsigned int)v15();
    *((_DWORD *)this + 4) = ColorSpace;
  }
}
