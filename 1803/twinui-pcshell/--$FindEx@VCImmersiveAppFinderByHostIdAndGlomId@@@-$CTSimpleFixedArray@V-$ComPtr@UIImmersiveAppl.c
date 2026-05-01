/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByHostIdAndGlomId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801021EC
 * Callers:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801034D4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180105CC4 (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostIdAndGlomId>(
        _QWORD *a1,
        __int64 a2,
        CWinRTApplicationView **a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  bool v9; // bl
  CWinRTApplicationView *v11; // [rsp+60h] [rbp+8h] BYREF
  CWinRTApplicationView *v12; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v12 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v12);
    v11 = *(CWinRTApplicationView **)(*a1 + 8 * v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v11);
    v9 = (unsigned int)CImmersiveAppFinderByHostIdAndGlomId::Compare(a2, &v11) == 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v9 )
      break;
    if ( (unsigned __int64)++v8 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v8;
  return 0LL;
}
