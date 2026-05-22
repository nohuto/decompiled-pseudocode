/*
 * XREFs of ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x1800363A0
 * Callers:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x180036244 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<InputProvider>::_Change_array(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v9 = (_QWORD *)a1[1];
    while ( v4 != v9 )
    {
      v10 = v4[2];
      if ( v10 )
      {
        v4[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v4 += 3;
    }
    v11 = (_QWORD *)*a1;
    v12 = a1[2] - *a1;
    if ( (unsigned __int64)(v12 / 24) <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(24 * (v12 / 24)) < 0x1000 )
      {
LABEL_13:
        operator delete(v11);
        goto LABEL_14;
      }
      if ( ((unsigned __int8)v11 & 0x1F) == 0 )
      {
        v13 = *(v11 - 1);
        if ( v13 < (unsigned __int64)v11 && (unsigned __int64)v11 - v13 - 8 <= 0x1F )
        {
          v11 = (_QWORD *)*(v11 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v12);
    JUMPOUT(0x1800364A1LL);
  }
LABEL_14:
  *a1 = a2;
  result = 3 * a4;
  a1[1] = a2 + 24 * a3;
  a1[2] = a2 + 24 * a4;
  return result;
}
