/*
 * XREFs of PepUpdatePerformanceConstraint @ 0x1C0029904
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C000B060 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepUpdatePerformanceConstraint(__int64 a1)
{
  unsigned int v2; // edi
  int v4; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 56);
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x18u,
    (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids,
    v4);
  v2 = 0;
  if ( *(_QWORD *)(a1 + 1152) )
  {
    _m_prefetchw((const void *)(a1 + 1148));
    if ( !(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(a1 + 1148), 1u) )
      IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1152), PepUpdatePerformanceConstraintWorker, CriticalWorkQueue, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
