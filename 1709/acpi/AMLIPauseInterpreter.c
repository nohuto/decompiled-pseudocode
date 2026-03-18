/*
 * XREFs of AMLIPauseInterpreter @ 0x1C005B7DC
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C00490F0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C0049610 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiReflectNativeObject @ 0x1C0054A40 (AcpiReflectNativeObject.c)
 *     Simulator_PauseInterpreter @ 0x1C005C07C (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x1C0028490 (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C0079688;
    byte_1C0079660 = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_1C0079698;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_1C0079698 != &qword_1C0079690 )
        __fastfail(3u);
      *a1 = &qword_1C0079690;
      a1[1] = v4;
      *v4 = a1;
      qword_1C0079698 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, byte_1C0079660);
    LogSchedEvent(1346458963, 0LL, v1, 0LL, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
