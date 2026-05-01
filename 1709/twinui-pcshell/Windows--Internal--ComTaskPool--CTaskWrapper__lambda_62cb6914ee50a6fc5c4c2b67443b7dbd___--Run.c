/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd___::Run @ 0x180177460
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180176248 (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd___::Run(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(a1 + 16));
  v6[0] = v1;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  v6[1] = v3;
  return CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(v4, v6);
}
