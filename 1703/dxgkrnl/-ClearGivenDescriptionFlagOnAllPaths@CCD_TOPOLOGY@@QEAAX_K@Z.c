/*
 * XREFs of ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00EC1D8
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(
        CCD_TOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int i; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(unsigned __int16 *)(v7 + 20) : 0LL;
    if ( i >= (unsigned __int16)v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, v8, a4);
    *(_QWORD *)PathDescriptor &= ~a2;
  }
}
