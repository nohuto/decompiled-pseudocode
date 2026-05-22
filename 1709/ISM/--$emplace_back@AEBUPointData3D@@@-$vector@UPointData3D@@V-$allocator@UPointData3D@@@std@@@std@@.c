/*
 * XREFs of ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18003A08C
 * Callers:
 *     ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800394B0 (-GetPoints@MPCGamepadProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18004C3A0 (-GetPoints@MPCMouseProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 *     ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18004FEC0 (-GetPoints@MPCSixDofProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@s.c)
 *     ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180053510 (-GetPoints@MPCProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@PE.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180055510 (-GetPoints@MPCClickerProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     std::_Func_impl__lambda_22c1dca198b1d4c7b85ccda3f9aad06f__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180059EB0 (std--_Func_impl__lambda_22c1dca198b1d4c7b85ccda3f9aad06f__std--allocator_int__void__ea_180059EB0.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<PointData3D>::emplace_back<PointData3D const &>(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // r8
  _OWORD *v6; // r8
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _OWORD *v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  void *v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _QWORD *v21; // [rsp+70h] [rbp+18h]

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
    v12 = std::_Allocate(v11, 0xB8uLL);
    v13 = v12;
    v21 = v12;
    try
    {
      v14 = &v12[23 * v7];
      if ( v14 )
      {
        *v14 = *(_OWORD *)a2;
        v14[1] = *(_OWORD *)(a2 + 16);
        v14[2] = *(_OWORD *)(a2 + 32);
        v14[3] = *(_OWORD *)(a2 + 48);
        v14[4] = *(_OWORD *)(a2 + 64);
        v14[5] = *(_OWORD *)(a2 + 80);
        v14[6] = *(_OWORD *)(a2 + 96);
        v15 = v14 + 8;
        *(v15 - 1) = *(_OWORD *)(a2 + 112);
        v16 = a2 + 128;
        *v15 = *(_OWORD *)v16;
        v15[1] = *(_OWORD *)(v16 + 16);
        v15[2] = *(_OWORD *)(v16 + 32);
        *((_QWORD *)v15 + 6) = *(_QWORD *)(v16 + 48);
      }
      memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<PointData3D>>::deallocate(v17, v21, v11);
      throw;
    }
    v18 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_24;
    v19 = *(_QWORD *)(a1 + 16) - (_QWORD)v18;
    if ( (unsigned __int64)(v19 / 184) <= 0x1642C8590B21642LL )
    {
      if ( (unsigned __int64)(184 * (v19 / 184)) < 0x1000 )
      {
LABEL_22:
        operator delete(v18);
LABEL_24:
        *(_QWORD *)a1 = v13;
        *(_QWORD *)(a1 + 8) = &v13[23 * v8];
        *(_QWORD *)(a1 + 16) = &v13[23 * v11];
        return;
      }
      if ( ((unsigned __int8)v18 & 0x1F) == 0 )
      {
        v20 = *((_QWORD *)v18 - 1);
        if ( v20 < (unsigned __int64)v18 && (unsigned __int64)v18 - v20 - 8 <= 0x1F )
        {
          v18 = (void *)*((_QWORD *)v18 - 1);
          goto LABEL_22;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v19);
    __debugbreak();
  }
  if ( v5 )
  {
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
  }
  *(_QWORD *)(a1 + 8) += 184LL;
}
