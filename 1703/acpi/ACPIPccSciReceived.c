/*
 * XREFs of ACPIPccSciReceived @ 0x1C0002140
 * Callers:
 *     ACPIInterruptServiceRoutine @ 0x1C002BC30 (ACPIInterruptServiceRoutine.c)
 * Callees:
 *     <none>
 */

bool ACPIPccSciReceived()
{
  bool v0; // dl
  unsigned int i; // r9d
  __int64 v2; // r8

  v0 = 0;
  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace && *(_DWORD *)(AcpiPccLegacySubspace + 312) )
      v0 = (**(_WORD **)(AcpiPccLegacySubspace + 48) & 2) != 0;
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v2 = AcpiPccSubspaces + 528LL * i;
        if ( *(_QWORD *)(v2 + 48)
          && (*(_DWORD *)(v2 + 312) && (**(_WORD **)(v2 + 48) & 2) != 0 || (**(_WORD **)(v2 + 48) & 8) != 0) )
        {
          v0 = 1;
        }
      }
    }
  }
  return v0;
}
