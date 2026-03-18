/*
 * XREFs of AcpiUpdateInterruptProperties @ 0x1C00A1AC0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C000E3E4 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C000E408 (IrqLibAcquireArbiterLock.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0088988 (IcIsInterruptTypeSecondary.c)
 *     ProcessorUpdateInterruptProperties @ 0x1C00A836C (ProcessorUpdateInterruptProperties.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00A8744 (IrqArbUpdateInterruptProperties.c)
 *     IcUpdateInterruptProperties @ 0x1C00A8BC4 (IcUpdateInterruptProperties.c)
 */

__int64 __fastcall AcpiUpdateInterruptProperties(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int updated; // ebx

  IrqLibAcquireArbiterLock(1);
  if ( IcIsInterruptTypeSecondary(a1) && a1 < 0xFFF00000 )
  {
    updated = ProcessorUpdateInterruptProperties(a1, a2);
    if ( updated >= 0 )
    {
      updated = IcUpdateInterruptProperties(a1, a2, a3);
      if ( updated >= 0 )
        updated = IrqArbUpdateInterruptProperties(a1);
    }
  }
  else
  {
    updated = -1073741811;
  }
  IrqLibReleaseArbiterLock();
  return (unsigned int)updated;
}
