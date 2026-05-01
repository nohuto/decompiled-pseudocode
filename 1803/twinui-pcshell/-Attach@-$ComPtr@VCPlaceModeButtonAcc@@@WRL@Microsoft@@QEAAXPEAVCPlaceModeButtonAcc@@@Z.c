/*
 * XREFs of ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x1802F8350
 * Callers:
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x1802F7D68 (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x1802F9040 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802F9930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1802F9930.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(v4);
  *a1 = a2;
  return result;
}
