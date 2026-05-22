/*
 * XREFs of ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAXAEAY0CH@$$CBG$$QEAH11@Z @ 0x18009802C
 * Callers:
 *     GetHolographicInputSession @ 0x180090C58 (GetHolographicInputSession.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUTraceSessionProviderConfig@@PEAU1@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UTraceSessionProviderConfig@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180099064 (--$_Uninitialized_move_al_unchecked@PEAUTraceSessionProviderConfig@@PEAU1@V-$allocator@UTraceSes.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
        _QWORD *a1,
        const OLECHAR *a2,
        unsigned int *a3,
        int *a4,
        int *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  HRESULT v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  GUID *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  HRESULT v25; // eax
  __int64 v26; // rcx
  void *v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  _QWORD *v30; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = a1[2];
  v10 = a1[1];
  if ( v9 == v10 )
  {
    v14 = (unsigned __int128)((v10 - *a1) * (__int128)0x6666666666666667LL) >> 64;
    v15 = ((unsigned __int64)v14 >> 63) + (v14 >> 4);
    if ( v15 == 0x666666666666666LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v16 = v15 + 1;
    v17 = (v9 - *a1) / 40;
    v18 = v17 >> 1;
    if ( v17 <= 0x666666666666666LL - (v17 >> 1) )
    {
      v19 = v18 + v17;
      if ( v18 + v17 < v16 )
        v19 = v15 + 1;
    }
    else
    {
      v19 = v15 + 1;
    }
    v20 = std::_Allocate(v19, 0x28uLL);
    v21 = v20;
    v30 = v20;
    try
    {
      v22 = (GUID *)&v20[5 * v15];
      if ( v22 )
      {
        v23 = *a5;
        v24 = *a4;
        v22[1].Data1 = *a3;
        *(_QWORD *)v22[1].Data4 = v24;
        *(_QWORD *)&v22[2].Data1 = v23;
        v25 = CLSIDFromString(a2, v22);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x28,
            (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
            (const char *)(unsigned int)v25);
      }
      std::_Uninitialized_move_al_unchecked<TraceSessionProviderConfig *,TraceSessionProviderConfig *,std::allocator<TraceSessionProviderConfig>>(
        *a1,
        a1[1],
        v21);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<TraceSessionProviderConfig>>::deallocate(v26, v30, v19);
      throw;
    }
    v27 = (void *)*a1;
    if ( !*a1 )
      goto LABEL_26;
    v28 = a1[2] - (_QWORD)v27;
    if ( (unsigned __int64)(v28 / 40) <= 0x666666666666666LL )
    {
      if ( (unsigned __int64)(40 * (v28 / 40)) < 0x1000 )
      {
LABEL_24:
        operator delete(v27);
LABEL_26:
        *a1 = v21;
        a1[1] = &v21[5 * v16];
        a1[2] = &v21[5 * v19];
        return;
      }
      if ( ((unsigned __int8)v27 & 0x1F) == 0 )
      {
        v29 = *((_QWORD *)v27 - 1);
        if ( v29 < (unsigned __int64)v27 && (unsigned __int64)v27 - v29 - 8 <= 0x1F )
        {
          v27 = (void *)*((_QWORD *)v27 - 1);
          goto LABEL_24;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v28);
    __debugbreak();
  }
  if ( v10 )
  {
    v11 = *a5;
    v12 = *a4;
    *(_DWORD *)(v10 + 16) = *a3;
    *(_QWORD *)(v10 + 24) = v12;
    *(_QWORD *)(v10 + 32) = v11;
    v13 = CLSIDFromString(a2, (LPCLSID)v10);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v13);
  }
  a1[1] += 40LL;
}
