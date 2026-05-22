/*
 * XREFs of ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x1800676AC
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180067040 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800A4FE0 (-DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@AEAAXQEAUInputInfo@@_K1@Z @ 0x180067964 (-_Change_array@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@AEAAXQEAUInputInfo@@_K1.c)
 */

void __fastcall std::vector<InputInfo>::emplace_back<InputInfo &>(__int64 a1, _OWORD *a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  _OWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // [rsp+70h] [rbp+18h]

  v4 = *(_OWORD **)(a1 + 16);
  v5 = *(_OWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) / 2848;
    if ( v7 == 0x1702E05C0B8170LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = ((__int64)v4 - *(_QWORD *)a1) / 2848;
    v9 = v8 >> 1;
    if ( v8 <= 0x1702E05C0B8170LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = std::_Allocate(v10, 0xB20uLL);
    v12 = v11;
    v16 = v11;
    try
    {
      v13 = &v11[356 * v7];
      if ( v13 )
      {
        v14 = 22LL;
        do
        {
          *v13 = *a2;
          v13[1] = a2[1];
          v13[2] = a2[2];
          v13[3] = a2[3];
          v13[4] = a2[4];
          v13[5] = a2[5];
          v13[6] = a2[6];
          v13 += 8;
          *(v13 - 1) = a2[7];
          a2 += 8;
          --v14;
        }
        while ( v14 );
        *v13 = *a2;
        v13[1] = a2[1];
      }
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<InputInfo>>::deallocate(v15, v16, v10);
      throw;
    }
    std::vector<InputInfo>::_Change_array(a1, v12, v7 + 1, v10, -2LL);
  }
  else
  {
    if ( v5 )
    {
      v6 = 22LL;
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
    }
    *(_QWORD *)(a1 + 8) += 2848LL;
  }
}
