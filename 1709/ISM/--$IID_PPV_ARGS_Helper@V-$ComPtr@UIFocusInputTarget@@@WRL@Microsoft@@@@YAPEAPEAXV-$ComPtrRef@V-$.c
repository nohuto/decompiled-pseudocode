/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180010340 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 *     ?DeliverMouseInputToInputDest@DWMInputRouter@@UEAAXAEBUtagINPUTDEST@@PEAUInputInfo@@@Z @ 0x18001A9C0 (-DeliverMouseInputToInputDest@DWMInputRouter@@UEAAXAEBUtagINPUTDEST@@PEAUInputInfo@@@Z.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     _lambda_87ad6a4a33ed41043fffaca4615abc7a_::operator() @ 0x1800A9768 (_lambda_87ad6a4a33ed41043fffaca4615abc7a_--operator().c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800A98D8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800AA0A0 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800AA3A0 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 *     ?AreTargetsTheSame@MPCInputRouter@@AEAA_NPEAUIInputTarget@@0@Z @ 0x1800AA7A8 (-AreTargetsTheSame@MPCInputRouter@@AEAA_NPEAUIInputTarget@@0@Z.c)
 *     ??0MPCSharedWorldInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2@Z @ 0x1800AC5CC (--0MPCSharedWorldInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
