/*
 * XREFs of ??1?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9024
 * Callers:
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$2 @ 0x1800B0F78 (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$2.c)
 *     _CAppViewManager::_AddPresentedWindowCallbackTrigger_::_1_::dtor$0 @ 0x1800B0F9C (_CAppViewManager--_AddPresentedWindowCallbackTrigger_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>::~ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>(
        char **a1)
{
  char **result; // rax
  char *v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release )
      return (char **)CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(v2);
    else
      return (char **)v3();
  }
  return result;
}
