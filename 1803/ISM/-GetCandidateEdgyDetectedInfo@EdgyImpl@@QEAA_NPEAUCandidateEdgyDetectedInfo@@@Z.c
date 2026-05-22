/*
 * XREFs of ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800B4704
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3D84 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B4280 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x180069028 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1800690A4 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@.c)
 */

char __fastcall EdgyImpl::GetCandidateEdgyDetectedInfo(EdgyImpl *this, struct CandidateEdgyDetectedInfo *a2)
{
  const struct CandidateIdentity *v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r13
  _DWORD *v5; // r14
  char v7; // bl
  char v8; // al
  _QWORD *v9; // rsi
  char CandidateConfiguration; // al

  v2 = (const struct CandidateIdentity *)*((_QWORD *)this + 1);
  v3 = (_QWORD *)((char *)a2 + 16);
  v4 = *((_QWORD *)this + 3);
  v5 = (_DWORD *)((char *)a2 + 28);
  v7 = 0;
  if ( !Edges::GetCandidateConfiguration(
          (Edges *)(v4 + 72),
          v2,
          (struct EdgyControllerClientProxy **)a2 + 2,
          (struct CandidateEdgyDetectedInfo *)((char *)a2 + 24),
          (struct CandidateEdgyDetectedInfo *)((char *)a2 + 28))
    || (v8 = 1, !*v3) )
  {
    v8 = 0;
  }
  v9 = (_QWORD *)((char *)a2 + 72);
  *(_BYTE *)a2 = v8;
  CandidateConfiguration = Edges::GetCandidateConfiguration(
                             (Edges *)(v4 + 72),
                             v2,
                             (struct CandidateEdgyDetectedInfo *)((char *)a2 + 32),
                             (void **)a2 + 9);
  *((_BYTE *)a2 + 1) = CandidateConfiguration;
  *((_QWORD *)a2 + 1) = 0LL;
  if ( *v3 )
  {
    if ( *((_DWORD *)a2 + 6) == 1 )
    {
      if ( !*v5 )
        return v7;
      if ( *v5 == 1 || *v5 == 2 || *v5 == 3 && !*v9 )
      {
        *((_QWORD *)a2 + 1) = -1LL;
        *((_BYTE *)a2 + 1) = 0;
      }
    }
  }
  else if ( *((_QWORD *)v2 + 2) )
  {
    *(_WORD *)a2 = 0;
  }
  else
  {
    *((_BYTE *)a2 + 1) = CandidateConfiguration & (*v9 != 0LL);
  }
  if ( *(_BYTE *)a2 || *((_BYTE *)a2 + 1) )
    return 1;
  return v7;
}
