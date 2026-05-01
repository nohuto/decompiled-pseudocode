/*
 * XREFs of ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180009620
 * Callers:
 *     ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000AB00 (-ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180121490 (-PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallbac.c)
 *     ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180121940 (-ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@She.c)
 *     ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x180121A40 (-ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCall.c)
 *     ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180125470 (-Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180125580 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d8d2db46f898e0ad7843c45335dab43b___ @ 0x18000CD08 (Windows--Internal--ComTaskPool--QueueTask__lambda_d8d2db46f898e0ad7843c45335dab43b___.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001712C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_QueueOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r14
  int v6; // esi
  __int64 v7; // rdx
  void **v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v12; // [rsp+70h] [rbp+40h] BYREF
  CAppViewManager *v13; // [rsp+78h] [rbp+48h] BYREF
  PSRWLOCK v14; // [rsp+80h] [rbp+50h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v14 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
  v5 = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)this + 18);
  if ( v7 != *((_QWORD *)this + 20)
    || (v6 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (char *)this + 136,
               v7 + 1),
        v6 >= 0) )
  {
    v8 = (void **)(*((_QWORD *)this + 17) + 8 * (*((_QWORD *)this + 18))++);
    if ( v8 )
    {
      *v8 = 0LL;
      if ( v8 != &v12 )
      {
        *v8 = a2;
        v12 = 0LL;
      }
    }
    v5 = *((_QWORD *)this + 18) - 1LL;
  }
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v12);
  if ( v6 >= 0 )
  {
    v13 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
    v12 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_d8d2db46f898e0ad7843c45335dab43b___(
           v10,
           v9,
           *((unsigned int *)this + 42),
           &v12,
           -2LL);
    Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(&v12);
    if ( v6 < 0 )
      CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::RemoveAt(
        (char *)this + 136,
        v5);
    Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(&v13);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return (unsigned int)v6;
}
