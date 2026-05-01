/*
 * XREFs of ?ItemRemoved@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1802A98D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ItemRemoved(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v20; // [rsp+50h] [rbp+20h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 1;
  if ( !*(_BYTE *)(a1 + 232) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1) )
    return 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v8 = (**a3)(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v20);
  v9 = v8;
  if ( v8 >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
    if ( v21 )
    {
      v17 = v20;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v17);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 40LL))(v21, &v18);
      v12 = *(_QWORD *)(a1 + 64);
      v9 = 0;
      if ( v12 != *(_QWORD *)(a1 + 80)
        || (v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                   a1 + 56,
                   v12 + 1,
                   v11),
            v9 >= 0) )
      {
        ++*(_QWORD *)(a1 + 64);
        v13 = (__int64 *)(16LL * *(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 56) - 16LL);
        if ( v13 )
        {
          *v13 = 0LL;
          if ( v13 != &v17 )
          {
            *v13 = v17;
            v17 = 0LL;
          }
          v14 = v13 + 1;
          *v14 = 0LL;
          if ( v14 != &v18 )
          {
            *v14 = v18;
            v18 = 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      if ( v9 >= 0 )
      {
        LOBYTE(v15) = 1;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 72LL))(v21, v20, v15);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            38LL,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v16);
        *a4 = 0;
        v9 = 0;
        goto LABEL_21;
      }
      v10 = 36LL;
    }
    else
    {
      v9 = -2147023728;
      v10 = 35LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v9);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
    (const char *)(unsigned int)v8);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  return (unsigned int)v9;
}
