/*
 * XREFs of ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800F4284
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800978D0 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CTSimpleFixedArray_Microsoft::WRL::ComPtr_IApplicationView__CSimpleArrayStandardCompareHelper_Microsoft::WRL::ComPtr_IApplicationView_____::FindEx_CLambdaCompareHelper__lambda_09315cf6dca91d47eb848cf9d5fb5e53_____ @ 0x1800F9B84 (CTSimpleFixedArray_Microsoft--WRL--ComPtr_IApplicationView__CSimpleArrayStandardCompareHelper_Mi.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18013C3FC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  CWinRTApplicationView *v6; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationView *v7; // [rsp+68h] [rbp+10h] BYREF
  struct IApplicationView **v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = this + 23;
  AcquireSRWLockExclusive(this + 23);
  v7 = a2;
  v6 = 0LL;
  v8 = &v7;
  LODWORD(a2) = CTSimpleFixedArray_Microsoft::WRL::ComPtr_IApplicationView__CSimpleArrayStandardCompareHelper_Microsoft::WRL::ComPtr_IApplicationView_____::FindEx_CLambdaCompareHelper__lambda_09315cf6dca91d47eb848cf9d5fb5e53_____(
                  (int)this + 192,
                  (unsigned int)&v8,
                  (unsigned int)&v6,
                  (unsigned int)&v9);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v6);
  v5 = -1LL;
  if ( (int)a2 >= 0 )
    v5 = v9;
  if ( v5 != -1 )
    CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(&this[24]);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
