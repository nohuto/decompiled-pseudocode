/*
 * XREFs of ?SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180285304
 * Callers:
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180277660 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewInvocationAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@$$QEA$$T@Z @ 0x180284FB8 (--$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@Wea.c)
 */

__int64 __fastcall SnapAssistViewInvocationAnimationCoordinator_CreateInstance(
        struct IWeakReference *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IWeakReference *v9; // [rsp+30h] [rbp+8h] BYREF
  MultitaskingViewInvocationAnimationCoordinator *v10; // [rsp+38h] [rbp+10h] BYREF
  struct IMultitaskingViewAnimation *v11; // [rsp+40h] [rbp+18h] BYREF

  v9 = a1;
  *a3 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<SnapAssistViewInvocationAnimationCoordinator,SnapAssistViewInvocationAnimationCoordinator,WeakReference::IWeakReference * &,std::nullptr_t>(
         &v10,
         &v9,
         &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 21LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = (**(__int64 (__fastcall ***)(MultitaskingViewInvocationAnimationCoordinator *, GUID *, void **))v10)(
         v10,
         &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 22LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v5;
}
