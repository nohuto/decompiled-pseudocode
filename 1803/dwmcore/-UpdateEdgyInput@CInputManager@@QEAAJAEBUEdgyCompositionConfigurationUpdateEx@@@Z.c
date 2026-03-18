/*
 * XREFs of ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801CDDD0
 * Callers:
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AC98 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ @ 0x1801CDCB8 (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ.c)
 */

__int64 __fastcall CInputManager::UpdateEdgyInput(
        CInputManager *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  int CanSendInputThreadMessages; // eax
  unsigned int v5; // ebx
  int v6; // eax

  CanSendInputThreadMessages = CInputManager::EnsureRenderThreadCanSendInputThreadMessages(this);
  v5 = CanSendInputThreadMessages;
  if ( CanSendInputThreadMessages < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CanSendInputThreadMessages, 0x268u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct EdgyCompositionConfigurationUpdateEx *, int))(**((_QWORD **)this + 31) + 152LL))(
           *((_QWORD *)this + 31),
           *((_QWORD *)this + 34),
           4LL,
           a2,
           536);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x26Eu);
  }
  return v5;
}
