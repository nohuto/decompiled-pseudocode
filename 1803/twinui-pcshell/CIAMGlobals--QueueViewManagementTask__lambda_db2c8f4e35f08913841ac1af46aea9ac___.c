/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x1801031C0
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x180104E54 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___ @ 0x180102D4C (Windows--Internal--ComTaskPool--QueueTask__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(
        PVOID a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
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
    v10[0] = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___(
           v7,
           v6,
           (unsigned int)v3[15].Ptr,
           &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  return v5;
}
