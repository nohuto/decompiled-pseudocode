/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByAppId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800703F0
 * Callers:
 *     ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x180044A50 (-GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F09A0 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z @ 0x18004CDA0 (-IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByAppId>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        CWinRTApplicationView **a3,
        _QWORD *a4,
        CWinRTApplicationView *a5)
{
  __int64 v9; // rdi
  CWinRTApplicationView *v10; // rcx
  CWinRTApplicationView *v11; // rcx
  int v12; // ebx
  __int64 (__fastcall *v13)(LPCWCH *, const unsigned __int16 *, int *); // rax
  const unsigned __int16 *v14; // rdx
  CWinRTApplicationView *v16[2]; // [rsp+20h] [rbp-10h] BYREF
  int v17; // [rsp+60h] [rbp+30h] BYREF
  CImmersiveApp *v18; // [rsp+78h] [rbp+48h] BYREF

  v16[1] = (CWinRTApplicationView *)-2LL;
  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v10 = *a3;
    v16[0] = v10;
    if ( v10 )
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(CWinRTApplicationView **)(*a1 + 8 * v9);
    a5 = v11;
    if ( v11 )
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = -1;
    v18 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&a5, (__int64 *)&v18) >= 0 )
    {
      v13 = *(__int64 (__fastcall **)(LPCWCH *, const unsigned __int16 *, int *))(*(_QWORD *)v18 + 88LL);
      v14 = *a2;
      if ( v13 == CImmersiveApp::IsEqualByAppId )
        CImmersiveApp::IsEqualByAppId((LPCWCH *)v18, v14, &v17);
      else
        v13((LPCWCH *)v18, v14, &v17);
      v12 = (v17 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
    if ( !v12 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
