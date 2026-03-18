/*
 * XREFs of ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0124F5C
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0126148 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C010C868 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012525C (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::`scalar deleting destructor'(CPTPProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 27) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 81);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  CPTPProcessor::CleanupGestureState(this);
  if ( *((_QWORD *)this + 80) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 392));
  CTouchProcessor::~CTouchProcessor(this);
  Win32FreePool((__int64)this);
  return this;
}
