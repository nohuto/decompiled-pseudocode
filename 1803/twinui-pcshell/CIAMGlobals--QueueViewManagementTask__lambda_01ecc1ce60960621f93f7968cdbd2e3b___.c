/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___ @ 0x180119544
 * Callers:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18011A904 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x180119394 (Windows--Internal--ComTaskPool--QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___(
        PVOID a1,
        __int64 a2)
{
  PSRWLOCK v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+38h] [rbp-8h]
  PVOID Ptr; // [rsp+50h] [rbp+10h] BYREF

  Ptr = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v4 = (__int64)Ptr;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Ptr);
  if ( v4 )
  {
    v9 = v4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    v10 = 0LL;
    if ( &v10 != (__int64 *)a2 )
    {
      v10 = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    v11 = *(_DWORD *)(a2 + 8);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(
           v7,
           v6,
           (unsigned int)v3[15].Ptr,
           (__int64)&v9);
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  return v5;
}
