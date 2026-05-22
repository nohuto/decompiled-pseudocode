/*
 * XREFs of ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800AFD1C
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF5B8 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF814 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAAEAUContextualProcessorMetadata@ContextualProcessorBuffer@@AEBU23@@Z @ 0x1800B0E04 (--$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UContextual.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContextualProcessorBuffer::AddProcessor(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = a2;
  }
  v10 = *a3;
  v6 = *((_QWORD *)a3 + 1);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)a3 + 1));
    v11 = v6;
  }
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::emplace_back<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
    a1 + 32,
    &v9);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v7 = *((_QWORD *)a3 + 1);
  if ( v7 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
