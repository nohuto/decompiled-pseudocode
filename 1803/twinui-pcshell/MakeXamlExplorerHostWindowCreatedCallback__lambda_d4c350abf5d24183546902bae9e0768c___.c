/*
 * XREFs of MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c___ @ 0x180203C04
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c___ @ 0x180203724 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d241835469.c)
 */

__int64 __fastcall MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a1 = 0LL;
  XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c = Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c___(&v9, a2);
  if ( *XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c )
    v5 = *XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c
       + 32LL;
  else
    v5 = 0LL;
  *XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c = 0LL;
  v6 = v9;
  v10 = v5;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v3;
}
