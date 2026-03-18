/*
 * XREFs of ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00A2578
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00A268C (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A27B0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00B63F8 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01CE414 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01D0264 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C01D0428 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01D0E8C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     <none>
 */

struct SESSION_ADAPTER *__fastcall DXGSESSIONDATA::GetSessionAdapterFromLuid(
        DXGSESSIONDATA *this,
        const struct _LUID *a2)
{
  char *v2; // r9
  _QWORD *v3; // rcx

  v2 = (char *)this + 18544;
  v3 = (_QWORD *)*((_QWORD *)this + 2318);
  if ( v3 == (_QWORD *)v2 )
    return 0LL;
  while ( *((_DWORD *)v3 - 6) != a2->LowPart || *((_DWORD *)v3 - 5) != a2->HighPart )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == (_QWORD *)v2 )
      return 0LL;
  }
  return (struct SESSION_ADAPTER *)(v3 - 4);
}
