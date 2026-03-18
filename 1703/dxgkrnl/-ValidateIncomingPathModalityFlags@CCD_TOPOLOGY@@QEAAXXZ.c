/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EDF04
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  for ( i = 0; ; ++i )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = v6 ? *(_WORD *)(v6 + 20) : 0;
    if ( i >= v7 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, a4);
    if ( (*(_QWORD *)PathDescriptor & 0x10000000000000LL) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8, a3, a4);
      *(_QWORD *)(v12 + 24) = 3392LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v11 = *(_QWORD *)PathDescriptor;
    if ( (*(_QWORD *)PathDescriptor & 0x800000LL) != 0 )
    {
      if ( (v11 & 0x100) == 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, v8, a3, a4);
        *(_QWORD *)(v13 + 24) = 3399LL;
        WdLogEvent5_WdAssertion(v13);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v11, v8, a3, a4);
        *(_QWORD *)(v14 + 24) = 3400LL;
        WdLogEvent5_WdAssertion(v14);
      }
    }
  }
}
