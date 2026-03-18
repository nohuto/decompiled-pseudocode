/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DEAEC
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  __int64 v5; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_QWORD *)PathDescriptor & 0x10000000000000LL) != 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v8 + 24) = 1172LL;
      WdLogEvent5_WdAssertion(v8);
    }
    v7 = *(_QWORD *)PathDescriptor;
    if ( (*(_QWORD *)PathDescriptor & 0x800000LL) != 0 )
    {
      if ( (v7 & 0x100) == 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v9 + 24) = 1179LL;
        WdLogEvent5_WdAssertion(v9);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v10 + 24) = 1180LL;
        WdLogEvent5_WdAssertion(v10);
      }
    }
  }
}
