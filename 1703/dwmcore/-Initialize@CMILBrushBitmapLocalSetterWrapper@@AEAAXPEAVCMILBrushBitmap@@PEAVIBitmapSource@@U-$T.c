/*
 * XREFs of ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180041ECC
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180041E94 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180133324 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800563D0 (-GetColorSpace@CBitmap@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180056420 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180056490 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmapLocalSetterWrapper::Initialize(
        __int64 *a1,
        __int64 a2,
        CBitmap *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  bool v9; // zf
  int v10; // eax
  __int64 (__fastcall *v13)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  enum DXGI_ALPHA_MODE (__fastcall *v14)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  enum DXGI_COLOR_SPACE_TYPE (__fastcall *v16)(CBitmap *__hidden); // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 result; // rax
  int v23; // [rsp+40h] [rbp-20h]
  enum DXGI_FORMAT v24[2]; // [rsp+48h] [rbp-18h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v25; // [rsp+50h] [rbp-10h]

  *a1 = a2;
  v7 = *(_DWORD *)(a2 + 112);
  v9 = v7 == -1;
  v10 = v7 + 1;
  if ( v9 )
    v10 = 1;
  *(_DWORD *)(a2 + 112) = v10;
  *(_QWORD *)(*a1 + 192) = a3;
  *(_DWORD *)(*a1 + 200) = 0;
  *(_QWORD *)v24 = 0LL;
  v25 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v13 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)a3 + 24LL);
  if ( v13 == CBitmap::GetPixelFormat )
    CBitmap::GetPixelFormat(a3, v24);
  else
    v13(a3, v24);
  v14 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)a3 + 32LL);
  if ( v14 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(a3);
  else
    AlphaMode = v14(a3);
  v24[1] = AlphaMode;
  v16 = *(enum DXGI_COLOR_SPACE_TYPE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)a3 + 40LL);
  if ( v16 == CBitmap::GetColorSpace )
    ColorSpace = CBitmap::GetColorSpace(a3);
  else
    ColorSpace = v16(a3);
  v18 = *a1;
  v25 = ColorSpace;
  *(_QWORD *)(v18 + 32) = *(_QWORD *)v24;
  *(_DWORD *)(v18 + 40) = v25;
  v19 = *a1;
  *(_OWORD *)(v19 + 120) = *(_OWORD *)a7;
  *(_OWORD *)(v19 + 136) = *(_OWORD *)(a7 + 16);
  *(_OWORD *)(v19 + 152) = *(_OWORD *)(a7 + 32);
  *(_OWORD *)(v19 + 168) = *(_OWORD *)(a7 + 48);
  *(_DWORD *)(v19 + 184) = *(_DWORD *)(a7 + 64);
  *(_DWORD *)(*a1 + 116) = 1;
  v20 = *a1;
  if ( a5 )
  {
    *(_OWORD *)(v20 + 220) = *(_OWORD *)a5;
    *(_OWORD *)(v20 + 236) = *(_OWORD *)(a5 + 16);
    v21 = *(_DWORD *)(a5 + 32);
  }
  else
  {
    LOBYTE(v23) = 0;
    v21 = v23;
    *(_OWORD *)(v20 + 220) = _xmm;
    *(_OWORD *)(v20 + 236) = 0LL;
  }
  *(_DWORD *)(v20 + 252) = v21;
  result = *a1;
  *(_DWORD *)(*a1 + 256) = a4;
  return result;
}
