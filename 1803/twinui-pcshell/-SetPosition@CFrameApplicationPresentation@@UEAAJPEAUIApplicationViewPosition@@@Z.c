/*
 * XREFs of ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180014800
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___ @ 0x180012134 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SetPosition(
        CFrameApplicationPresentation *this,
        struct IApplicationViewPosition *a2)
{
  void (__fastcall *v4)(struct IApplicationViewPosition *); // rax
  __int64 v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
  v6[0] = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
  v6[1] = (__int64)this;
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___(this, v6);
  if ( a2 )
  {
    v4 = *(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(a2);
    else
      v4(a2);
  }
  return 0LL;
}
