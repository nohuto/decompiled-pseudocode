/*
 * XREFs of ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x1800499F0
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800709D0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x18005DC88 (-GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ZBID@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetZbid(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 424);
  result = 0LL;
  if ( (v1 & 1) != 0 || (v1 & 8) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(a1 + 152);
  return result;
}
