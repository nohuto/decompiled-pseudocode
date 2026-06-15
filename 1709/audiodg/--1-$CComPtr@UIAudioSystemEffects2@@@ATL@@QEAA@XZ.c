/*
 * XREFs of ??1?$CComPtr@UIAudioSystemEffects2@@@ATL@@QEAA@XZ @ 0x1400314F0
 * Callers:
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x140021370 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$1 @ 0x14002137C (_InitializeSystemEffectsInterface_--_1_--dtor$1.c)
 *     _TrackSystemEffectBehavior_::_1_::dtor$0_0 @ 0x140021850 (_TrackSystemEffectBehavior_--_1_--dtor$0_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
