/*
 * XREFs of _MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor$10 @ 0x1800C3DEA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800145DC (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 0x10);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~0x10u;
    return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((_QWORD *)(a2 + 112));
  }
  return result;
}
