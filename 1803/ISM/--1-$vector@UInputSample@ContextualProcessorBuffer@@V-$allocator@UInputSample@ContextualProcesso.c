/*
 * XREFs of ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800B0D28
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1800AFA64 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v3 != v4 )
    {
      do
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          *(_QWORD *)(v3 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        if ( *(_QWORD *)v3 )
          operator delete(*(void **)v3);
        v3 += 16LL;
      }
      while ( v3 != v4 );
      v3 = *a1;
    }
    v6 = (__int64)(a1[2] - v3) >> 4;
    if ( v6 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v6 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v3);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v3 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v3 - 8);
        if ( v7 < v3 && v3 - v7 - 8 <= 0x1F )
        {
          v3 = *(_QWORD *)(v3 - 8);
          goto LABEL_15;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0xFFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x1800B0E01LL);
  }
}
