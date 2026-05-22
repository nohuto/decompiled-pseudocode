/*
 * XREFs of ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x180085DF4
 * Callers:
 *     ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXAEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x180085AA4 (--$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UContextual.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    while ( v4 != v9 )
    {
      v10 = v4[2];
      if ( v10 )
      {
        v4[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v4 += 3;
    }
    v12 = *(__int64 **)a1;
    v13 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    if ( (unsigned __int64)(v13 / 24) <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(24 * (v13 / 24)) < 0x1000 )
      {
LABEL_15:
        operator delete(v12);
        goto LABEL_16;
      }
      if ( ((unsigned __int8)v12 & 0x1F) == 0 )
      {
        v14 = *(v12 - 1);
        if ( v14 < (unsigned __int64)v12 && (unsigned __int64)v12 - v14 - 8 <= 0x1F )
        {
          v12 = (__int64 *)*(v12 - 1);
          goto LABEL_15;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v13);
    JUMPOUT(0x180085F0ELL);
  }
LABEL_16:
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
