/*
 * XREFs of ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1802D2FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x180283C34 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1802D2DE4 (-CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1802D38A0 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 *     ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x1802D3904 (-RemoveAt@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntry.c)
 */

__int64 __fastcall ScreenManager::GetAppViewCloseOverrideOperation(
        ScreenManager *this,
        struct IAppLayout *a2,
        struct IUnknown *a3,
        char a4,
        struct IAppLayoutOperation **a5)
{
  struct IAppLayoutOperation **v5; // r15
  unsigned int v9; // ebx
  char *v11; // r14
  __int64 v12; // rbx
  char v13; // si
  struct IApplicationView *v14; // r8
  int ReverseAppToAppSwitchLayoutOperation; // eax
  struct IApplicationView *v16[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct ITabletModePositioner *v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 320) )
  {
    if ( !*((_QWORD *)this + 37) )
      return 2147500037LL;
    v11 = (char *)this + 288;
    v12 = *((_QWORD *)this + 36);
    v13 = 1;
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v12 + 16), a3)
      && (*(unsigned int (__fastcall **)(_QWORD, struct IAppLayout *, __int64))(**(_QWORD **)(v12 + 8) + 200LL))(
           *(_QWORD *)(v12 + 8),
           a2,
           2LL) )
    {
      v18 = 0LL;
      v16[0] = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
      TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        *(TabletModePositionerHelpers **)v12,
        (struct IAppLayout *)&a5,
        (unsigned int *)&v18,
        v16);
      LOBYTE(v14) = a4;
      ReverseAppToAppSwitchLayoutOperation = ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
                                               *((ScreenManagerHelpers **)this + 35),
                                               v18,
                                               v14,
                                               (__int64)v5);
      v9 = ReverseAppToAppSwitchLayoutOperation;
      if ( ReverseAppToAppSwitchLayoutOperation >= 0 )
      {
        CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
          v11,
          0LL);
        v13 = 0;
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)ReverseAppToAppSwitchLayoutOperation);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
      if ( !v13 )
        return v9;
    }
    else
    {
      v9 = -2147019873;
    }
    CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((char *)this + 288);
  }
  else
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)0x8007139FLL);
  }
  return v9;
}
