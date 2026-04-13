/*
 * XREFs of _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$19 @ 0x1800B936F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004350 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor_19(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 56) & 0x20);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~0x20u;
    return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((_QWORD *)(a2 + 72));
  }
  return result;
}
