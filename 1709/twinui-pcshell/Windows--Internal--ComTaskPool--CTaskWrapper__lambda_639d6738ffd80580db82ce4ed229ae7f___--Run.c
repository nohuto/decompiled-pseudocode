/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x1800735A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  void *v3; // rcx
  void *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 16;
  v4 = 0LL;
  result = CMarshaledInterface::_Unmarshal(
             (CMarshaledInterface *)(a1 + 16),
             &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
             &v4,
             0);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *(_QWORD *)(v1 + 8), 0LL);
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
