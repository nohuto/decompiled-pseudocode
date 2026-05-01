/*
 * XREFs of ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180132FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrame@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180132D08 (--$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameFactory::CreateFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper **a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  char v7; // di
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationFrame *v11; // [rsp+70h] [rbp+30h] BYREF
  struct IPrivilegedPresentationOperations *v12; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationFrame *v13; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0LL;
  v4 = *((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v5 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v4 + 24LL))(v4, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 1;
    v12 = (struct IPrivilegedPresentationOperations *)*((_QWORD *)this + 2);
    v13 = v11;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<FrameWrapper,IApplicationFrameWrapper,IApplicationFrame *,IPrivilegedPresentationOperations *>(
           a2,
           &v13,
           &v12);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v6 = 0;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x160,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v8);
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD, struct IApplicationFrame *))(**((_QWORD **)this + 3) + 32LL))(
        *((_QWORD *)this + 3),
        v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v6;
}
