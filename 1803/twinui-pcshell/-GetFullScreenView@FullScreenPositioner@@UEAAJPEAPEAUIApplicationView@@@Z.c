/*
 * XREFs of ?GetFullScreenView@FullScreenPositioner@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18014D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall FullScreenPositioner::GetFullScreenView(FullScreenPositioner *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (struct IApplicationView **)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)this + 12);
    *a2 = *v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
}
