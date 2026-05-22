/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800E1F66
 * Callers:
 *     __imp_load_MITRegisterManipulationThread @ 0x1800E1F5A (__imp_load_MITRegisterManipulationThread.c)
 *     __imp_load_MITSetManipulationInputTarget @ 0x1800E1FDF (__imp_load_MITSetManipulationInputTarget.c)
 *     __imp_load_MITStopAndEndInertia @ 0x1800E1FEB (__imp_load_MITStopAndEndInertia.c)
 *     __imp_load_MITUpdateInputGlobals @ 0x1800E267A (__imp_load_MITUpdateInputGlobals.c)
 *     __imp_load_MITCoreMsgKOpenConnectionTo @ 0x1800E2686 (__imp_load_MITCoreMsgKOpenConnectionTo.c)
 *     __imp_load_MITSetInputCallbacks @ 0x1800E2692 (__imp_load_MITSetInputCallbacks.c)
 *     __imp_load_MITEnableMouseIntercept @ 0x1800E2A48 (__imp_load_MITEnableMouseIntercept.c)
 *     __imp_load_MITDisableMouseIntercept @ 0x1800E2A54 (__imp_load_MITDisableMouseIntercept.c)
 *     __imp_load_MITSynthesizeMouseInput @ 0x1800E2A60 (__imp_load_MITSynthesizeMouseInput.c)
 *     __imp_load_MITSynthesizeTouchInput @ 0x1800E2A6C (__imp_load_MITSynthesizeTouchInput.c)
 *     __imp_load_MITInjectLegacyISMTouchFrame @ 0x1800E2A78 (__imp_load_MITInjectLegacyISMTouchFrame.c)
 *     __imp_load_MITSetInputDelegationMode @ 0x1800E2A84 (__imp_load_MITSetInputDelegationMode.c)
 *     __imp_load_MITBindInputTypeToMonitors @ 0x1800E2A90 (__imp_load_MITBindInputTypeToMonitors.c)
 *     __imp_load_MITSetForegroundRoutingInfo @ 0x1800E2A9C (__imp_load_MITSetForegroundRoutingInfo.c)
 *     __imp_load_MITSetLastInputRecipient @ 0x1800E2FBD (__imp_load_MITSetLastInputRecipient.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002D5D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_mit_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
