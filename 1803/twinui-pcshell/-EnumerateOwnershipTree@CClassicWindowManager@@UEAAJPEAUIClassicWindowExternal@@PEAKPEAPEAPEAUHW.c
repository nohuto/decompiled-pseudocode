/*
 * XREFs of ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180119F10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18000546C (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180007BF4 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x18000C204 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___ @ 0x180119018 (CClassicWindowManager--ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowManager::EnumerateOwnershipTree(
        CClassicWindowManager *this,
        __int64 (__fastcall ***a2)(__int64 a1, __int64 a2, __int64 *a3),
        unsigned int *a3,
        HWND **a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  void *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  HWND *v18; // [rsp+20h] [rbp-59h] BYREF
  __int64 v19; // [rsp+28h] [rbp-51h]
  __int64 v20; // [rsp+30h] [rbp-49h]
  __int64 v21; // [rsp+38h] [rbp-41h]
  char *v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v24; // [rsp+58h] [rbp-21h]
  char **v25; // [rsp+68h] [rbp-11h]
  __int64 v26; // [rsp+70h] [rbp-9h]
  char **v27; // [rsp+78h] [rbp-1h]
  __int128 v28; // [rsp+80h] [rbp+7h] BYREF
  char **v29; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v31; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v32; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v26 = -2LL;
  *a3 = 0;
  *a4 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(&v32, a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = v32;
  CClassicWindowManager::GetRootOwner(v8, &v31, v32);
  v9 = v31;
  if ( v31 != v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 24LL))(v31);
    v12 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
            (__int64)&v18,
            v19 + 1,
            v11);
    if ( v12 >= 0 )
    {
      v13 = v19++;
      v14 = (__int64 *)&v18[v13];
      if ( v14 )
        *v14 = v10;
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2196LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)v12);
  }
  v22 = (char *)this - 120;
  v23[0] = v7;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v23);
  v23[1] = (__int64)&v18;
  v27 = &v22;
  v33 = v9;
  *(_QWORD *)&v24 = (char *)this - 120;
  *((_QWORD *)&v24 + 1) = &v33;
  v25 = &v22;
  v28 = v24;
  v29 = &v22;
  CClassicWindowManager::ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___((__int64)this - 120, (__int64)&v28);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(v23);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = v19;
  if ( v19 )
  {
    *a4 = v18;
    v18 = 0LL;
    v19 = 0LL;
    v21 = 0LL;
    *a3 = v15;
  }
  v16 = *a4 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v31);
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v18);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v32);
  return v16;
}
