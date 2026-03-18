/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x1C001917C
 * Callers:
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017FE0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019690 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0019850 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019E64 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A69C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BBE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0034C10 (UsbDevice_InitializeEndpointContext.c)
 *     UsbDevice_SetAddress @ 0x1C00352C0 (UsbDevice_SetAddress.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C003CC48 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     TR_GetDequeuePointer @ 0x1C002322C (TR_GetDequeuePointer.c)
 */

__int64 __fastcall Endpoint_GetDequeuePointer(__int64 a1, int a2)
{
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( !a2 )
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 24LL);
    v3 = *(_QWORD *)(104LL * (unsigned int)(a2 - 1) + *(_QWORD *)(a1 + 136) + 48);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 88);
  }
  return TR_GetDequeuePointer(v3);
}
