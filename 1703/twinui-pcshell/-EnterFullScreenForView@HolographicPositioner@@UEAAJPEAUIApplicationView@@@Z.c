/*
 * XREFs of ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800D8EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithViewHostItemData @ 0x1800D73B4 (_LogEventWithViewHostItemData.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB8B4 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::EnterFullScreenForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  HolographicPositioner *v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = (HolographicPositioner *)((char *)this - 104);
  HolographicPositioner::_FindViewHostItem((char *)this - 104, &v12, a2);
  v4 = v12;
  if ( !v12 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    goto LABEL_11;
  }
  LogEventWithViewHostItemData(
    v12,
    (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::EnterFullScreenForView<unsigned short const *,unsigned int &>);
  v11 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
         v4,
         &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
         &v11);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 800LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 801LL;
    goto LABEL_7;
  }
  HolographicPositioner::_UpdateViewStateDataForView(v3, a2);
  v5 = 0;
LABEL_9:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_11:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
