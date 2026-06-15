/*
 * XREFs of ??1?$CAutoPtr@VAvoidEndpointPolicyRule@@@ATL@@QEAA@XZ @ 0x18009A0D4
 * Callers:
 *     _DynamicAudioEndpointManager::CreateInstance_::_1_::dtor$1 @ 0x180069C02 (_DynamicAudioEndpointManager--CreateInstance_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$7 @ 0x1800FC121 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<AvoidEndpointPolicyRule>::~CAutoPtr<AvoidEndpointPolicyRule>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 8) + 24LL))(v2 + 8, 1LL);
  *a1 = 0LL;
  return result;
}
