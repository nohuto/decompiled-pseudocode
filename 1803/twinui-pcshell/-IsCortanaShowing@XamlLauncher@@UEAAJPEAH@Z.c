/*
 * XREFs of ?IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z @ 0x180077DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180078E30 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800933D8 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::IsCortanaShowing(XamlLauncher *this, int *a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(XamlLauncherState *__hidden, int *); // rax
  int IsCortanaShowing; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  XamlLauncherState *v12; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = (_QWORD *)((char *)this + 184);
  if ( *v3 )
  {
    v12 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v3, &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = (unsigned int)v4;
      v10 = 660LL;
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(XamlLauncherState *__hidden, int *))(*(_QWORD *)v12 + 56LL);
      if ( v6 == XamlLauncherState::IsCortanaShowing )
        IsCortanaShowing = XamlLauncherState::IsCortanaShowing(v12, a2);
      else
        IsCortanaShowing = v6(v12, a2);
      v5 = IsCortanaShowing;
      if ( IsCortanaShowing >= 0 )
        goto LABEL_6;
      v9 = (unsigned int)IsCortanaShowing;
      v10 = 661LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v9,
      -2);
LABEL_6:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    return v5;
  }
  return 2147943568LL;
}
