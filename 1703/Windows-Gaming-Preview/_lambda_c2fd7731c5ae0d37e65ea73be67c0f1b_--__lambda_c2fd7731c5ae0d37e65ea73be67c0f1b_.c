/*
 * XREFs of _lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_::__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_ @ 0x1800047E4
 * Callers:
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream_____ptr64____::_1_::dtor$1 @ 0x18002A639 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--St_ea_18002A639.c)
 *     _Windows::Internal::ComTaskPoolHandler::FireCompletion_::_1_::dtor$1 @ 0x18002AB37 (_Windows--Internal--ComTaskPoolHandler--FireCompletion_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_::__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
