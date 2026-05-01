/*
 * XREFs of ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18010E130
 * Callers:
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18010DF10 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800F0D9C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180111498 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::TransferWindowBetweenGloms(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct IImmersiveApplicationInternal *a4,
        const struct TransferWindowOptions *a5)
{
  int v8; // edi
  unsigned int v9; // ebx
  HWND v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v8 = 9;
  if ( a5 )
  {
    if ( *(HWND *)a5 == a2 )
    {
      v8 = 10;
    }
    else if ( (*((_BYTE *)a5 + 8) & 1) != 0 )
    {
      v8 = 11;
    }
  }
  a5 = 0LL;
  v11 = a2;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  CApplicationManager::_RemoveWindowFromGlom((char *)this - 240, &v11, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v12);
  v9 = CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, a4, v8, (__int64)a5, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return v9;
}
