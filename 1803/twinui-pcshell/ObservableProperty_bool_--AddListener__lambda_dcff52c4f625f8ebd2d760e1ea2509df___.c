/*
 * XREFs of ObservableProperty_bool_::AddListener__lambda_dcff52c4f625f8ebd2d760e1ea2509df___ @ 0x180295994
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x180295FEC (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df__&___ptr64_void_____ptr64_&___ptr64_ @ 0x180295AF8 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509d.c)
 */

__int64 __fastcall ObservableProperty_bool_::AddListener__lambda_dcff52c4f625f8ebd2d760e1ea2509df___(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df______ptr64_void_____ptr64_____ptr64; // rax
  void *v6; // r8
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = a3;
  v16 = 0LL;
  ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df______ptr64_void_____ptr64_____ptr64 = (__int64 *)Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df______ptr64_void_____ptr64_____ptr64_(&v15, a2, &v16);
  v7 = 0;
  v8 = *ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df______ptr64_void_____ptr64_____ptr64;
  *ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df_____lambda_dcff52c4f625f8ebd2d760e1ea2509df______ptr64_void_____ptr64_____ptr64 = 0LL;
  v9 = a1[2];
  if ( v9 != a1[4]
    || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v9 + 1,
               v6),
        v10 = v8,
        v7 >= 0) )
  {
    ++a1[2];
    v10 = v8;
    v11 = (__int64 *)(a1[1] + 8 * (a1[2] - 1LL));
    if ( v11 )
    {
      *v11 = 0LL;
      if ( v11 != &v16 )
      {
        *v11 = v8;
        v8 = 0LL;
        v10 = 0LL;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (unsigned int)v7;
}
