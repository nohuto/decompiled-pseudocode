/*
 * XREFs of CTSimpleFixedArray_Microsoft::WRL::ComPtr_IApplicationView__CSimpleArrayStandardCompareHelper_Microsoft::WRL::ComPtr_IApplicationView_____::FindEx_CLambdaCompareHelper__lambda_09315cf6dca91d47eb848cf9d5fb5e53_____ @ 0x1800F9B84
 * Callers:
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800F4284 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_Microsoft::WRL::ComPtr_IApplicationView__CSimpleArrayStandardCompareHelper_Microsoft::WRL::ComPtr_IApplicationView_____::FindEx_CLambdaCompareHelper__lambda_09315cf6dca91d47eb848cf9d5fb5e53_____(
        _QWORD *a1,
        struct IUnknown ***a2,
        CWinRTApplicationView **a3,
        _QWORD *a4,
        CWinRTApplicationView **a5)
{
  __int64 v9; // rdi
  BOOL v10; // ebx
  struct IUnknown *v12; // [rsp+60h] [rbp+30h] BYREF
  CWinRTApplicationView *v13; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  a5 = &v13;
  while ( 1 )
  {
    v13 = *a3;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v13);
    v12 = *(struct IUnknown **)(*a1 + 8 * v9);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v12);
    v10 = SHIsSameObject(v12, **a2) == 0;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v12);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    if ( !v10 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
