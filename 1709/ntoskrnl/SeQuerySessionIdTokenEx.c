/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x1405286B0
 * Callers:
 *     PiPnpRtlIsDeviceValidForSession @ 0x140528478 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140528568 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiUEventApplyAdditionalFilters @ 0x14054D7E8 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x140528750 (PsGetSiloBySessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebp
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 )
    *IsServiceSession = (int)PsGetSiloBySessionId(v7, &v9) >= 0
                     && v7 == (unsigned int)PsGetServerSiloServiceSessionId(v9);
  else
    *IsServiceSession = 1;
  return 0;
}
