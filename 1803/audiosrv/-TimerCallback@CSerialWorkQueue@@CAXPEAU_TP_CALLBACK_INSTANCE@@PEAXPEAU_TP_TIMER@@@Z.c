/*
 * XREFs of ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002AA10
 * Callers:
 *     <none>
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Do_call @ 0x18002AAC0 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Do_call.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSerialWorkQueue::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rax
  int v8; // eax

  v4 = Context[3];
  v5 = _Mtx_lock((_Mtx_t)(v4 + 88));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( !*(_BYTE *)(v4 + 80) )
  {
    v6 = *(_QWORD *)(Context[1] + 56LL);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL);
      if ( v7 == std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Do_call )
      {
        std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Do_call(v6);
        goto LABEL_7;
      }
    }
    else
    {
      std::_Xbad_function_call();
    }
    v7(v6);
  }
LABEL_7:
  v8 = _Mtx_unlock((_Mtx_t)(v4 + 88));
  if ( v8 )
    std::_Throw_C_error(v8);
}
