/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_0cd635be87c787a0220700b97c104318___ @ 0x18006A9F4
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___ @ 0x180069E64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cd635be87c787a0220700b97c104318_____lambda_0cd635be87c787a0220700b97c104318___ @ 0x18006BF4C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0cd635be87c78.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_0cd635be87c787a0220700b97c104318___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cd635be87c787a0220700b97c104318_____lambda_0cd635be87c787a0220700b97c104318___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
