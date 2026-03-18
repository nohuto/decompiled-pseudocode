/*
 * XREFs of ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0010BB4
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestGetRequestorProcessId @ 0x1C00789F0 (imp_WdfRequestGetRequestorProcessId.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetIrp(FxRequest *this, _IRP **ppIrp, unsigned __int8 a3)
{
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // edi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
    else
      IsNotCompleted = 0;
    if ( IsNotCompleted >= 0 )
    {
      *ppIrp = this->m_Irp.m_Irp;
    }
    else
    {
      *ppIrp = 0LL;
      IsNotCompleted = -1073741808;
    }
    FxNonPagedObject::Unlock(this, irql, v6);
    return (unsigned int)IsNotCompleted;
  }
  else
  {
    *ppIrp = this->m_Irp.m_Irp;
    return 0LL;
  }
}
