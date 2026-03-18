/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x14048A010
 * Callers:
 *     PiPnpRtlIsDeviceValidForSession @ 0x140489DDC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140489ECC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiUEventApplyAdditionalFilters @ 0x1404A6BE8 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebp
  __int64 v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  *IsServiceSession = !v7
                   || (*((_DWORD *)Token + 50) & 0x20) == 0
                   && (v8 = *(_QWORD *)(*((_QWORD *)Token + 27) + 160LL)) != 0
                   && v7 == (unsigned int)PsGetServerSiloServiceSessionId(v8);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0;
}
