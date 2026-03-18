/*
 * XREFs of ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00A8418 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00EDE40 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00FA670 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00FA908 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00FA980 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00FAB1C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00FABF0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     <none>
 */

struct SESSION_ADAPTER *__fastcall DXGSESSIONDATA::GetSessionAdapterFromLuid(
        DXGSESSIONDATA *this,
        const struct _LUID *a2)
{
  char *v2; // r9
  _QWORD *v3; // rcx

  v2 = (char *)this + 18536;
  v3 = (_QWORD *)*((_QWORD *)this + 2317);
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
