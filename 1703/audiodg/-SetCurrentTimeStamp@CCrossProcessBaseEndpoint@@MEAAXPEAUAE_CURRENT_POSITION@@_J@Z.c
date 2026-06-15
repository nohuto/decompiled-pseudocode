/*
 * XREFs of ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x1400190C0
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140018D40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall CCrossProcessBaseEndpoint::SetCurrentTimeStamp(
        CCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        __int64 a3)
{
  BOOL v6; // r10d
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-78h] BYREF
  __int64 Flag; // [rsp+60h] [rbp-38h]
  UINT64 u64PaddingFrames; // [rsp+68h] [rbp-30h]
  HNSTIME hnsQPCPosition; // [rsp+70h] [rbp-28h]
  UINT64 u64DevicePosition; // [rsp+78h] [rbp-20h]
  UINT64 u64StreamPosition; // [rsp+80h] [rbp-18h]

  v6 = *(_DWORD *)(*((_QWORD *)this + 8) + 152LL) == 0;
  *(struct AE_CURRENT_POSITION *)(*((_QWORD *)this + 8) + 40LL * (*(_DWORD *)(*((_QWORD *)this + 8) + 152LL) == 0) + 24) = *a2;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 8) + 152LL), v6);
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[44] = 0x20000;
    strcpy(EventTrace, "h");
    Flag = a2->Flag;
    u64PaddingFrames = a2->u64PaddingFrames;
    hnsQPCPosition = a2->hnsQPCPosition;
    u64DevicePosition = a2->u64DevicePosition;
    u64StreamPosition = a2->u64StreamPosition;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_TIMESTAMP;
    *(_WORD *)&EventTrace[4] = 1283;
    *(_QWORD *)&EventTrace[48] = 0LL;
    *(_DWORD *)&EventTrace[56] = 0;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 0, 0) & 2) == 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 8) + 104LL) = a2->u64DevicePosition;
    *(_QWORD *)(*((_QWORD *)this + 8) + 120LL) = a2->u64PaddingFrames;
    *(_QWORD *)(*((_QWORD *)this + 8) + 128LL) = a2->hnsQPCPosition;
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 8) + 144LL), a3);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 6u);
  }
}
