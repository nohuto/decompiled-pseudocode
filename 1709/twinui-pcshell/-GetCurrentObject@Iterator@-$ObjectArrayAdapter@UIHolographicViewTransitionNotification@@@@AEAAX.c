/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAXXZ @ 0x180102AC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4262453b2a750cdf384f2747cf54dd98___::Run @ 0x180105A80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4262453b2a750cdf384f2747cf54dd98___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  for ( result = *((_QWORD *)a1 + 2); *a1 < *(_DWORD *)(result + 8); result = *((_QWORD *)a1 + 2) )
  {
    v5 = *v1;
    v6 = **((_QWORD **)a1 + 2);
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
               v6,
               *a1,
               &GUID_76bb2cfb_c246_41ec_b9c3_671e5347cf51,
               v1);
    if ( (int)result >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)result);
    ++*a1;
  }
  return result;
}
