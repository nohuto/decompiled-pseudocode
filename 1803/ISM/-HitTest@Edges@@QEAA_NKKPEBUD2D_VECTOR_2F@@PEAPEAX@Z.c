/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B3090 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180066864 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x180068210 (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 *     ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x180068D50 (--$emplace_back@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 *     ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x180069568 (-erase@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAA-AV-$_Vecto.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Edges::HitTest(Edges *this, int a2, int a3, const struct D2D_VECTOR_2F *a4, void **a5)
{
  int v7; // eax
  int v9; // esi
  unsigned int v10; // edi
  __int64 *v11; // rbx
  __int64 v12; // r8
  char *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbp
  _WORD *v16; // rdx
  char v19; // [rsp+30h] [rbp-68h] BYREF
  char v20; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v21[4]; // [rsp+40h] [rbp-58h] BYREF
  int v22; // [rsp+60h] [rbp-38h]

  v7 = a2;
  v9 = 0;
  v10 = 0;
  v11 = (__int64 *)*a5;
  if ( *a5 )
  {
    v12 = *v11;
    if ( (v11[1] - *v11) / 40 )
    {
      do
      {
        if ( (int)Edges::FindEdge(this, (const struct CandidateIdentity *)(v12 + 40LL * v10)) >= 0 )
        {
          if ( Edge::HitTest((Edge *)(*(_QWORD *)this + 96LL * v10), a2, a3, a4) )
          {
            ++v9;
            ++v10;
            goto LABEL_9;
          }
          v13 = &v20;
        }
        else
        {
          v13 = &v19;
        }
        std::vector<CandidateIdentity>::erase(v11, v13, *v11 + 40LL * v10);
LABEL_9:
        v12 = *v11;
      }
      while ( v10 < (unsigned __int64)((v11[1] - *v11) / 40) );
    }
  }
  else
  {
    v14 = *(_QWORD *)this;
    v15 = *((_QWORD *)this + 1);
    while ( v14 != v15 )
    {
      if ( Edge::HitTest((Edge *)v14, v7, a3, a4) )
      {
        if ( v11 || (v11 = (__int64 *)operator new(0x18uLL), *v11 = 0LL, v11[1] = 0LL, v11[2] = 0LL, (*a5 = v11) != 0LL) )
        {
          v21[2] = 0LL;
          v21[3] = 7LL;
          LOWORD(v21[0]) = 0;
          v22 = 0;
          v16 = (_WORD *)(v14 + 8);
          if ( *(_QWORD *)(v14 + 32) >= 8uLL )
            v16 = *(_WORD **)v16;
          std::wstring::operator=(v21, v16);
          v22 = *(_DWORD *)(v14 + 64);
          std::vector<CandidateIdentity>::emplace_back<CandidateIdentity &>(v11, v21);
          ++v9;
          std::wstring::_Tidy_deallocate(v21);
        }
      }
      v14 += 96LL;
      v7 = a2;
    }
  }
  return v9 != 0;
}
