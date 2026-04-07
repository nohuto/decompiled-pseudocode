/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180013570 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003EAB0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18003EF70 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18003EFF0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18003F090 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18003FEB0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18003FF50 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18006E330 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A2790 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800A2BA0 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1800A2E20 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetAlphaMode@CBitmapLock@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800A3070 (-GetAlphaMode@CBitmapLock@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapLock@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800A30C0 (-GetColorSpace@CBitmapLock@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800A3110 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800A31A0 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CMTALock>::~CGuard<CMTALock>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
    *a1 = 0LL;
  }
}
