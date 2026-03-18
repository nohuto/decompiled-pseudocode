/*
 * XREFs of ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C006BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqD @ 0x1C006A4C8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qD @ 0x1C006BFA0 (WPP_IFR_SF_qD.c)
 */

void __fastcall FxDmaSystemTransaction::_SystemDmaCompletion(
        _DMA_ADAPTER *__formal,
        _DEVICE_OBJECT *a2,
        FxNonPagedObject *CompletionContext,
        unsigned int Status)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // r8
  char v8; // bp
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx
  const void *v13; // rcx
  unsigned __int8 oldIrql; // [rsp+80h] [rbp+18h] BYREF

  m_Globals = CompletionContext->m_Globals;
  FxNonPagedObject::Lock(CompletionContext, &oldIrql, (unsigned __int8)CompletionContext);
  if ( *(_QWORD *)&CompletionContext[2].m_SpinLock.m_DbgFlagIsInitialized )
  {
    HIDWORD(CompletionContext[2].m_SpinLock.m_Lock) = Status;
    v8 = 1;
    BYTE1(CompletionContext[2].m_SpinLock.m_Lock) = 1;
  }
  else
  {
    v8 = 0;
  }
  FxNonPagedObject::Unlock(CompletionContext, oldIrql, v7);
  if ( v8 == 1 )
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      m_ObjectSize = CompletionContext->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qD(m_Globals, v9, 0xFu, 0xCu, WPP_FxDmaTransactionSystem_cpp_Traceguids, _a2, Status);
    }
  }
  else
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      v13 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !CompletionContext->m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qqqD(
        m_Globals,
        v9,
        v10,
        0xDu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        CompletionContext[2].m_DisposeSingleEntry.Next,
        CompletionContext[2].m_DeviceBase,
        v13,
        Status);
    }
    CompletionContext->__vftable[2].QueryInterface(CompletionContext, (FxQueryInterfaceParams *)Status);
  }
}
