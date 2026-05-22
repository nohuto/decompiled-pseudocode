/*
 * XREFs of ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x18001A40C
 * Callers:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x18001A260 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<InputProvider>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = v4[2];
        if ( v10 )
        {
          v4[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v4 += 3;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    v11 = *(_QWORD *)(a1 + 16) - (_QWORD)v4;
    v12 = v11 / 24;
    if ( (unsigned __int64)(v11 / 24) <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(24 * v12) < 0x1000 )
      {
LABEL_13:
        operator delete(v4);
        goto LABEL_14;
      }
      if ( ((unsigned __int8)v4 & 0x1F) == 0 )
      {
        v13 = *(v4 - 1);
        if ( v13 < (unsigned __int64)v4 && (unsigned __int64)v4 - v13 - 8 <= 0x1F )
        {
          v4 = (_QWORD *)*(v4 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v11, v12);
    JUMPOUT(0x18001A50FLL);
  }
LABEL_14:
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
