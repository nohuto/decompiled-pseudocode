/*
 * XREFs of ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180073184
 * Callers:
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800675A0 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007523C (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs(
        CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>(this);
}
