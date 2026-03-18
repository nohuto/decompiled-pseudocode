/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C005564C
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C00096B0 (RIMRemoveFromActiveDevices.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004F710 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMHidGetCaps @ 0x1C00544D4 (RIMHidGetCaps.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00671B4 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00671EC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0093F10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0094074 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00940C4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C009440C (rimResetPnpRemovePendingStateBits.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00954F4 (rimFreeAutoRepeatCompleteFrame.c)
 *     UserAddBaseWindowHandle @ 0x1C00E66C0 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00E68A0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C00E6A4C (UserFindBaseWindowHandle.c)
 *     RIMAddToActiveDevices @ 0x1C0105BF0 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 *     rimDispatchCompleteFrame @ 0x1C010CB20 (rimDispatchCompleteFrame.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C010CFA0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va, 8LL, 0LL);
}
