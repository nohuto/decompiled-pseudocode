/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18001D980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18013C3FC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        struct IUnknown *a1,
        struct IUnknown *a2,
        int a3)
{
  RTL_SRWLOCK *v5; // rbx
  struct IUnknown *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  struct IUnknown *v11; // rdi
  int v12; // eax
  struct IUnknownVtbl *lpVtbl; // rdx
  struct IUnknown **v14; // r8
  BOOL v15; // edi
  CWinRTApplicationView *v16; // [rsp+20h] [rbp-40h] BYREF
  struct IUnknown *v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-30h]
  struct IUnknown *v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  CWinRTApplicationView **v21; // [rsp+48h] [rbp-18h]
  struct IUnknown **v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IUnknown *v24; // [rsp+98h] [rbp+38h] BYREF

  v18 = -2LL;
  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = (RTL_SRWLOCK *)&a1[23];
    v17 = a1 + 23;
    AcquireSRWLockExclusive((PSRWLOCK)&a1[23]);
    v24 = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v24);
    v11 = a1 + 24;
    v12 = 0;
    lpVtbl = v11[1].lpVtbl;
    if ( lpVtbl != v11[3].lpVtbl
      || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  v11,
                  (char *)&lpVtbl->QueryInterface + 1),
          v12 >= 0) )
    {
      v14 = (struct IUnknown **)(&v11->lpVtbl->QueryInterface + (__int64)v11[1].lpVtbl++);
      if ( v14 )
      {
        *v14 = 0LL;
        if ( v14 != &v24 )
        {
          *v14 = a2;
          v24 = 0LL;
        }
      }
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFC,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v12,
        (int)v16);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v24);
  }
  else
  {
    v5 = (RTL_SRWLOCK *)&a1[23];
    v19 = a1 + 23;
    AcquireSRWLockExclusive((PSRWLOCK)&a1[23]);
    v17 = a2;
    v20 = 0LL;
    v6 = a1 + 24;
    v7 = 0LL;
    v8 = 0LL;
    if ( a1[25].lpVtbl )
    {
      v21 = &v16;
      v22 = &v24;
      while ( 1 )
      {
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v16);
        v24 = (struct IUnknown *)*((_QWORD *)&v6->lpVtbl->QueryInterface + v8);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v24);
        v15 = SHIsSameObject(v24, v17) == 0;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v24);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        if ( !v15 )
          break;
        if ( (struct IUnknownVtbl *)++v8 >= v6[1].lpVtbl )
          goto LABEL_5;
      }
      v7 = v8;
      v9 = 0;
    }
    else
    {
LABEL_5:
      v9 = -2147319765;
    }
    v10 = -1LL;
    if ( v9 >= 0 )
      v10 = v7;
    if ( v10 != -1 )
      CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(v6);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
