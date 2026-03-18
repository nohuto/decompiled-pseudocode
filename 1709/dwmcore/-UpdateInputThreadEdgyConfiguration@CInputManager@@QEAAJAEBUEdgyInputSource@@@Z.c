/*
 * XREFs of ?UpdateInputThreadEdgyConfiguration@CInputManager@@QEAAJAEBUEdgyInputSource@@@Z @ 0x1801950D4
 * Callers:
 *     ?_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z @ 0x180171E28 (-_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180194DF8 (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ.c)
 */

__int64 __fastcall CInputManager::UpdateInputThreadEdgyConfiguration(
        CInputManager *this,
        const struct EdgyInputSource *a2)
{
  signed int CanSendInputThreadMessages; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  CanSendInputThreadMessages = CInputManager::EnsureRenderThreadCanSendInputThreadMessages(this);
  v5 = CanSendInputThreadMessages;
  if ( CanSendInputThreadMessages < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CanSendInputThreadMessages, 0x2BDu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct EdgyInputSource *, int))(**((_QWORD **)this + 30)
                                                                                                 + 152LL))(
           *((_QWORD *)this + 30),
           *((_QWORD *)this + 33),
           4LL,
           a2,
           56);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x2C3u);
  }
  return v5;
}
