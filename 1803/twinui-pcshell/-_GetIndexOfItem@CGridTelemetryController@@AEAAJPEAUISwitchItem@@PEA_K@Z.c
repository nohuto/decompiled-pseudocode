/*
 * XREFs of ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1802A0A84
 * Callers:
 *     ?CloseSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1802A0710 (-CloseSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?ContextMenuInvoked@CGridTelemetryController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1802A0760 (-ContextMenuInvoked@CGridTelemetryController@@UEAAXPEAUISwitchItem@@I@Z.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1802A0820 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGridTelemetryController::_GetIndexOfItem(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 3);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &GUID_25a5b310_421f_4a9e_be18_ac8ad18ba2a9,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 182LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridtelemetry.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct ISwitchItem *, unsigned __int64 *))(*(_QWORD *)v11 + 24LL))(
         v11,
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 183LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7;
}
