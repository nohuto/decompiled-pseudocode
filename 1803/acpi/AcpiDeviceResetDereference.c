/*
 * XREFs of AcpiDeviceResetDereference @ 0x1C0020940
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x1C0020770 (AcpiDeviceResetCompleteResetWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

void __fastcall AcpiDeviceResetDereference(_QWORD *P)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(_QWORD); // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    ACPIInitDereferenceDeviceExtensionUnlocked(P[1]);
    v2 = P[10];
    if ( v2 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(v2 + 24);
      if ( v3 )
        v3(*(_QWORD *)(v2 + 8));
    }
    ExFreePoolWithTag(P, 0);
  }
}
