/*
 * XREFs of ?UpdateHostedViewPosition@FrameWrapper@@UEAAJXZ @ 0x1801340A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F7918 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FrameWrapper::UpdateHostedViewPosition(FrameWrapper *this)
{
  _QWORD *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7[1] = -2LL;
  v2 = (_QWORD *)((char *)this + 40);
  if ( *v2 )
  {
    v7[0] = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           v2,
           v7);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(FrameWrapper *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v8);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7[0] + 32LL))(v7[0], v8);
        v3 = v4;
        if ( v4 >= 0 )
        {
          v3 = 0;
          goto LABEL_11;
        }
        v5 = 244LL;
      }
      else
      {
        v5 = 243LL;
      }
    }
    else
    {
      v5 = 241LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
    return v3;
  }
  v3 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEE,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)0x8007139FLL);
  return v3;
}
