/*
 * XREFs of ?_Change_array@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_tagpropertykey@@_K1@Z @ 0x1800BA3A8
 * Callers:
 *     ??$emplace_back@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAXAEBU_tagpropertykey@@@Z @ 0x1800B9CA0 (--$emplace_back@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagpropertykey@@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<_tagpropertykey>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
    std::_Deallocate(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 20LL, 0x14uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 20 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 20 * a4;
  return result;
}
