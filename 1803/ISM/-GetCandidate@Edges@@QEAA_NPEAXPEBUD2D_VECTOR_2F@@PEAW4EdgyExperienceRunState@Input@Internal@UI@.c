/*
 * XREFs of ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180068EF8
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3D84 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800B3F20 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800B4510 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 * Callees:
 *     ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1800681A8 (-GetRunState@Edge@@QEBA-AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ.c)
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800696F4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::GetCandidate(
        Edges *this,
        const struct CandidateIdentity **a2,
        const struct D2D_VECTOR_2F *a3,
        enum Windows::UI::Internal::Input::EdgyExperienceRunState *a4,
        struct CandidateIdentity ***a5)
{
  const struct CandidateIdentity *v9; // rdi
  const struct CandidateIdentity *v10; // rbp
  int Edge; // eax
  __int64 v12; // rdx
  float v13; // xmm1_4
  float v14; // xmm1_4
  struct CandidateIdentity **v16; // [rsp+80h] [rbp+28h]

  if ( a4 )
    *(_DWORD *)a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( !a2 )
    return 0;
  v9 = *a2;
  v10 = a2[1];
  if ( *a2 == v10 )
    return 0;
  while ( 1 )
  {
    Edge = Edges::FindEdge(this, v9);
    if ( Edge >= 0 )
    {
      if ( !a3 )
        break;
      v12 = 96LL * Edge;
      v13 = *(float *)(v12 + *(_QWORD *)this + 56);
      if ( v13 > 0.0 && a3->x > 0.0 )
        break;
      if ( v13 < 0.0 && a3->x < 0.0 )
        break;
      v14 = *(float *)(v12 + *(_QWORD *)this + 60);
      if ( v14 > 0.0 && a3->y > 0.0 )
        break;
      if ( v14 < 0.0 && a3->y < 0.0 )
        break;
    }
    v9 = (const struct CandidateIdentity *)((char *)v9 + 40);
    if ( v9 == v10 )
      return 0;
  }
  if ( a4 )
    *(_DWORD *)a4 = Edge::GetRunState(*(_QWORD *)this + 96LL * Edge);
  if ( a5 )
  {
    v16 = (struct CandidateIdentity **)operator new(0x28uLL);
    std::wstring::wstring(v16, v9);
    *((_DWORD *)v16 + 8) = *((_DWORD *)v9 + 8);
    *a5 = v16;
  }
  return 1;
}
