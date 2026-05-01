/*
 * XREFs of ??$FindEx@VCAppLayoutOperationItemFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByView@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18030F848
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x180311258 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
        __int64 *a1,
        struct IUnknown **a2,
        struct IUnknown *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rbx
  struct IUnknown *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v8 = *a1;
    v12 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * v4);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v12);
    if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v10 + 32LL))(
           v10,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v12) >= 0 )
      v9 = ((unsigned int)SHIsSameObject(v12, *a2) != 0) - 1;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v12);
    if ( !v9 )
      break;
    if ( ++v4 >= (unsigned __int64)a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
