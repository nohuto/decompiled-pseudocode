/*
 * XREFs of PnpDiagnosticCompletionRoutine @ 0x1401539D0
 * Callers:
 *     <none>
 * Callees:
 *     IoFindDeviceThatFailedIrp @ 0x1400398F0 (IoFindDeviceThatFailedIrp.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 */

__int64 __fastcall PnpDiagnosticCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  IRP *v5; // r10
  __int64 DeviceThatFailedIrp; // rax

  v3 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a3 + 32) = v3;
  v5 = (IRP *)a2;
  if ( v3 < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      *(_QWORD *)a3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  IoFreeIrp(v5);
  KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  return 3221225494LL;
}
