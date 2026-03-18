/*
 * XREFs of ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x1801E803C
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801DDF80 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180083960 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::GetExistingSharedColorSourceHandle(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 488);
  v7 = 0LL;
  if ( v6 )
  {
    do
    {
      if ( *(_DWORD *)(v6 + 336) == a2 )
        break;
      v6 = *(_QWORD *)(v6 + 344);
    }
    while ( v6 );
    if ( v6
      && *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 64LL))(v6, &v11) == a3
      && (!a4 || (*(_BYTE *)(v6 + 256) & 0x20) != 0)
      && (!a5 || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v6 + 128, a5)) )
    {
      *a6 = *(_DWORD *)(v6 + 240);
      v9 = *(_QWORD *)(v6 + 168);
      if ( v9 )
        return *(_QWORD *)(v9 + 240);
    }
  }
  return v7;
}
