/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_::Run @ 0x180046A70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  int result; // eax
  void *v3; // rcx
  void *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 16;
  v4 = 0LL;
  result = CMarshaledInterface::_Unmarshal(
             (CMarshaledInterface *)(a1 + 16),
             &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a,
             &v4,
             0);
  if ( result >= 0 )
    result = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *(unsigned int *)(v1 + 8));
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
