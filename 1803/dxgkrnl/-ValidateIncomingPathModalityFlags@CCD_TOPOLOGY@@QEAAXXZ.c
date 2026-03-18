/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B67D4
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0224D50 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v6 = *(_QWORD *)PathDescriptor;
    if ( (*(_QWORD *)PathDescriptor & 0x10000000000000LL) != 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 1177LL;
      WdLogEvent5_WdAssertion(v7);
      v6 = *(_QWORD *)PathDescriptor;
    }
    if ( (v6 & 0x800000) != 0 )
    {
      if ( (v6 & 0x100) == 0 )
      {
        v8 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v8 + 24) = 1184LL;
        WdLogEvent5_WdAssertion(v8);
        v6 = *(_QWORD *)PathDescriptor;
      }
      if ( (v6 & 0x20000) == 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v9 + 24) = 1185LL;
        WdLogEvent5_WdAssertion(v9);
      }
    }
  }
}
