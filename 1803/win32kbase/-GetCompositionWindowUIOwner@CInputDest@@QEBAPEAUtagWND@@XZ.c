/*
 * XREFs of ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0109980
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0116C0C (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C013E474 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

struct tagWND *__fastcall CInputDest::GetCompositionWindowUIOwner(CInputDest *this)
{
  struct tagWND *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 21) == 2 )
    v2 = *((_QWORD *)this + 9);
  else
    v2 = 0LL;
  if ( v2 )
    return (struct tagWND *)ApiSetEditionGetCompositionInputWindowUIOwner();
  return result;
}
