/*
 * XREFs of ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x1800F8F90
 * Callers:
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$0 @ 0x1800B0F60 (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$0.c)
 * Callees:
 *     ??_G?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800F8FE4 (--_G-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Mic.c)
 */

HLOCAL __fastcall CLocalSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294>::~CLocalSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  HLOCAL result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
        Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>::`scalar deleting destructor'(*(_QWORD *)a1 + 8 * v3++);
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    result = LocalFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
