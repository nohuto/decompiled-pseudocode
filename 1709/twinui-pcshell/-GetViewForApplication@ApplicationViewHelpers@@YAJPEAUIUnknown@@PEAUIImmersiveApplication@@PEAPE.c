/*
 * XREFs of ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1801CD12C
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x180040170 (-DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18004FE3C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewForApplication(
        IUnknown *punk,
        struct IUnknown *a2,
        struct IImmersiveApplication *a3,
        struct IApplicationView **a4)
{
  __int64 *v7; // rax
  HRESULT Service; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v14 = 0LL;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  Service = IUnknown_QueryService(
              punk,
              &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
              &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
              (void **)v7);
  v9 = Service;
  if ( Service >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, struct IImmersiveApplication *))(*(_QWORD *)v14 + 56LL))(
            v14,
            a2,
            a3);
    v9 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)Service);
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}
