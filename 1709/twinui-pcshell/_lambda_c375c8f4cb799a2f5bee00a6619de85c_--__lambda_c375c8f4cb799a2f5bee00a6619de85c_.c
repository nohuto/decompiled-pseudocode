/*
 * XREFs of _lambda_c375c8f4cb799a2f5bee00a6619de85c_::__lambda_c375c8f4cb799a2f5bee00a6619de85c_ @ 0x18006C914
 * Callers:
 *     _CFrameApplicationPresentation::SetTitlebarConfiguration_::_1_::dtor$4 @ 0x1801E92E0 (_CFrameApplicationPresentation--SetTitlebarConfiguration_--_1_--dtor$4.c)
 *     _CFrameApplicationPresentation::QueueAsyncCallback_::_1_::dtor$4 @ 0x1801E93E8 (_CFrameApplicationPresentation--QueueAsyncCallback_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c375c8f4cb799a2f5bee00a6619de85c_::__lambda_c375c8f4cb799a2f5bee00a6619de85c_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
