/*
 * XREFs of AcpiUpdateInterruptProperties @ 0x1C007AB60
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C0056D90 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0056E18 (IrqLibReleaseArbiterLock.c)
 *     ProcessorUpdateInterruptProperties @ 0x1C008E784 (ProcessorUpdateInterruptProperties.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C0090D44 (IrqArbUpdateInterruptProperties.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0092638 (IcIsInterruptTypeSecondary.c)
 *     IcUpdateInterruptProperties @ 0x1C0092A3C (IcUpdateInterruptProperties.c)
 */

__int64 __fastcall AcpiUpdateInterruptProperties(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int updated; // ebx

  IrqLibAcquireArbiterLock(1);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a1) && a1 < 0xFFF00000 )
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
