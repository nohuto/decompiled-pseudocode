/*
 * XREFs of MapUnmapPhysMem @ 0x1C001CD70
 * Callers:
 *     OpRegion @ 0x1C001C420 (OpRegion.c)
 * Callees:
 *     MapPhysMem @ 0x1C001CDE4 (MapPhysMem.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  int v6; // esi

  v4 = 0;
  v6 = (int)a2;
  if ( a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      v4 = -1072431098;
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(77, KeGetCurrentIrql(), 0, 0, 0LL);
    }
    else if ( a4 )
    {
      v4 = MapPhysMem(a2, a3, a4);
      if ( v4 < 0 )
      {
        LogError(3222536204LL);
        AcpiDiagTraceAmlError(a1, 3222536204LL);
        PrintDebugMessage(102, v6, a3, v4, 0LL);
      }
    }
    else
    {
      MmUnmapIoSpace(a2, a3);
    }
  }
  else
  {
    v4 = -1072431089;
    LogError(3222536207LL);
    AcpiDiagTraceAmlError(a1, 3222536207LL);
    PrintDebugMessage(216, 0, 0, 0, 0LL);
  }
  return (unsigned int)v4;
}
