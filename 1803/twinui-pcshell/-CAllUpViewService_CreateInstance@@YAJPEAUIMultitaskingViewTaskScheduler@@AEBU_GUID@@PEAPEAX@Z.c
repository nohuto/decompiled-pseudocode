/*
 * XREFs of ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x18026AB78
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802683BC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAllUpViewService@@UIEdgeUiTouchInvocation@@UIAllUpViewInvoker@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAllUpViewService@@UIEdgeUiTouchInvocation@@UIAllUpViewInvoker@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18026A5F0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithS.c)
 *     ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x18026A688 (--$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DF878 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAllUpViewService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CAllUpViewService *v9; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v9);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CAllUpViewService,CAllUpViewService,IMultitaskingViewTaskScheduler * &>(&v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 112LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IAllUpViewService,IEdgeUiTouchInvocation,IAllUpViewInvoker>>(
         (__int64)v9,
         &GUID_f36737f7_ff9b_4661_a1c9_82f572069857,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 113LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v9);
  return v5;
}
