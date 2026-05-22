/*
 * XREFs of ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18008573C
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x180084DC4 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)a1[1];
    while ( v2 != v3 )
    {
      v4 = v2[356];
      if ( v4 )
      {
        v2[356] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v2 += 357;
    }
    v5 = (_QWORD *)*a1;
    v6 = a1[2] - *a1;
    if ( (unsigned __int64)(v6 / 2856) <= 0x16F26016F26016LL )
    {
      if ( (unsigned __int64)(2856 * (v6 / 2856)) < 0x1000 )
      {
LABEL_13:
        operator delete(v5);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( ((unsigned __int8)v5 & 0x1F) == 0 )
      {
        v7 = *(v5 - 1);
        if ( v7 < (unsigned __int64)v5 && (unsigned __int64)v5 - v7 - 8 <= 0x1F )
        {
          v5 = (_QWORD *)*(v5 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v6);
  }
}
