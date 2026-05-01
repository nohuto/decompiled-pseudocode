/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___ @ 0x180119618
 * Callers:
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18011A728 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x180119424 (Windows--Internal--ComTaskPool--QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___(
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
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___(
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
