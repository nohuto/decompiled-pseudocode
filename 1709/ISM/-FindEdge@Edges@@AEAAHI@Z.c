/*
 * XREFs of ?FindEdge@Edges@@AEAAHI@Z @ 0x18002B2A0
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B084 (-AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z.c)
 *     ?Remove@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B1F0 (-Remove@Edges@@QEAAJAEBUEdgyInputSource@@@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEAPEAX@Z @ 0x18002B2EC (-HitTest@Edges@@QEAA_NKKPEAPEAX@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x18002B4E8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z @ 0x18002B5BC (-GetCandidateConfiguration@Edges@@QEAA_NPEAXPEAUEdgyConfiguration@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edges::FindEdge(Edges *this, int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rdx
  _DWORD *i; // rax

  v3 = 0;
  v4 = (*((_QWORD *)this + 1) - *(_QWORD *)this) / 72LL;
  if ( (int)v4 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)(*(_QWORD *)this + 40LL); *i != a2; i += 18 )
  {
    if ( (int)++v3 >= (int)v4 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
