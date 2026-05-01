/*
 * XREFs of ??$FindEx@VCClassicWindowFinderByAppID@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByAppID@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180118F00
 * Callers:
 *     ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x18011AD60 (-SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F5D04 (--$As@UIClassicWindow@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIClassi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByAppID>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  CWinRTApplicationView *v13; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    a5 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&a5);
    v13 = *(CWinRTApplicationView **)(*a1 + 8 * v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v13);
    v12 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(&v13, &v12) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 184LL))(v12, *a2) )
    {
      v10 = 0;
    }
    else
    {
      v10 = -1;
    }
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&a5);
    if ( !v10 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
