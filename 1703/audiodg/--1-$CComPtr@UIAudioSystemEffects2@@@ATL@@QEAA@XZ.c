/*
 * XREFs of ??1?$CComPtr@UIAudioSystemEffects2@@@ATL@@QEAA@XZ @ 0x140031C28
 * Callers:
 *     _TrackSystemEffectBehavior_::_1_::dtor$0 @ 0x140020B10 (_TrackSystemEffectBehavior_--_1_--dtor$0.c)
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$3 @ 0x140021024 (_CPipeInstance--ActivateAPOs_--_1_--dtor$3.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x140021C80 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$1 @ 0x140021C8C (_InitializeSystemEffectsInterface_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$0 @ 0x140021DA0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$1 @ 0x140021DAC (_FillAPOInitSystemEffectsStructure_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$2 @ 0x140021DB8 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$2.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$4 @ 0x140021DD0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$4.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x140021DDC (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$6 @ 0x140021DE8 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
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
