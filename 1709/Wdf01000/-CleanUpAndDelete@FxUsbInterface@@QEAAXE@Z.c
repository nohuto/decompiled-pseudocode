/*
 * XREFs of ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C0092CE0
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C0090A3C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C0091B28 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxUsbInterface::CleanUpAndDelete(FxUsbInterface *this, unsigned __int8 a2, unsigned __int8 a3)
{
  FxUsbPipe **m_ConfiguredPipes; // rdi
  unsigned int m_NumberOfConfiguredPipes; // ebp
  unsigned __int8 v6; // dl
  FxUsbDevice *m_UsbDevice; // rcx
  unsigned __int8 v8; // r8
  unsigned int v9; // esi
  FxUsbPipe **v10; // rbx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = a2;
  FxNonPagedObject::Lock(this->m_UsbDevice, &irql, a3);
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  m_NumberOfConfiguredPipes = this->m_NumberOfConfiguredPipes;
  v6 = irql;
  m_UsbDevice = this->m_UsbDevice;
  this->m_ConfiguredPipes = 0LL;
  this->m_NumberOfConfiguredPipes = 0;
  FxNonPagedObject::Unlock(m_UsbDevice, v6, v8);
  if ( m_ConfiguredPipes )
  {
    v9 = 0;
    if ( m_NumberOfConfiguredPipes )
    {
      v10 = m_ConfiguredPipes;
      do
      {
        if ( !*v10 )
          break;
        (*v10)->DeleteObject(*v10);
        ++v9;
        ++v10;
      }
      while ( v9 < m_NumberOfConfiguredPipes );
    }
    FxPoolFree(m_ConfiguredPipes);
  }
}
