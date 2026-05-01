/*
 * XREFs of ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180226600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     XamlLauncher_CreateInstance @ 0x18022A980 (XamlLauncher_CreateInstance.c)
 */

__int64 __fastcall XamlLauncherFactory::CreateInstance(
        XamlLauncherFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( !a2 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = XamlLauncher_CreateInstance(&v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**v11)(v11, a3, a4);
      v6 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        return v6;
      }
      v8 = 149LL;
    }
    else
    {
      v8 = 148LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.h",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v6 = -2147221232;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x91,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.h",
    (const char *)0x80040110LL);
  return v6;
}
