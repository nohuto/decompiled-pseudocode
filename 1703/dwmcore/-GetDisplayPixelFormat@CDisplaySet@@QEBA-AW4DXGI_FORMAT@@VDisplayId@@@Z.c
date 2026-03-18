/*
 * XREFs of ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180185E74
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180147ED0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1801331B8 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayPixelFormat(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 == DisplayId::None )
  {
    if ( !*(_DWORD *)(a1 + 72) )
      return v2;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * *(unsigned int *)(a1 + 40));
  }
  else
  {
    if ( (int)CDisplaySet::GetDisplayIndexFromDisplayId(a1) < 0 )
      return v2;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v6);
  }
  if ( v4 )
    return *(unsigned int *)(v4 + 272);
  return v2;
}
