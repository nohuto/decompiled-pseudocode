/*
 * XREFs of ??$emplace_back@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAXAEBU_tagpropertykey@@@Z @ 0x1800B9CA0
 * Callers:
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x1800BA23C (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Change_array@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_tagpropertykey@@_K1@Z @ 0x1800BA3A8 (-_Change_array@-$vector@U_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_t.c)
 */

void __fastcall std::vector<_tagpropertykey>::emplace_back<_tagpropertykey const &>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  char *v12; // rdx
  _QWORD *v13; // [rsp+70h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = (v5 - *(_QWORD *)a1) / 20;
    if ( v6 == 0xCCCCCCCCCCCCCCCLL )
      std::_Xlength_error("vector<T> too long");
    v7 = (v4 - *(_QWORD *)a1) / 20;
    v8 = v7 >> 1;
    if ( v7 <= 0xCCCCCCCCCCCCCCCLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = std::_Allocate(v9, 0x14uLL);
    v11 = v10;
    v13 = v10;
    try
    {
      v12 = (char *)v10 + 20 * v6;
      if ( v12 )
      {
        *(_OWORD *)v12 = *(_OWORD *)a2;
        *((_DWORD *)v12 + 4) = *(_DWORD *)(a2 + 16);
      }
      memmove(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v9, 0x14uLL);
      throw;
    }
    std::vector<_tagpropertykey>::_Change_array(a1, v11, v6 + 1, v9, -2LL);
  }
  else
  {
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)a2;
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(a2 + 16);
    }
    *(_QWORD *)(a1 + 8) += 20LL;
  }
}
