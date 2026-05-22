/*
 * XREFs of ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180070AAC
 * Callers:
 *     GetHolographicInputSession @ 0x180070758 (GetHolographicInputSession.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUTraceSessionProviderConfig@@PEAU1@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@PEAU1@00AEAV?$allocator@UTraceSessionProviderConfig@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800724F0 (--$_Uninitialized_move_al_unchecked@PEAUTraceSessionProviderConfig@@PEAU1@V-$allocator@UTraceSes.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
        _QWORD *a1,
        const OLECHAR *a2,
        unsigned int *a3,
        int *a4,
        int *a5)
{
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  HRESULT v12; // eax
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rsi
  size_t v19; // rcx
  void *v20; // rax
  GUID *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  HRESULT v24; // eax
  __int64 v25; // rcx
  void *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = a1[2];
  v9 = a1[1];
  if ( v8 == v9 )
  {
    v13 = (v9 - *a1) / 40;
    if ( v13 == 0x666666666666666LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v14 = v13 + 1;
    v15 = (v8 - *a1) / 40;
    v16 = v15 >> 1;
    if ( v15 <= 0x666666666666666LL - (v15 >> 1) )
    {
      v17 = v16 + v15;
      if ( v16 + v15 < v14 )
        v17 = v13 + 1;
    }
    else
    {
      v17 = v13 + 1;
    }
    if ( v17 )
    {
      if ( v17 > 0x666666666666666LL )
        std::_Default_allocate_traits<1>::_Fail();
      v19 = 40 * v17;
      if ( 40 * v17 < 0x1000 )
      {
        v18 = operator new(v19);
      }
      else
      {
        if ( v19 + 39 < v19 )
          std::_Default_allocate_traits<1>::_Fail();
        v20 = operator new(v19 + 39);
        v18 = (_QWORD *)(((unsigned __int64)v20 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v18 - 1) = v20;
      }
    }
    else
    {
      v18 = 0LL;
    }
    try
    {
      v21 = (GUID *)&v18[5 * v13];
      v22 = *a5;
      v23 = *a4;
      v21[1].Data1 = *a3;
      *(_QWORD *)v21[1].Data4 = v23;
      *(_QWORD *)&v21[2].Data1 = v22;
      v24 = CLSIDFromString(a2, v21);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28,
          (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
          (const char *)(unsigned int)v24);
      std::_Uninitialized_move_al_unchecked<TraceSessionProviderConfig *,TraceSessionProviderConfig *,std::allocator<TraceSessionProviderConfig>>(
        *a1,
        a1[1],
        v18);
    }
    catch ( ... )
    {
      std::allocator<CandidateIdentity>::deallocate(v25, (unsigned __int64)v18, v17);
      throw;
    }
    v26 = (void *)*a1;
    if ( !*a1 )
      goto LABEL_28;
    v27 = a1[2] - (_QWORD)v26;
    v28 = v27 / 40;
    if ( (unsigned __int64)(v27 / 40) <= 0x666666666666666LL )
    {
      if ( (unsigned __int64)(40 * v28) < 0x1000 )
      {
LABEL_27:
        operator delete(v26);
LABEL_28:
        *a1 = v18;
        a1[1] = &v18[5 * v14];
        a1[2] = &v18[5 * v17];
        return a1[1] - 40LL;
      }
      if ( ((unsigned __int8)v26 & 0x1F) == 0 )
      {
        v29 = *((_QWORD *)v26 - 1);
        if ( v29 < (unsigned __int64)v26 && (unsigned __int64)v26 - v29 - 8 <= 0x1F )
        {
          v26 = (void *)*((_QWORD *)v26 - 1);
          goto LABEL_27;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v27, v28);
    __debugbreak();
  }
  v10 = *a5;
  v11 = *a4;
  *(_DWORD *)(v9 + 16) = *a3;
  *(_QWORD *)(v9 + 24) = v11;
  *(_QWORD *)(v9 + 32) = v10;
  v12 = CLSIDFromString(a2, (LPCLSID)v9);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)v12);
  a1[1] += 40LL;
  return a1[1] - 40LL;
}
