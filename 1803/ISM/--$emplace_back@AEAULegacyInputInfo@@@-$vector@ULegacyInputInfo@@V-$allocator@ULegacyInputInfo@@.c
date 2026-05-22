/*
 * XREFs of ??$emplace_back@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAAEAULegacyInputInfo@@AEAU2@@Z @ 0x18005E398
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18005E2EC (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAULegacyInputInfo@@PEAU1@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@PEAU1@00AEAV?$allocator@ULegacyInputInfo@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18005ED38 (--$_Uninitialized_move_al_unchecked@PEAULegacyInputInfo@@PEAU1@V-$allocator@ULegacyInputInfo@@@s.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<LegacyInputInfo>::emplace_back<LegacyInputInfo &>(_QWORD *a1, _OWORD *a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax

  v4 = (_OWORD *)a1[2];
  v5 = (_OWORD *)a1[1];
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *a1) / 1736;
    if ( v7 == 0x25C04B8097012ELL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = ((__int64)v4 - *a1) / 1736;
    v10 = v9 >> 1;
    if ( v9 <= 0x25C04B8097012ELL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0x25C04B8097012ELL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = 1736 * v11;
      if ( 1736 * v11 < 0x1000 )
      {
        v12 = operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
          std::_Default_allocate_traits<1>::_Fail();
        v14 = operator new(v13 + 39);
        v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = &v12[217 * v7];
      v16 = 13LL;
      do
      {
        *v15 = *a2;
        v15[1] = a2[1];
        v15[2] = a2[2];
        v15[3] = a2[3];
        v15[4] = a2[4];
        v15[5] = a2[5];
        v15[6] = a2[6];
        v15 += 8;
        *(v15 - 1) = a2[7];
        a2 += 8;
        --v16;
      }
      while ( v16 );
      *v15 = *a2;
      v15[1] = a2[1];
      v15[2] = a2[2];
      v15[3] = a2[3];
      *((_QWORD *)v15 + 8) = *((_QWORD *)a2 + 8);
      std::_Uninitialized_move_al_unchecked<LegacyInputInfo *,LegacyInputInfo *,std::allocator<LegacyInputInfo>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      std::allocator<LegacyInputInfo>::deallocate(v17, v12, v11);
      throw;
    }
    v18 = (void *)*a1;
    if ( !*a1 )
      goto LABEL_27;
    v19 = a1[2] - (_QWORD)v18;
    v20 = v19 / 1736;
    if ( (unsigned __int64)(v19 / 1736) <= 0x25C04B8097012ELL )
    {
      if ( (unsigned __int64)(1736 * v20) < 0x1000 )
      {
LABEL_26:
        operator delete(v18);
LABEL_27:
        *a1 = v12;
        a1[1] = &v12[217 * v8];
        a1[2] = &v12[217 * v11];
        return a1[1] - 1736LL;
      }
      if ( ((unsigned __int8)v18 & 0x1F) == 0 )
      {
        v21 = *((_QWORD *)v18 - 1);
        if ( v21 < (unsigned __int64)v18 && (unsigned __int64)v18 - v21 - 8 <= 0x1F )
        {
          v18 = (void *)*((_QWORD *)v18 - 1);
          goto LABEL_26;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v19, v20);
    __debugbreak();
  }
  v6 = 13LL;
  do
  {
    *v5 = *a2;
    v5[1] = a2[1];
    v5[2] = a2[2];
    v5[3] = a2[3];
    v5[4] = a2[4];
    v5[5] = a2[5];
    v5[6] = a2[6];
    v5 += 8;
    *(v5 - 1) = a2[7];
    a2 += 8;
    --v6;
  }
  while ( v6 );
  *v5 = *a2;
  v5[1] = a2[1];
  v5[2] = a2[2];
  v5[3] = a2[3];
  *((_QWORD *)v5 + 8) = *((_QWORD *)a2 + 8);
  a1[1] += 1736LL;
  return a1[1] - 1736LL;
}
