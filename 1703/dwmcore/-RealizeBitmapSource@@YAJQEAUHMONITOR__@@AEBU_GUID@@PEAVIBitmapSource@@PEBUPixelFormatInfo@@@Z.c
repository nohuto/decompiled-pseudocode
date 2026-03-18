/*
 * XREFs of ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188374
 * Callers:
 *     ?ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z @ 0x18012D9D0 (-ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplayByHMonitorNoRef@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEBVCDisplay@@@Z @ 0x1800CD414 (-GetDisplayByHMonitorNoRef@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEBVCDisplay@@@Z.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 */

__int64 __fastcall RealizeBitmapSource(
        CDisplayManager *a1,
        const struct _GUID *a2,
        struct IBitmapSource *a3,
        const struct PixelFormatInfo *a4)
{
  CDisplaySet *v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rdi
  CDisplaySet *v13; // [rsp+30h] [rbp-28h] BYREF
  struct CDisplay *v14; // [rsp+38h] [rbp-20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( (int)CDisplayManager::GetCurrentDisplaySet(a1, &v13) >= 0 )
  {
    if ( a1 )
    {
      if ( (int)CDisplaySet::GetDisplayByHMonitorNoRef(v13, (HMONITOR)a1, (HMONITOR **)&v14) >= 0 )
        RealizeBitmapSourceHelper((struct CD3DDeviceManager *)&g_D3DDeviceManager, a2, v14, a3, a4);
    }
    else
    {
      v8 = v13;
      v9 = 0;
      v10 = *((_DWORD *)v13 + 18);
      if ( v10 )
      {
        v11 = 0LL;
        do
        {
          if ( (int)RealizeBitmapSourceHelper(
                      (struct CD3DDeviceManager *)&g_D3DDeviceManager,
                      a2,
                      *(const struct CDisplay **)(v11 + *((_QWORD *)v8 + 6)),
                      a3,
                      a4) < 0 )
            break;
          ++v9;
          v11 += 8LL;
        }
        while ( v9 < v10 );
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(&v13);
  return 0LL;
}
