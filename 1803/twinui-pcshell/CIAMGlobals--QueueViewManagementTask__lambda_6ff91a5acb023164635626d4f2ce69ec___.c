/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec___ @ 0x180103030
 * Callers:
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x18010A250 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_edcf8a708a912462aa4ae38346069636___ @ 0x180102F10 (Windows--Internal--ComTaskPool--QueueTask__lambda_edcf8a708a912462aa4ae38346069636___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec___(
        PVOID a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rsi
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
    v10[0] = 0LL;
    if ( v10 != a2 )
    {
      v10[0] = *a2;
      *a2 = 0LL;
    }
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_edcf8a708a912462aa4ae38346069636___(
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
