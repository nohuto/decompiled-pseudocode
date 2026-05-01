/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___ @ 0x1801196EC
 * Callers:
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x18011A3B0 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x1801194B4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___(
        PVOID a1,
        __int128 *a2)
{
  PSRWLOCK v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
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
    v10 = *a2;
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
           v7,
           v6,
           (unsigned int)v3[15].Ptr,
           (char *)&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  return v5;
}
