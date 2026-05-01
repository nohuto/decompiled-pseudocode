/*
 * XREFs of ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180013E00
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___ @ 0x180011CCC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        struct IApplicationViewTitlebarConfiguration *a2)
{
  unsigned int v4; // edi
  void (__fastcall *v5)(struct IApplicationViewTitlebarConfiguration *); // rax
  __int64 v7[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
  v7[0] = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
  v7[1] = (__int64)this;
  v4 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___(this, v7);
  if ( a2 )
  {
    v5 = *(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(a2);
    else
      v5(a2);
  }
  return v4;
}
