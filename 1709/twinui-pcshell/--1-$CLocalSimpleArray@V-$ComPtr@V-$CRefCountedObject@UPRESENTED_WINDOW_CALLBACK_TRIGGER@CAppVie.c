/*
 * XREFs of ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x18003DD58
 * Callers:
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$0 @ 0x1801E8729 (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLocalSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294>::~CLocalSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294>(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      if ( v3 )
      {
        *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
    LocalFree(*(HLOCAL *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
