/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018094
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180009300 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x18000BA70 (-GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001240C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ??$GetAppPosition@VCImmersiveAppFinderByAppId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@_KPEA_K@Z @ 0x1800193C4 (--$GetAppPosition@VCImmersiveAppFinderByAppId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  __int64 result; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  if ( a3 )
    *a3 = 0LL;
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByAppId>(
             a1 + 560,
             a2,
             a3,
             (__int64 *)va);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 568) + 8 * v7);
      return (**v6)(v6, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
  }
  return result;
}
