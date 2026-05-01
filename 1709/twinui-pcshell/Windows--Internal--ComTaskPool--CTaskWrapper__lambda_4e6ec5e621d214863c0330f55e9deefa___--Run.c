/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4e6ec5e621d214863c0330f55e9deefa___::Run @ 0x180154F40
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180154A60 (CreationThreadDispatcher--RunSync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4e6ec5e621d214863c0330f55e9deefa___::Run(
        _QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1[2];
  v5[0] = v1;
  if ( v1 )
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 52));
  v3 = a1[3];
  v5[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return CreationThreadDispatcher::RunSync__lambda_e5d643bc643c8a09454132ff8d011188___(a1[4], v5);
}
