/*
 * XREFs of ?_Change_array@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@AEAAXQEAPEAVPropertyNode@Input@@_K1@Z @ 0x180032A1C
 * Callers:
 *     ??$emplace@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@AEBQEAVPropertyNode@Input@@@Z @ 0x1800327B8 (--$emplace@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropert.c)
 *     ??$emplace_back@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXAEBQEAVPropertyNode@Input@@@Z @ 0x180032930 (--$emplace_back@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPr.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

unsigned __int64 __fastcall std::vector<Input::PropertyNode *>::_Change_array(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (__int64)(a1[2] - v6) >> 3;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v9 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v6);
        goto LABEL_9;
      }
      if ( (v6 & 0x1F) == 0 )
      {
        v10 = *(_QWORD *)(v6 - 8);
        if ( v10 < v6 )
        {
          v6 = v6 - v10 - 8;
          if ( v6 <= 0x1F )
          {
            v6 = v10;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v6);
    JUMPOUT(0x180032ABBLL);
  }
LABEL_9:
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
