/*
 * XREFs of ProbeForRead @ 0x14056EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
