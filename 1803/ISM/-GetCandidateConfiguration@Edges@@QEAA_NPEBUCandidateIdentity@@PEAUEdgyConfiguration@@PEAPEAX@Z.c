/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x180069028
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800B4704 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1800B47EC (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 */

char __fastcall Edges::GetCandidateConfiguration(
        Edges *this,
        const struct CandidateIdentity *a2,
        struct EdgyConfiguration *a3,
        void **a4)
{
  int Edge; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  *(_QWORD *)a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 0;
  v8 = 3LL * Edge;
  v9 = *(_QWORD *)this;
  v10 = 32 * v8;
  *(_OWORD *)a3 = *(_OWORD *)(v10 + *(_QWORD *)this + 52);
  *((_OWORD *)a3 + 1) = *(_OWORD *)(v10 + v9 + 68);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(v10 + v9 + 84);
  if ( a4 )
    *a4 = *(void **)(v10 + *(_QWORD *)this);
  return 1;
}
