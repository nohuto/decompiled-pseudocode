/*
 * XREFs of ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180040884
 * Callers:
 *     ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18003E4F0 (-GetPoints@MPCSixDofProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@s.c)
 *     ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800460A0 (-GetPoints@MPCProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@PE.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800492D0 (-GetPoints@MPCClickerProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     std::_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x1800511F0 (std--_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputPr_ea_1800511F0.c)
 *     ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180095A40 (-GetPoints@MPCGamepadProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800993A0 (-GetPoints@MPCMouseProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<PointData3D>::emplace_back<PointData3D const &>(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // r8
  _OWORD *v6; // r8
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  void *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax

  v4 = *(_OWORD **)(a1 + 16);
  v5 = *(_OWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) / 184;
    if ( v7 == 0x1642C8590B21642LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = ((__int64)v4 - *(_QWORD *)a1) / 184;
    v10 = v9 >> 1;
    if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
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
      if ( v11 > 0x1642C8590B21642LL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = 184 * v11;
      if ( 184 * v11 < 0x1000 )
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
      v15 = &v12[23 * v7];
      *v15 = *(_OWORD *)a2;
      v15[1] = *(_OWORD *)(a2 + 16);
      v15[2] = *(_OWORD *)(a2 + 32);
      v15[3] = *(_OWORD *)(a2 + 48);
      v15[4] = *(_OWORD *)(a2 + 64);
      v15[5] = *(_OWORD *)(a2 + 80);
      v15[6] = *(_OWORD *)(a2 + 96);
      v15 += 8;
      *(v15 - 1) = *(_OWORD *)(a2 + 112);
      v16 = a2 + 128;
      *v15 = *(_OWORD *)v16;
      v15[1] = *(_OWORD *)(v16 + 16);
      v15[2] = *(_OWORD *)(v16 + 32);
      *((_QWORD *)v15 + 6) = *(_QWORD *)(v16 + 48);
      memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::allocator<PointData3D>::deallocate(v17, v12, v11);
      throw;
    }
    v18 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_23;
    v19 = *(_QWORD *)(a1 + 16) - (_QWORD)v18;
    v20 = v19 / 184;
    if ( (unsigned __int64)(v19 / 184) <= 0x1642C8590B21642LL )
    {
      if ( (unsigned __int64)(184 * v20) < 0x1000 )
      {
LABEL_22:
        operator delete(v18);
LABEL_23:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = &v12[23 * v8];
        *(_QWORD *)(a1 + 16) = &v12[23 * v11];
        return *(_QWORD *)(a1 + 8) - 184LL;
      }
      if ( ((unsigned __int8)v18 & 0x1F) == 0 )
      {
        v21 = *((_QWORD *)v18 - 1);
        if ( v21 < (unsigned __int64)v18 && (unsigned __int64)v18 - v21 - 8 <= 0x1F )
        {
          v18 = (void *)*((_QWORD *)v18 - 1);
          goto LABEL_22;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v19, v20);
    __debugbreak();
  }
  *v5 = *(_OWORD *)a2;
  v5[1] = *(_OWORD *)(a2 + 16);
  v5[2] = *(_OWORD *)(a2 + 32);
  v5[3] = *(_OWORD *)(a2 + 48);
  v5[4] = *(_OWORD *)(a2 + 64);
  v5[5] = *(_OWORD *)(a2 + 80);
  v5[6] = *(_OWORD *)(a2 + 96);
  v6 = v5 + 8;
  *(v6 - 1) = *(_OWORD *)(a2 + 112);
  *v6 = *(_OWORD *)(a2 + 128);
  v6[1] = *(_OWORD *)(a2 + 144);
  v6[2] = *(_OWORD *)(a2 + 160);
  *((_QWORD *)v6 + 6) = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a1 + 8) += 184LL;
  return *(_QWORD *)(a1 + 8) - 184LL;
}
