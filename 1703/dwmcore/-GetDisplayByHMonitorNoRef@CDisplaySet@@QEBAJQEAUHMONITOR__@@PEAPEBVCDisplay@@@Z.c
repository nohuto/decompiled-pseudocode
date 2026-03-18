/*
 * XREFs of ?GetDisplayByHMonitorNoRef@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEBVCDisplay@@@Z @ 0x1800CD414
 * Callers:
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800CD450 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188374 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplaySet::GetDisplayByHMonitorNoRef(CDisplaySet *this, HMONITOR a2, HMONITOR **a3)
{
  __int64 v3; // r9
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  __int64 v6; // rbx
  HMONITOR *v7; // rcx

  *a3 = 0LL;
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18);
  v5 = -2147024809;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 6);
    while ( 1 )
    {
      v7 = *(HMONITOR **)(v6 + 8 * v3);
      if ( v7[2] == a2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        return v5;
    }
    *a3 = v7;
    return 0;
  }
  return v5;
}
