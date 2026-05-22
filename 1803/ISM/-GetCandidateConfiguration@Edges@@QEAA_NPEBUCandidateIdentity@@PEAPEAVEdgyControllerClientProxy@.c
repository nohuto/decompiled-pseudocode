/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1800690A4
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800B4704 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 */

bool __fastcall Edges::GetCandidateConfiguration(
        Edges *this,
        const struct CandidateIdentity *a2,
        struct EdgyControllerClientProxy **a3,
        enum Windows::UI::Internal::Input::EdgyInputRouting *a4,
        enum Windows::UI::Internal::Input::EdgyExperienceRunState *a5)
{
  int Edge; // eax
  __int64 v9; // rdx
  bool result; // al

  *a3 = 0LL;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)a5 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 0;
  v9 = 96LL * Edge;
  *a3 = *(struct EdgyControllerClientProxy **)(v9 + *(_QWORD *)this + 40);
  *(_DWORD *)a4 = *(_DWORD *)(v9 + *(_QWORD *)this + 68);
  result = 1;
  *(_DWORD *)a5 = *(_DWORD *)(v9 + *(_QWORD *)this + 48);
  return result;
}
