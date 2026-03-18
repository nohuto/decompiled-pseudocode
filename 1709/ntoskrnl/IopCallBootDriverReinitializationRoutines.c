/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x1408539E8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopInterlockedRemoveHeadList @ 0x140015B40 (IopInterlockedRemoveHeadList.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x1400FCD14 (PnpDiagnosticTrace.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  char v0; // di
  PVOID *v1; // rax
  PVOID *v2; // rbx

  v0 = 0;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Start, 0, 0LL);
  while ( 1 )
  {
    v1 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
    v2 = v1;
    if ( !v1 )
      break;
    v0 = 1;
    ++*(_DWORD *)(*((_QWORD *)v1[2] + 6) + 16LL);
    *((_DWORD *)v1[2] + 4) &= ~0x20u;
    ((void (__fastcall *)(PVOID, PVOID, _QWORD))v1[3])(v1[2], v1[4], *(unsigned int *)(*((_QWORD *)v1[2] + 6) + 16LL));
    ObfDereferenceObjectWithTag(v2[2], 0x746C6644u);
    ExFreePoolWithTag(v2, 0);
  }
  IopBootDriverReinitCompleted = 1;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Stop, 0, 0LL);
  return v0;
}
