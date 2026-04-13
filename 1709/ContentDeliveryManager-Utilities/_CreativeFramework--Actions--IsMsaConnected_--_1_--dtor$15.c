/*
 * XREFs of _CreativeFramework::Actions::IsMsaConnected_::_1_::dtor$15 @ 0x1800B9A0A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004350 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall CreativeFramework::Actions::IsMsaConnected_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((_QWORD *)(a2 + 104));
  }
  return result;
}
