/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d308deda45cd9033e81a1201ec7127ab___::Run @ 0x180176FA0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180176A68 (CreationThreadDispatcher--RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d308deda45cd9033e81a1201ec7127ab___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___(*(_QWORD *)(a1 + 24), &v4);
}
