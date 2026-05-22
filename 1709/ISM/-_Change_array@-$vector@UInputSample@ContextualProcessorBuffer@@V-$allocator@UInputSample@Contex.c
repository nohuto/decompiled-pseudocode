/*
 * XREFs of ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x180085CE8
 * Callers:
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX$$QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085980 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rbp
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
      v10 = v4[356];
      if ( v10 )
      {
        v4[356] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v4 += 357;
    }
    v11 = (_QWORD *)*a1;
    v12 = a1[2] - *a1;
    if ( (unsigned __int64)(v12 / 2856) <= 0x16F26016F26016LL )
    {
      if ( (unsigned __int64)(2856 * (v12 / 2856)) < 0x1000 )
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
    JUMPOUT(0x180085DF3LL);
  }
LABEL_14:
  *a1 = a2;
  a1[1] = a2 + 2856 * a3;
  result = a2 + 2856 * a4;
  a1[2] = result;
  return result;
}
