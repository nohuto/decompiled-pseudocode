/*
 * XREFs of ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1800681A8
 * Callers:
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x180068210 (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180068EF8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edge::GetRunState(__int64 a1)
{
  __int64 v1; // r8
  char v2; // al
  __int64 v3; // rdx
  unsigned int v5; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v2 = v3 != 0;
    if ( *(_DWORD *)(a1 + 64) )
      v2 = (v3 != 0) + 2;
  }
  if ( (v2 & 1) != 0 )
    return *(unsigned int *)(a1 + 48);
  v5 = 0;
  if ( v1 )
  {
    LOBYTE(v5) = *(_QWORD *)(a1 + 40) != 0LL;
    if ( *(_DWORD *)(a1 + 64) )
      v5 = 2;
  }
  if ( (unsigned __int8)(v5 >> 1) )
    return 0LL;
  else
    return *(_DWORD *)(a1 + 52) != 0 ? 3 : 0;
}
