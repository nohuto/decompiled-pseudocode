/*
 * XREFs of ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1800C2DCC
 * Callers:
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1800C37C4 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1FD4 (--4-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?begin@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@std@@@std@@@2@XZ @ 0x1800C50DC (-begin@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@USaD.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CWorkFifo::GetWorkItem(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 **v6; // rax
  __int64 **v7; // r8
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  int v11; // eax
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 144);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 144));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( !*(_BYTE *)(a1 + 136) && !*(_BYTE *)(a1 + 137) && *(_QWORD *)(a1 + 128) )
  {
    v6 = (__int64 **)std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::begin(a1 + 96, v13);
    v7 = v6;
    if ( *v6 )
      v8 = **v6;
    else
      v8 = 0LL;
    std::shared_ptr<CWorkFifo::WorkItem>::operator=(
      a2,
      *(__int64 **)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v7[2] & (*(_QWORD *)(v8 + 16) - 1LL))));
    v9 = *(std::_Ref_count_base **)(*(_QWORD *)(*(_QWORD *)(a1 + 104)
                                              + 8 * (*(_QWORD *)(a1 + 120) & (*(_QWORD *)(a1 + 112) - 1LL)))
                                  + 8LL);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( (*(_QWORD *)(a1 + 128))-- == 1LL )
      *(_QWORD *)(a1 + 120) = 0LL;
    else
      ++*(_QWORD *)(a1 + 120);
  }
  v11 = _Mtx_unlock(v4);
  if ( v11 )
    std::_Throw_C_error(v11);
  return a2;
}
