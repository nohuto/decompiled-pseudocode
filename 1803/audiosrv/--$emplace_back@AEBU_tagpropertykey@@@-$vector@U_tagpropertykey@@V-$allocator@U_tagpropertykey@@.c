/*
 * XREFs of ??$emplace_back@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAXAEBU_tagpropertykey@@@Z @ 0x1800EE7C8
 * Callers:
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x1800EED54 (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_tagpropertykey@@_K1@Z @ 0x1800EEEC8 (-_Change_array@-$vector@U_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_t.c)
 */

__int64 __fastcall std::vector<_tagpropertykey>::emplace_back<_tagpropertykey const &>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // [rsp+70h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = (v5 - *(_QWORD *)a1) / 20;
    if ( v7 == 0xCCCCCCCCCCCCCCCLL )
      std::_Xlength_error("vector<T> too long");
    v8 = (v4 - *(_QWORD *)a1) / 20;
    v9 = v8 >> 1;
    if ( v8 <= 0xCCCCCCCCCCCCCCCLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x14uLL);
    v12 = v11;
    v14 = v11;
    try
    {
      v13 = 5 * v7;
      *(_OWORD *)((char *)v11 + 4 * v13) = *(_OWORD *)a2;
      *((_DWORD *)v11 + v13 + 4) = *(_DWORD *)(a2 + 16);
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v14, v10, 0x14uLL);
      throw;
    }
    return std::vector<_tagpropertykey>::_Change_array(a1, v12, v7 + 1, v10, -2LL);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    result = *(unsigned int *)(a2 + 16);
    *(_DWORD *)(v5 + 16) = result;
    *(_QWORD *)(a1 + 8) += 20LL;
  }
  return result;
}
