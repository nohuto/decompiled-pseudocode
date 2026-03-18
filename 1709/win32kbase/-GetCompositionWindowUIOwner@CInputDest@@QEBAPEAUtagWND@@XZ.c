/*
 * XREFs of ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C011710C
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C0139E3C (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

struct tagWND *__fastcall CInputDest::GetCompositionWindowUIOwner(CInputDest *this)
{
  struct tagWND *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 23) == 2 )
    v2 = *((_QWORD *)this + 10);
  else
    v2 = 0LL;
  if ( v2 )
    return (struct tagWND *)ApiSetEditionGetCompositionInputWindowUIOwner();
  return result;
}
