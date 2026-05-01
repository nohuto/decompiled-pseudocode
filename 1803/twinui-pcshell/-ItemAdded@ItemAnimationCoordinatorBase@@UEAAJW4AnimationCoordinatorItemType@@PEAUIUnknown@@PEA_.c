/*
 * XREFs of ?ItemAdded@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1802A9620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18013E18C (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ItemAdded(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r14
  void *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  *a4 = 1;
  if ( !*(_BYTE *)(a1 + 232) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
    return 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v8 = (**a3)(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = v19;
    v16 = v19;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v16);
    v14 = *(_QWORD *)(a1 + 32);
    v9 = 0;
    v17 = 0LL;
    if ( v14 != *(_QWORD *)(a1 + 48)
      || (v9 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                 a1 + 24,
                 v14 + 1,
                 v13),
          v9 >= 0) )
    {
      ++*(_QWORD *)(a1 + 32);
      v15 = 32LL * *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24) - 32LL;
      if ( v15 )
      {
        *(_DWORD *)v15 = a2;
        *(_QWORD *)(v15 + 8) = 0LL;
        if ( (__int64 *)(v15 + 8) != &v16 )
        {
          v16 = 0LL;
          *(_QWORD *)(v15 + 8) = v12;
        }
        *(_OWORD *)(v15 + 16) = 0LL;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v9 >= 0 )
    {
      v9 = 0;
      goto LABEL_16;
    }
    v10 = (unsigned int)v9;
    v11 = 21LL;
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 19LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
    (const char *)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return (unsigned int)v9;
}
