/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___ @ 0x1801023D4
 * Callers:
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x18010DCF0 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

void __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  struct IUnknown *v5; // rbp

  for ( i = *(_QWORD *)(a1 + 16); i; --i )
  {
    v5 = *(struct IUnknown **)(*(_QWORD *)(a1 + 8) + 8 * i - 8);
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a2 + 8), v5)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a2 + 8) + 168LL))(
           *(_QWORD *)(a2 + 8),
           v5) )
    {
      CApplicationManager::_ForgetApplicationNoLock(*(_QWORD *)a2, v5, 2LL);
    }
  }
}
