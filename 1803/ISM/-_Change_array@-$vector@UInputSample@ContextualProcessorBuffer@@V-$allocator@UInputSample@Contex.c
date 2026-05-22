/*
 * XREFs of ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1800B10EC
 * Callers:
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAAEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x1800B0BA0 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        v10 = *(_QWORD *)(v4 + 8);
        if ( v10 )
        {
          *(_QWORD *)(v4 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( *(_QWORD *)v4 )
          operator delete(*(void **)v4);
        v4 += 16LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v11 = (__int64)(a1[2] - v4) >> 4;
    if ( v11 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v11 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v4);
        goto LABEL_16;
      }
      if ( (v4 & 0x1F) == 0 )
      {
        v12 = *(_QWORD *)(v4 - 8);
        if ( v12 < v4 && v4 - v12 - 8 <= 0x1F )
        {
          v4 = *(_QWORD *)(v4 - 8);
          goto LABEL_15;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0xFFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x1800B11DDLL);
  }
LABEL_16:
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
}
