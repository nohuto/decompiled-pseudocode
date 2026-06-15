/*
 * XREFs of ??1?$CComPtr@UIPolicyRule@@@ATL@@QEAA@XZ @ 0x180098D7C
 * Callers:
 *     _DynamicAudioEndpointManager::Initialize_::_1_::dtor$0 @ 0x180069C0E (_DynamicAudioEndpointManager--Initialize_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$2 @ 0x1800FC0F1 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$2.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$1 @ 0x1800FCF2A (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<IPolicyRule>::~CComPtr<IPolicyRule>(PersistedEndpointPolicyRule **a1)
{
  PersistedEndpointPolicyRule *v1; // rcx
  unsigned int (__fastcall *v2)(PersistedEndpointPolicyRule *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(unsigned int (__fastcall **)(PersistedEndpointPolicyRule *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == PersistedEndpointPolicyRule::Release )
      PersistedEndpointPolicyRule::Release(v1);
    else
      v2(v1);
  }
}
