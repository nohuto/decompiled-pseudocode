/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x18000F39C
 * Callers:
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180006B20 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a6aded1539f40bd962842cbb2a59c971___ @ 0x180004DD8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a6aded1539f40bd962842cbb2a59c971___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___(
        PVOID a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
  PVOID Ptr; // [rsp+50h] [rbp+8h] BYREF

  Ptr = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v4 = (__int64)Ptr;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Ptr);
  if ( v4 )
  {
    v9[0] = v4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9);
    v9[1] = *a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_a6aded1539f40bd962842cbb2a59c971___(
           v6,
           v5,
           (unsigned int)v3[15].Ptr,
           (__int64)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  }
  else
  {
    v7 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  return v7;
}
