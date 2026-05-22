/*
 * XREFs of ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18008582C
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x180084DC4 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::~vector<ContextualProcessorBuffer::ContextualProcessorMetadata>(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    while ( v2 != v3 )
    {
      v4 = v2[2];
      if ( v4 )
      {
        v2[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v2 += 3;
    }
    v6 = *(__int64 **)a1;
    v7 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    if ( (unsigned __int64)(v7 / 24) <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(24 * (v7 / 24)) < 0x1000 )
      {
LABEL_15:
        operator delete(v6);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v6 & 0x1F) == 0 )
      {
        v8 = *(v6 - 1);
        if ( v8 < (unsigned __int64)v6 && (unsigned __int64)v6 - v8 - 8 <= 0x1F )
        {
          v6 = (__int64 *)*(v6 - 1);
          goto LABEL_15;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v7);
  }
}
