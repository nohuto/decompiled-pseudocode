/*
 * XREFs of ?_Change_array@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@AEAAXQEAUInputInfo@@_K1@Z @ 0x180067964
 * Callers:
 *     ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x1800676AC (--$emplace_back@AEAUInputInfo@@@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAAXA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

unsigned __int64 __fastcall std::vector<InputInfo>::_Change_array(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (__int64)(a1[2] - v6) / 2848;
    if ( v9 <= 0x1702E05C0B8170LL )
    {
      if ( 2848 * v9 < 0x1000 )
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
    JUMPOUT(0x180067A2CLL);
  }
LABEL_9:
  *a1 = a2;
  a1[1] = a2 + 2848 * a3;
  result = a2 + 2848 * a4;
  a1[2] = result;
  return result;
}
