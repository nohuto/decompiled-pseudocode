/*
 * XREFs of _XamlAllUpViewHost::GetFrameForMonitor_::_1_::dtor$0 @ 0x18020B393
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall XamlAllUpViewHost::GetFrameForMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 120));
  }
  return result;
}
