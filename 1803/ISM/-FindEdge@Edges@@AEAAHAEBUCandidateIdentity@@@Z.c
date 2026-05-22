/*
 * XREFs of ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180068EF8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x180069028 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1800690A4 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edges::FindEdge(Edges *this, const struct CandidateIdentity *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 8);
  if ( !*((_QWORD *)a2 + 2) )
    return Edges::FindEdge(this, v2);
  if ( v2 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    return Edges::FindEdge(this, v2, (const unsigned __int16 *)a2);
  }
  else
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    return Edges::FindEdge(this, (const unsigned __int16 *)a2);
  }
}
