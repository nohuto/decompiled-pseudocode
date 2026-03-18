/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0008308
 * Callers:
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     Interrupter_InitializeForOffload @ 0x1C0017924 (Interrupter_InitializeForOffload.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 544));
  v2 = *(_DWORD *)(a1 + 536);
  if ( !v2 && *(_DWORD *)(a1 + 532) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v2 = *(_DWORD *)(a1 + 536);
  }
  v3 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(a1 + 536) = v2 + 1;
  return DynamicLock_Release(v3);
}
