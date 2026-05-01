/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F09A0
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180106CF0 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByAppId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800703F0 (--$FindEx@VCImmersiveAppFinderByAppId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInt.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(
        __int64 a1,
        const unsigned __int16 **a2,
        _QWORD *a3,
        ...)
{
  _QWORD *v4; // rsi
  int v5; // edi
  CWinRTApplicationView *v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  CWinRTApplicationView *v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, CWinRTApplicationView *);
  if ( a3 )
    *a3 = 0LL;
  v9 = 0LL;
  v4 = (_QWORD *)(a1 + 624);
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByAppId>(
         (_QWORD *)(a1 + 624),
         a2,
         (CWinRTApplicationView **)va,
         &v8,
         v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  if ( v5 >= 0 && a3 )
    return (unsigned int)(***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*v4 + 8 * v8))(
                           *(_QWORD *)(*v4 + 8 * v8),
                           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                           a3);
  return (unsigned int)v5;
}
