/*
 * XREFs of ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18000A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800098C4 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 */

__int64 __fastcall CAppViewManager::ApplicationChanged(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        struct IUnknown *a4)
{
  int v4; // eax

  if ( a3 <= 0xF )
  {
    v4 = 33088;
    if ( _bittest(&v4, a3) )
      CAppViewManager::_InvokePresentedWindowCallbackTriggers(a1 - 48, a2, a3, a4);
  }
  return 0LL;
}
