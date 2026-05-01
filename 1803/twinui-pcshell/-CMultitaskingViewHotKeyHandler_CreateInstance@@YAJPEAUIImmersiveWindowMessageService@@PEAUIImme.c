/*
 * XREFs of ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18026FBAC
 * Callers:
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180268264 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x18026F5B8 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D492C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler_CreateInstance(
        struct IImmersiveWindowMessageService *a1,
        struct IImmersiveMonitorManager *a2,
        struct IApplicationTargetingTracker *a3,
        struct IMultitaskingViewTaskScheduler *a4,
        struct IApplicationViewCollection *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  void **v14; // rcx
  void **v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IImmersiveWindowMessageService *v18; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveMonitorManager *v19; // [rsp+58h] [rbp+28h] BYREF
  struct IApplicationTargetingTracker *v20; // [rsp+60h] [rbp+30h] BYREF
  struct IMultitaskingViewTaskScheduler *v21; // [rsp+68h] [rbp+38h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  v7 = a7;
  a7 = 0LL;
  *v7 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IApplicationTargetingTracker * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
         (CMultitaskingViewHotKeyHandler **)&a7,
         &v18,
         &v19,
         &v20,
         &v21,
         &a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 268LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)v10);
    goto LABEL_15;
  }
  *v7 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1ac62032_7c9f_4d34_8191_c44d7d759dfe, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = a7;
    *v7 = a7;
    (*((void (__fastcall **)(void **))*v15 + 1))(v15);
    v9 = 0;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v12, v12) )
  {
    v14 = a7;
    v9 = 0;
    *v7 = a7;
  }
  else
  {
    if ( InlineIsEqualGUID(v13, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      v14 = a7 + 1;
      *v7 = a7 + 1;
      v9 = 0;
    }
    else
    {
      v9 = -2147467262;
      v14 = 0LL;
    }
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 269LL;
      goto LABEL_14;
    }
  }
  (*((void (__fastcall **)(void **))*v14 + 1))(v14);
LABEL_15:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a7);
  return (unsigned int)v9;
}
