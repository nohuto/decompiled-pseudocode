/*
 * XREFs of ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC
 * Callers:
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x180015318 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800154DC (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800156A0 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180023514 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x1800248DC (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x18006791C (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@Z@std@@@Z @ 0x180080FF8 (-Initialize@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x1800811BC (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x1800903A4 (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800B1E90 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B673C (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B6950 (-OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1800B6A30 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B6B0C (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800B70B0 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1);
  a1[1] = 0LL;
  v5 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
