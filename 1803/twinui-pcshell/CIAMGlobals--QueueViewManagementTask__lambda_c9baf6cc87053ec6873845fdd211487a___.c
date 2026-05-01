/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___ @ 0x1801030F8
 * Callers:
 *     _lambda_a3dacda60d197dca336493a83fab45ae_::operator() @ 0x180104DB4 (_lambda_a3dacda60d197dca336493a83fab45ae_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_df912a8f06fbc10e53f38c770b2353ff___ @ 0x180102DDC (Windows--Internal--ComTaskPool--QueueTask__lambda_df912a8f06fbc10e53f38c770b2353ff___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___(
        PVOID a1,
        void **a2)
{
  PSRWLOCK v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Ptr; // [rsp+50h] [rbp+8h] BYREF

  Ptr = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v4 = (__int64)Ptr;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Ptr);
  if ( v4 )
  {
    v9 = v4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    v10[0] = 0LL;
    if ( v10 != a2 )
    {
      v10[0] = *a2;
      *a2 = 0LL;
    }
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_df912a8f06fbc10e53f38c770b2353ff___(
           v7,
           v6,
           (unsigned int)v3[15].Ptr,
           &v9);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  return v5;
}
