/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180044504
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180031370 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x180042DF0 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180042E50 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180042EF0 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180043210 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x1800436E0 (-UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180044400 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x1800444A0 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180065650 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A0E80 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800A12C0 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1800A1540 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800A1880 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800A1910 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
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
