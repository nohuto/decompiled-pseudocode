/*
 * XREFs of ?SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@AEBU_GUID@@PEAPEAX@Z @ 0x180285804
 * Callers:
 *     ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x180276CF0 (-AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewDismissalAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Z @ 0x180285474 (--$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@Weak.c)
 */

__int64 __fastcall SnapAssistViewDismissalAnimationCoordinator_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewAnimation *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IWeakReference *v10; // [rsp+30h] [rbp+8h] BYREF
  struct IMultitaskingViewAnimation *v11; // [rsp+38h] [rbp+10h] BYREF
  MultitaskingViewDismissalAnimationCoordinator *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<SnapAssistViewDismissalAnimationCoordinator,SnapAssistViewDismissalAnimationCoordinator,WeakReference::IWeakReference * &,IMultitaskingViewAnimation * &>(
         &v12,
         &v10,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 22LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = (**(__int64 (__fastcall ***)(MultitaskingViewDismissalAnimationCoordinator *, GUID *, void **))v12)(
         v12,
         &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4,
         a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 23LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v6;
}
