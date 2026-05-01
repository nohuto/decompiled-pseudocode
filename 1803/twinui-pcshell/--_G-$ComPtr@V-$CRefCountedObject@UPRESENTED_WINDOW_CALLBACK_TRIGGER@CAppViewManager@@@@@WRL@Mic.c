/*
 * XREFs of ??_G?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800F8FE4
 * Callers:
 *     ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x1800F8F90 (--1-$CLocalSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppVie.c)
 *     ??1CAppViewManager@@UEAA@XZ @ 0x18011D900 (--1CAppViewManager@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x18000CBD0 (-Release@-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>::`scalar deleting destructor'(
        char **a1)
{
  char *v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release )
      CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(v2);
    else
      v3();
  }
  return a1;
}
