/*
 * XREFs of ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180031F34
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18003208C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?get_AppUserModelId@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004FCB0 (-get_AppUserModelId@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ @ 0x180091310 (-Release@-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_CreatePerApplicationData(__int64 a1, ViewWrapperBase *a2, HSTRING **a3)
{
  HSTRING *v6; // rax
  HSTRING *v7; // rbx
  HSTRING *v8; // rdx
  __int64 (__fastcall *v9)(ViewWrapperBase *__hidden, HSTRING *); // rax
  int AppUserModelId; // eax
  int v11; // edi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  HSTRING **v14; // rdx
  __int64 (__fastcall *v15)(void *); // rax
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (HSTRING *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[1] = 0LL;
    *v6 = (HSTRING)&CRefCountedObject<ViewEventDispatcher::PerApplicationData>::`vftable';
    *((_DWORD *)v6 + 6) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v11 = -2147024882;
    v17 = 3190LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v11,
      -2);
    goto LABEL_11;
  }
  (*((void (__fastcall **)(HSTRING *))*v7 + 1))(v7);
  v7[2] = 0LL;
  v8 = v7 + 1;
  v9 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, HSTRING *))(*(_QWORD *)a2 + 56LL);
  if ( v9 == ViewWrapperBase::get_AppUserModelId )
    AppUserModelId = ViewWrapperBase::get_AppUserModelId(a2, v8);
  else
    AppUserModelId = v9(a2, v8);
  v11 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v17 = 3192LL;
    goto LABEL_22;
  }
  v12 = (_QWORD *)(a1 + 584);
  v13 = v12[1];
  if ( v13 == v12[3] )
  {
    v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            v12,
            v13 + 1);
    if ( v11 < 0 )
    {
      v17 = 3193LL;
      goto LABEL_22;
    }
  }
  v14 = (HSTRING **)(*v12 + 8 * v12[1]++);
  if ( v14 )
  {
    *v14 = v7;
    (*((void (__fastcall **)(HSTRING *))*v7 + 1))(v7);
  }
  (*((void (__fastcall **)(HSTRING *))*v7 + 1))(v7);
  *a3 = v7;
  v11 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (__int64 (__fastcall *)(void *))*((_QWORD *)*v7 + 2);
    if ( v15 == CRefCountedObject<ViewEventDispatcher::PerApplicationData>::Release )
      CRefCountedObject<ViewEventDispatcher::PerApplicationData>::Release(v7);
    else
      v15(v7);
  }
  return (unsigned int)v11;
}
